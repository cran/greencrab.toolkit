data{/////////////////////////////////////////////////////////////////////
    int<lower=1> S;    // number of qPCR samples
    int<lower=1> N[S];   // number of qPCR replicates per site
    int<lower=0> K[S]; // number of qPCR detections among these replicates
    real beta; // scaling parameter
    real p10; // false positive probability
    real logmupriors[2]; // priors for normal distrib on log_mu
}

parameters{/////////////////////////////////////////////////////////////////////
    real log_mu;  // expected crabs/trap 
}

transformed parameters{/////////////////////////////////////////////////////////////////////
    real<lower=0, upper = 1> p11; // true-positive detection probability
    real<lower=0, upper = 1> p;   // total detection probability
    
    p11 = exp(log_mu) / (exp(log_mu) + beta); // Eq. 1.2
    p = p11 + exp(p10); // Eq. 1.3
  
}

model{/////////////////////////////////////////////////////////////////////
  
  for (i in 1:S){
        K[i] ~ binomial(N[i], p); // Eq. 1.4
    }
  
  //priors
  log_mu ~ normal(logmupriors[1],logmupriors[2]); // logmu prior
}

generated quantities{
  real mu;

  mu = exp(log_mu); // estimated mu on real scale

}


