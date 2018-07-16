// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// pres_atm_kPa
NumericVector pres_atm_kPa(NumericVector altitude_m);
RcppExport SEXP _physiology_pres_atm_kPa(SEXP altitude_mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type altitude_m(altitude_mSEXP);
    rcpp_result_gen = Rcpp::wrap(pres_atm_kPa(altitude_m));
    return rcpp_result_gen;
END_RCPP
}
// pres_atm_frac
NumericVector pres_atm_frac(NumericVector altitude_m);
RcppExport SEXP _physiology_pres_atm_frac(SEXP altitude_mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type altitude_m(altitude_mSEXP);
    rcpp_result_gen = Rcpp::wrap(pres_atm_frac(altitude_m));
    return rcpp_result_gen;
END_RCPP
}
// getGeopotential
float getGeopotential(float altitude_km);
RcppExport SEXP _physiology_getGeopotential(SEXP altitude_kmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type altitude_km(altitude_kmSEXP);
    rcpp_result_gen = Rcpp::wrap(getGeopotential(altitude_km));
    return rcpp_result_gen;
END_RCPP
}
// getStandardTemperature
float getStandardTemperature(float altitude_km);
RcppExport SEXP _physiology_getStandardTemperature(SEXP altitude_kmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type altitude_km(altitude_kmSEXP);
    rcpp_result_gen = Rcpp::wrap(getStandardTemperature(altitude_km));
    return rcpp_result_gen;
END_RCPP
}
// getStandardPressure
float getStandardPressure(float altitude_m);
RcppExport SEXP _physiology_getStandardPressure(SEXP altitude_mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type altitude_m(altitude_mSEXP);
    rcpp_result_gen = Rcpp::wrap(getStandardPressure(altitude_m));
    return rcpp_result_gen;
END_RCPP
}
