// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// calculate_weights_DM
Eigen::VectorXd calculate_weights_DM(double cur_e, double prev_e, Eigen::MatrixXd eps, Eigen::VectorXd prev_wts);
RcppExport SEXP ABSEIR_calculate_weights_DM(SEXP cur_eSEXP, SEXP prev_eSEXP, SEXP epsSEXP, SEXP prev_wtsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type cur_e(cur_eSEXP);
    Rcpp::traits::input_parameter< double >::type prev_e(prev_eSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type prev_wts(prev_wtsSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_weights_DM(cur_e, prev_e, eps, prev_wts));
    return rcpp_result_gen;
END_RCPP
}
// solve_for_epsilon
double solve_for_epsilon(double LB, double UB, double prev_e, double alpha, Eigen::MatrixXd eps, Eigen::VectorXd prev_wts);
RcppExport SEXP ABSEIR_solve_for_epsilon(SEXP LBSEXP, SEXP UBSEXP, SEXP prev_eSEXP, SEXP alphaSEXP, SEXP epsSEXP, SEXP prev_wtsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type LB(LBSEXP);
    Rcpp::traits::input_parameter< double >::type UB(UBSEXP);
    Rcpp::traits::input_parameter< double >::type prev_e(prev_eSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type prev_wts(prev_wtsSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_for_epsilon(LB, UB, prev_e, alpha, eps, prev_wts));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_mod_dataModel();
RcppExport SEXP _rcpp_module_boot_mod_distanceModel();
RcppExport SEXP _rcpp_module_boot_mod_exposureModel();
RcppExport SEXP _rcpp_module_boot_mod_initialValueContainer();
RcppExport SEXP _rcpp_module_boot_mod_reinfectionModel();
RcppExport SEXP _rcpp_module_boot_mod_samplingControl();
RcppExport SEXP _rcpp_module_boot_mod_spatialSEIRModel();
RcppExport SEXP _rcpp_module_boot_mod_transitionPriors();

static const R_CallMethodDef CallEntries[] = {
    {"ABSEIR_calculate_weights_DM", (DL_FUNC) &ABSEIR_calculate_weights_DM, 4},
    {"ABSEIR_solve_for_epsilon", (DL_FUNC) &ABSEIR_solve_for_epsilon, 6},
    {"_rcpp_module_boot_mod_dataModel", (DL_FUNC) &_rcpp_module_boot_mod_dataModel, 0},
    {"_rcpp_module_boot_mod_distanceModel", (DL_FUNC) &_rcpp_module_boot_mod_distanceModel, 0},
    {"_rcpp_module_boot_mod_exposureModel", (DL_FUNC) &_rcpp_module_boot_mod_exposureModel, 0},
    {"_rcpp_module_boot_mod_initialValueContainer", (DL_FUNC) &_rcpp_module_boot_mod_initialValueContainer, 0},
    {"_rcpp_module_boot_mod_reinfectionModel", (DL_FUNC) &_rcpp_module_boot_mod_reinfectionModel, 0},
    {"_rcpp_module_boot_mod_samplingControl", (DL_FUNC) &_rcpp_module_boot_mod_samplingControl, 0},
    {"_rcpp_module_boot_mod_spatialSEIRModel", (DL_FUNC) &_rcpp_module_boot_mod_spatialSEIRModel, 0},
    {"_rcpp_module_boot_mod_transitionPriors", (DL_FUNC) &_rcpp_module_boot_mod_transitionPriors, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_ABSEIR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}