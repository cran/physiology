## ----setup, include=FALSE------------------------------------------------
knitr::opts_chunk$set(echo = TRUE)

suppressPackageStartupMessages({
  library(childsds)
  library(dplyr)
  library(magrittr)
})

## ---- echo = T-----------------------------------------------------------
# units of ml per cmH20
min_compliance <- 0.5
max_compliance <- 1.5
# unit cmH20
driving_pressure <- 15
insp_tube_vol_diff <- driving_pressure * (max_compliance - min_compliance)

## ----getmedianweights----------------------------------------------------
dat <- as_tibble(
  childsds::make_percentile_tab(
    childsds::who.ref, 
    item = "weight",
    perc = 50,
    stack = TRUE, 
    sex = "sex"))
dat <- dplyr::filter(dat, sex == "female", age <= 1) %>%
  dplyr::rename(weight = value) %>% 
  dplyr::select(age, weight)

## ----deadspacecalc-------------------------------------------------------
dat <- dat %>%
  mutate(tidal_volume = 7 * weight) %>% 
  mutate(error_fraction = insp_tube_vol_diff / tidal_volume)

plot(dat[c("weight", "error_fraction")], type = "l")

