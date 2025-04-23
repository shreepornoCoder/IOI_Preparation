#include <bits/stdc++.h>
#include <math.h>
using namespace std;

const int N = 1000000;
bool sieve[N+1];

void createSieve(){ 
    for (int i = 2; i<=N; i++) sieve[i] = true;

    for (int i = 2; i*i<=N; i++){
        if (sieve[i]){
            for (int j = i*i; j<N; j+=i){
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrimes(int N){ // seperating all the primes
    vector <int> ds;
    for (int i = 2; i<=N; i++){
        if (sieve[i]) ds.push_back(i);
    }
    return ds;
}

int main(){
    createSieve();
    int t; cin>>t;
    while (t--){
        int l, r; cin>>l>>r;
        // step-1-applying sieve and generate all the primes
        vector <int> prime = generatePrimes(sqrt(r)); 

        // step-2 - creating dummy array and setting the default value true
        bool dummy[r-l+1]; for (int i = 0; i<(r-l)+1; i++) dummy[i] = true;

        // step-3
        // marking the multiples of all prime numbers
        for (auto pr: prime){
            // int first_multiple = (l/pr)*pr;
            // if (first_multiple <= l) first_multiple += pr;
            int first_multiple = max(pr * pr, ((l + pr - 1) / pr) * pr);

            for (int j = first_multiple; j<=r; j+=pr){
                dummy[j-l] = false;
            }
        }

        for (int i = l; i<=r; i++){
            if (dummy[i-l]) {
                cout<<i<<" ";
            }
        }
    }
    
    return 0;
}