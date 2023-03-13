data{/////////////////////////////////////////////////////////////////////
    int<lower=1> C;    // number of trap samples
    int<lower=0> E[C];   // number of crabs trapped in trap sample C
    real<lower=0> phi; // dispersion parameter
    real logmupriors[2]; // priors for normal distrib on log_mu
}

parameters{/////////////////////////////////////////////////////////////////////
    real log_mu;  // expected crabs/trap  
}

transformed parameters{/////////////////////////////////////////////////////////////////////
}

model{/////////////////////////////////////////////////////////////////////
  
  for(j in 1:C){
        E[j] ~ neg_binomial_2(exp(log_mu), phi); 
    }
  
  //priors
  log_mu ~ normal(logmupriors[1],logmupriors[2]); // logmu prior
}

generated quantities{
  real mu; 
  mu = exp(log_mu);
}


