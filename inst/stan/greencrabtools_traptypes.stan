data{/////////////////////////////////////////////////////////////////////
    int<lower=1> C;    // number of trap samples
    array[C] int<lower=0> E;   // number of crabs trapped in trap sample C
    real<lower=0> phi; // phi -- depends on crab size
    array[2] real logmupriors; // priors for normal distrib on log_mu
    array[C] int<lower=0> minnow; // dummy variable for minnow trap
    array[C] int<lower=0> shrimp; // dummy variable for shrimp trap
    real<lower=-0.99999> beta1; // shrimp trap coefficient -- mu
    real<lower=-0.99999> beta2; //minnow trap coefficient -- mu

}

parameters{/////////////////////////////////////////////////////////////////////
    real log_mu;  // expected crabs/trap
    }

transformed parameters{/////////////////////////////////////////////////////////////////////


}

model{/////////////////////////////////////////////////////////////////////

    for(j in 1:C){
      E[j] ~ neg_binomial_2((1 + beta1*shrimp[j] + beta2*minnow[j])*exp(log_mu),phi); // Eq. 1.1
    }


  //priors
  log_mu ~ normal(logmupriors[1],logmupriors[2]); // logmu prior

}

generated quantities{
  real mu;
  mu = exp(log_mu);
}


