#' The 'greencrab.toolkit' package.
#'
#' @description These Bayesian models written in the 'Stan' probabilistic language can be used to interpret green crab trapping and environmental DNA monitoring data, either independently or jointly. Detailed model information is found in Keller (2022) <doi:10.1002/eap.2561>.
#'
#' @docType package
#' @name greencrab.toolkit-package
#' @aliases greencrab.toolkit
#' @useDynLib greencrab.toolkit, .registration = TRUE
#' @import methods
#' @import Rcpp
#' @importFrom rstan sampling
#' @importFrom rstantools rstan_config
#' @importFrom RcppParallel RcppParallelLibs
#'
#' @references
#' Stan Development Team (2023). RStan: the R interface to Stan. R package version 2.21.8. https://mc-stan.org
#'
NULL
