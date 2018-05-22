// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// pca_projection
SEXP pca_projection(SEXP R_C, int dimensions);
RcppExport SEXP _DDRTree_pca_projection(SEXP R_CSEXP, SEXP dimensionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type R_C(R_CSEXP);
    Rcpp::traits::input_parameter< int >::type dimensions(dimensionsSEXP);
    rcpp_result_gen = Rcpp::wrap(pca_projection(R_C, dimensions));
    return rcpp_result_gen;
END_RCPP
}
// sqdist
SEXP sqdist(SEXP R_a, SEXP R_b);
RcppExport SEXP _DDRTree_sqdist(SEXP R_aSEXP, SEXP R_bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type R_a(R_aSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_b(R_bSEXP);
    rcpp_result_gen = Rcpp::wrap(sqdist(R_a, R_b));
    return rcpp_result_gen;
END_RCPP
}
// DDRTree_reduce_dim
Rcpp::List DDRTree_reduce_dim(SEXP R_X, SEXP R_Z, SEXP R_Y, SEXP R_W, SEXP R_dimensions, SEXP R_maxiter, SEXP R_num_clusters, SEXP R_sigma, SEXP R_lambda, SEXP R_gamma, SEXP R_eps, SEXP R_no_reduction, SEXP R_verbose);
RcppExport SEXP _DDRTree_DDRTree_reduce_dim(SEXP R_XSEXP, SEXP R_ZSEXP, SEXP R_YSEXP, SEXP R_WSEXP, SEXP R_dimensionsSEXP, SEXP R_maxiterSEXP, SEXP R_num_clustersSEXP, SEXP R_sigmaSEXP, SEXP R_lambdaSEXP, SEXP R_gammaSEXP, SEXP R_epsSEXP, SEXP R_no_reductionSEXP, SEXP R_verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type R_X(R_XSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_Z(R_ZSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_Y(R_YSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_W(R_WSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_dimensions(R_dimensionsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_maxiter(R_maxiterSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_num_clusters(R_num_clustersSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_sigma(R_sigmaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_lambda(R_lambdaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_gamma(R_gammaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_eps(R_epsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_no_reduction(R_no_reductionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_verbose(R_verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(DDRTree_reduce_dim(R_X, R_Z, R_Y, R_W, R_dimensions, R_maxiter, R_num_clusters, R_sigma, R_lambda, R_gamma, R_eps, R_no_reduction, R_verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_DDRTree_pca_projection", (DL_FUNC) &_DDRTree_pca_projection, 2},
    {"_DDRTree_sqdist", (DL_FUNC) &_DDRTree_sqdist, 2},
    {"_DDRTree_DDRTree_reduce_dim", (DL_FUNC) &_DDRTree_DDRTree_reduce_dim, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_DDRTree(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
