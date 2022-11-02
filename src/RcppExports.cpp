// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cpp_sumGroups_dgc
arma::mat cpp_sumGroups_dgc(const arma::vec& x, const arma::uvec& p, const arma::vec& i, unsigned ncol, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _presto_cpp_sumGroups_dgc(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dgc(x, p, i, ncol, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sumGroups_dgc_T
arma::mat cpp_sumGroups_dgc_T(const arma::vec& x, const arma::vec& p, const arma::vec& i, int ncol, int nrow, const arma::uvec& groups, int ngroups);
RcppExport SEXP _presto_cpp_sumGroups_dgc_T(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< int >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dgc_T(x, p, i, ncol, nrow, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sumGroups_dense
arma::mat cpp_sumGroups_dense(const arma::mat& X, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _presto_cpp_sumGroups_dense(SEXP XSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dense(X, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sumGroups_dense_T
arma::mat cpp_sumGroups_dense_T(const arma::mat& X, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _presto_cpp_sumGroups_dense_T(SEXP XSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sumGroups_dense_T(X, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nnzeroGroups_dense
arma::mat cpp_nnzeroGroups_dense(const arma::mat& X, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _presto_cpp_nnzeroGroups_dense(SEXP XSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nnzeroGroups_dense(X, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nnzeroGroups_dense_T
arma::mat cpp_nnzeroGroups_dense_T(const arma::mat& X, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _presto_cpp_nnzeroGroups_dense_T(SEXP XSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nnzeroGroups_dense_T(X, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nnzeroGroups_dgc
arma::mat cpp_nnzeroGroups_dgc(const arma::uvec& p, const arma::vec& i, unsigned ncol, const arma::uvec& groups, unsigned ngroups);
RcppExport SEXP _presto_cpp_nnzeroGroups_dgc(SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nnzeroGroups_dgc(p, i, ncol, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}
// cpp_in_place_rank_mean
std::list<float> cpp_in_place_rank_mean(arma::vec& v_temp, int idx_begin, int idx_end);
RcppExport SEXP _presto_cpp_in_place_rank_mean(SEXP v_tempSEXP, SEXP idx_beginSEXP, SEXP idx_endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type v_temp(v_tempSEXP);
    Rcpp::traits::input_parameter< int >::type idx_begin(idx_beginSEXP);
    Rcpp::traits::input_parameter< int >::type idx_end(idx_endSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_in_place_rank_mean(v_temp, idx_begin, idx_end));
    return rcpp_result_gen;
END_RCPP
}
// cpp_rank_matrix_dgc
std::vector<std::list<float> > cpp_rank_matrix_dgc(arma::vec& x, const arma::vec& p, int nrow, int ncol);
RcppExport SEXP _presto_cpp_rank_matrix_dgc(SEXP xSEXP, SEXP pSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_rank_matrix_dgc(x, p, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
// cpp_rank_matrix_dense
Rcpp::List cpp_rank_matrix_dense(arma::mat& X);
RcppExport SEXP _presto_cpp_rank_matrix_dense(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_rank_matrix_dense(X));
    return rcpp_result_gen;
END_RCPP
}
// cpp_nnzeroGroups_dgc_T
arma::mat cpp_nnzeroGroups_dgc_T(const arma::vec& p, const arma::vec& i, int ncol, int nrow, const arma::uvec& groups, int ngroups);
RcppExport SEXP _presto_cpp_nnzeroGroups_dgc_T(SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP groupsSEXP, SEXP ngroupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< int >::type ngroups(ngroupsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_nnzeroGroups_dgc_T(p, i, ncol, nrow, groups, ngroups));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_presto_cpp_sumGroups_dgc", (DL_FUNC) &_presto_cpp_sumGroups_dgc, 6},
    {"_presto_cpp_sumGroups_dgc_T", (DL_FUNC) &_presto_cpp_sumGroups_dgc_T, 7},
    {"_presto_cpp_sumGroups_dense", (DL_FUNC) &_presto_cpp_sumGroups_dense, 3},
    {"_presto_cpp_sumGroups_dense_T", (DL_FUNC) &_presto_cpp_sumGroups_dense_T, 3},
    {"_presto_cpp_nnzeroGroups_dense", (DL_FUNC) &_presto_cpp_nnzeroGroups_dense, 3},
    {"_presto_cpp_nnzeroGroups_dense_T", (DL_FUNC) &_presto_cpp_nnzeroGroups_dense_T, 3},
    {"_presto_cpp_nnzeroGroups_dgc", (DL_FUNC) &_presto_cpp_nnzeroGroups_dgc, 5},
    {"_presto_cpp_in_place_rank_mean", (DL_FUNC) &_presto_cpp_in_place_rank_mean, 3},
    {"_presto_cpp_rank_matrix_dgc", (DL_FUNC) &_presto_cpp_rank_matrix_dgc, 4},
    {"_presto_cpp_rank_matrix_dense", (DL_FUNC) &_presto_cpp_rank_matrix_dense, 1},
    {"_presto_cpp_nnzeroGroups_dgc_T", (DL_FUNC) &_presto_cpp_nnzeroGroups_dgc_T, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_presto(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
