// Generated by rstantools.  Do not edit by hand.

/*
    greencrab.toolkit is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    greencrab.toolkit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with greencrab.toolkit.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.26.1-4-gd72b68b7-dirty
#include <stan/model/model_header.hpp>
namespace model_greencrabtools_joint_namespace {
inline void validate_positive_index(const char* var_name, const char* expr,
                                    int val) {
  if (val < 1) {
    std::stringstream msg;
    msg << "Found dimension size less than one in simplex declaration"
        << "; variable=" << var_name << "; dimension size expression=" << expr
        << "; expression value=" << val;
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
inline void validate_unit_vector_index(const char* var_name, const char* expr,
                                       int val) {
  if (val <= 1) {
    std::stringstream msg;
    if (val == 1) {
      msg << "Found dimension size one in unit vector declaration."
          << " One-dimensional unit vector is discrete"
          << " but the target distribution must be continuous."
          << " variable=" << var_name << "; dimension size expression=" << expr;
    } else {
      msg << "Found dimension size less than one in unit vector declaration"
          << "; variable=" << var_name << "; dimension size expression=" << expr
          << "; expression value=" << val;
    }
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using std::pow;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using stan::model::cons_list;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::nil_index_list;
using namespace stan::math;
using stan::math::pow; 
stan::math::profile_map profiles__;
static int current_statement__= 0;
static const std::vector<string> locations_array__ = {" (found before start of program)",
                                                      " (in 'greencrabtools_joint', line 13, column 4 to column 16)",
                                                      " (in 'greencrabtools_joint', line 16, column 4 to column 33)",
                                                      " (in 'greencrabtools_joint', line 17, column 4 to column 31)",
                                                      " (in 'greencrabtools_joint', line 18, column 4 to column 45)",
                                                      " (in 'greencrabtools_joint', line 19, column 4 to column 23)",
                                                      " (in 'greencrabtools_joint', line 32, column 2 to column 10)",
                                                      " (in 'greencrabtools_joint', line 33, column 2 to column 19)",
                                                      " (in 'greencrabtools_joint', line 23, column 8 to column 48)",
                                                      " (in 'greencrabtools_joint', line 22, column 15 to line 24, column 5)",
                                                      " (in 'greencrabtools_joint', line 22, column 2 to line 24, column 5)",
                                                      " (in 'greencrabtools_joint', line 26, column 8 to column 33)",
                                                      " (in 'greencrabtools_joint', line 25, column 16 to line 27, column 5)",
                                                      " (in 'greencrabtools_joint', line 25, column 2 to line 27, column 5)",
                                                      " (in 'greencrabtools_joint', line 29, column 2 to column 49)",
                                                      " (in 'greencrabtools_joint', line 2, column 4 to column 19)",
                                                      " (in 'greencrabtools_joint', line 3, column 4 to column 19)",
                                                      " (in 'greencrabtools_joint', line 4, column 10 to column 11)",
                                                      " (in 'greencrabtools_joint', line 4, column 4 to column 28)",
                                                      " (in 'greencrabtools_joint', line 5, column 10 to column 11)",
                                                      " (in 'greencrabtools_joint', line 5, column 4 to column 28)",
                                                      " (in 'greencrabtools_joint', line 6, column 10 to column 11)",
                                                      " (in 'greencrabtools_joint', line 6, column 4 to column 28)",
                                                      " (in 'greencrabtools_joint', line 7, column 4 to column 14)",
                                                      " (in 'greencrabtools_joint', line 8, column 4 to column 13)",
                                                      " (in 'greencrabtools_joint', line 9, column 4 to column 22)",
                                                      " (in 'greencrabtools_joint', line 10, column 4 to column 30)"};
#include <stan_meta_header.hpp>
class model_greencrabtools_joint final : public model_base_crtp<model_greencrabtools_joint> {
private:
  int S;
  int C;
  std::vector<int> N;
  std::vector<int> K;
  std::vector<int> E;
  double beta;
  double p10;
  double phi;
  std::vector<double> logmupriors;
 
public:
  ~model_greencrabtools_joint() { }
  
  inline std::string model_name() const final { return "model_greencrabtools_joint"; }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.26.1-4-gd72b68b7-dirty", "stancflags = "};
  }
  
  
  model_greencrabtools_joint(stan::io::var_context& context__,
                             unsigned int random_seed__ = 0,
                             std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "model_greencrabtools_joint_namespace::model_greencrabtools_joint";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 15;
      context__.validate_dims("data initialization","S","int",
          context__.to_vec());
      S = std::numeric_limits<int>::min();
      
      current_statement__ = 15;
      S = context__.vals_i("S")[(1 - 1)];
      current_statement__ = 15;
      current_statement__ = 15;
      check_greater_or_equal(function__, "S", S, 1);
      current_statement__ = 16;
      context__.validate_dims("data initialization","C","int",
          context__.to_vec());
      C = std::numeric_limits<int>::min();
      
      current_statement__ = 16;
      C = context__.vals_i("C")[(1 - 1)];
      current_statement__ = 16;
      current_statement__ = 16;
      check_greater_or_equal(function__, "C", C, 1);
      current_statement__ = 17;
      validate_non_negative_index("N", "S", S);
      current_statement__ = 18;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec(S));
      N = std::vector<int>(S, std::numeric_limits<int>::min());
      
      current_statement__ = 18;
      assign(N, nil_index_list(), context__.vals_i("N"),
        "assigning variable N");
      current_statement__ = 18;
      for (int sym1__ = 1; sym1__ <= S; ++sym1__) {
        current_statement__ = 18;
        current_statement__ = 18;
        check_greater_or_equal(function__, "N[sym1__]", N[(sym1__ - 1)], 1);}
      current_statement__ = 19;
      validate_non_negative_index("K", "S", S);
      current_statement__ = 20;
      context__.validate_dims("data initialization","K","int",
          context__.to_vec(S));
      K = std::vector<int>(S, std::numeric_limits<int>::min());
      
      current_statement__ = 20;
      assign(K, nil_index_list(), context__.vals_i("K"),
        "assigning variable K");
      current_statement__ = 20;
      for (int sym1__ = 1; sym1__ <= S; ++sym1__) {
        current_statement__ = 20;
        current_statement__ = 20;
        check_greater_or_equal(function__, "K[sym1__]", K[(sym1__ - 1)], 0);}
      current_statement__ = 21;
      validate_non_negative_index("E", "C", C);
      current_statement__ = 22;
      context__.validate_dims("data initialization","E","int",
          context__.to_vec(C));
      E = std::vector<int>(C, std::numeric_limits<int>::min());
      
      current_statement__ = 22;
      assign(E, nil_index_list(), context__.vals_i("E"),
        "assigning variable E");
      current_statement__ = 22;
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        current_statement__ = 22;
        current_statement__ = 22;
        check_greater_or_equal(function__, "E[sym1__]", E[(sym1__ - 1)], 0);}
      current_statement__ = 23;
      context__.validate_dims("data initialization","beta","double",
          context__.to_vec());
      beta = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 23;
      beta = context__.vals_r("beta")[(1 - 1)];
      current_statement__ = 24;
      context__.validate_dims("data initialization","p10","double",
          context__.to_vec());
      p10 = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 24;
      p10 = context__.vals_r("p10")[(1 - 1)];
      current_statement__ = 25;
      context__.validate_dims("data initialization","phi","double",
          context__.to_vec());
      phi = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 25;
      phi = context__.vals_r("phi")[(1 - 1)];
      current_statement__ = 25;
      current_statement__ = 25;
      check_greater_or_equal(function__, "phi", phi, 0);
      current_statement__ = 26;
      context__.validate_dims("data initialization","logmupriors","double",
          context__.to_vec(2));
      logmupriors = std::vector<double>(2, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 26;
      assign(logmupriors, nil_index_list(), context__.vals_r("logmupriors"),
        "assigning variable logmupriors");
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += 1;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI, stan::require_vector_like_t<VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    static const char* function__ = "model_greencrabtools_joint_namespace::log_prob";
(void) function__;  // suppress unused var warning
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      local_scalar_t__ log_mu;
      log_mu = DUMMY_VAR__;
      
      current_statement__ = 1;
      log_mu = in__.scalar();
      local_scalar_t__ p11;
      p11 = DUMMY_VAR__;
      
      local_scalar_t__ p;
      p = DUMMY_VAR__;
      
      current_statement__ = 4;
      p11 = (stan::math::exp(log_mu) / (stan::math::exp(log_mu) + beta));
      current_statement__ = 5;
      p = (p11 + stan::math::exp(p10));
      current_statement__ = 2;
      current_statement__ = 2;
      check_greater_or_equal(function__, "p11", p11, 0);
      current_statement__ = 2;
      current_statement__ = 2;
      check_less_or_equal(function__, "p11", p11, 1);
      current_statement__ = 3;
      current_statement__ = 3;
      check_greater_or_equal(function__, "p", p, 0);
      current_statement__ = 3;
      current_statement__ = 3;
      check_less_or_equal(function__, "p", p, 1);
      {
        current_statement__ = 10;
        for (int j = 1; j <= C; ++j) {
          current_statement__ = 8;
          lp_accum__.add(
            neg_binomial_2_lpmf<propto__>(E[(j - 1)],
              stan::math::exp(log_mu), phi));}
        current_statement__ = 13;
        for (int i = 1; i <= S; ++i) {
          current_statement__ = 11;
          lp_accum__.add(binomial_lpmf<propto__>(K[(i - 1)], N[(i - 1)], p));
        }
        current_statement__ = 14;
        lp_accum__.add(
          normal_lpdf<propto__>(log_mu, logmupriors[(1 - 1)],
            logmupriors[(2 - 1)]));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr>
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.resize(0);
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    static const char* function__ = "model_greencrabtools_joint_namespace::write_array";
(void) function__;  // suppress unused var warning
    (void) function__;  // suppress unused var warning
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      double log_mu;
      log_mu = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      log_mu = in__.scalar();
      double p11;
      p11 = std::numeric_limits<double>::quiet_NaN();
      
      double p;
      p = std::numeric_limits<double>::quiet_NaN();
      
      vars__.emplace_back(log_mu);
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      current_statement__ = 4;
      p11 = (stan::math::exp(log_mu) / (stan::math::exp(log_mu) + beta));
      current_statement__ = 5;
      p = (p11 + stan::math::exp(p10));
      current_statement__ = 2;
      current_statement__ = 2;
      check_greater_or_equal(function__, "p11", p11, 0);
      current_statement__ = 2;
      current_statement__ = 2;
      check_less_or_equal(function__, "p11", p11, 1);
      current_statement__ = 3;
      current_statement__ = 3;
      check_greater_or_equal(function__, "p", p, 0);
      current_statement__ = 3;
      current_statement__ = 3;
      check_less_or_equal(function__, "p", p, 1);
      if (emit_transformed_parameters__) {
        vars__.emplace_back(p11);
        vars__.emplace_back(p);
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      double mu;
      mu = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 7;
      mu = stan::math::exp(log_mu);
      vars__.emplace_back(mu);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, stan::require_std_vector_t<VecVar>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void transform_inits_impl(const stan::io::var_context& context__,
                                   VecI& params_i__, VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.clear();
    vars__.reserve(num_params_r__);
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      double log_mu;
      log_mu = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      log_mu = context__.vals_r("log_mu")[(1 - 1)];
      vars__.emplace_back(log_mu);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("log_mu");
    names__.emplace_back("p11");
    names__.emplace_back("p");
    names__.emplace_back("mu");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "log_mu");
    if (emit_transformed_parameters__) {
      param_names__.emplace_back(std::string() + "p11");
      param_names__.emplace_back(std::string() + "p");
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "mu");
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "log_mu");
    if (emit_transformed_parameters__) {
      param_names__.emplace_back(std::string() + "p11");
      param_names__.emplace_back(std::string() + "p");
    }
    
    if (emit_generated_quantities__) {
      param_names__.emplace_back(std::string() + "mu");
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"log_mu\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"p11\",\"type\":{\"name\":\"real\"},\"block\":\"transformed_parameters\"},{\"name\":\"p\",\"type\":{\"name\":\"real\"},\"block\":\"transformed_parameters\"},{\"name\":\"mu\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"log_mu\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"p11\",\"type\":{\"name\":\"real\"},\"block\":\"transformed_parameters\"},{\"name\":\"p\",\"type\":{\"name\":\"real\"},\"block\":\"transformed_parameters\"},{\"name\":\"mu\",\"type\":{\"name\":\"real\"},\"block\":\"generated_quantities\"}]";
    return s__.str();
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      std::vector<double> vars_vec(vars.size());
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i) {
        vars.coeffRef(i) = vars_vec[i];
      }
    }
    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }
    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
  
    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits_impl(context, params_i, params_r_vec, pstream);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i) {
        params_r.coeffRef(i) = params_r_vec[i];
      }
    }
    inline void transform_inits(const stan::io::var_context& context,
                                std::vector<int>& params_i,
                                std::vector<double>& vars,
                                std::ostream* pstream = nullptr) const final {
      transform_inits_impl(context, params_i, vars, pstream);
    }        
};
}
using stan_model = model_greencrabtools_joint_namespace::model_greencrabtools_joint;
#ifndef USING_R
// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_greencrabtools_joint_namespace::profiles__;
}
#endif
#endif
