#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if (n <= 1) return 0;

    int limit = n; limit = sqrt(n);
    for (int i = 2; i<limit; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n; cin>>n;

    if (isPrime(n) == 1) cout<<"Prime";
    else cout<<"Not Prime";

    return 0;
}