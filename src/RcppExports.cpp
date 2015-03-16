// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// xls_formats
std::map<int,std::string> xls_formats(std::string path);
RcppExport SEXP exell_xls_formats(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    __result = Rcpp::wrap(xls_formats(path));
    return __result;
END_RCPP
}
// xls_sheets
std::vector<std::string> xls_sheets(std::string path);
RcppExport SEXP exell_xls_sheets(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    __result = Rcpp::wrap(xls_sheets(path));
    return __result;
END_RCPP
}