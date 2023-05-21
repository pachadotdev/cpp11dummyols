// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// cpp11_naive_ols.cpp
doubles_matrix<> naive_ols(doubles_matrix<> X, doubles_matrix<> Y);
extern "C" SEXP _cpp11naiveols_naive_ols(SEXP X, SEXP Y) {
  BEGIN_CPP11
    return cpp11::as_sexp(naive_ols(cpp11::as_cpp<cpp11::decay_t<doubles_matrix<>>>(X), cpp11::as_cpp<cpp11::decay_t<doubles_matrix<>>>(Y)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_cpp11naiveols_naive_ols", (DL_FUNC) &_cpp11naiveols_naive_ols, 2},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_cpp11naiveols(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
