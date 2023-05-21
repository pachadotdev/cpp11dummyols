#' @useDynLib cpp11naiveols, .registration = TRUE
NULL

# export the naive_ols function
#' @export
#' @rdname naive_ols
#' @param X numeric matrix
#' @param Y numeric matrix
#' @return numeric matrix
#' @examples
#' X <- matrix(1, nrow = nrow(mtcars), ncol = 2)
#' X[, 2] <- mtcars$wt
#' Y <- matrix(mtcars$mpg, nrow = nrow(mtcars), ncol = 1)
#' cpp11_naive_ols(X, Y)
cpp11_naive_ols <- function(X, Y) {
  naive_ols(X, Y)
}
