// Just Brute force approach of Segmented Sieve

#include <bits/stdc++.h>
using namespace std;

int sieve(int l, int r){
    int arr[r] = {0};

    for (int i = 4; i<r; i+=2) arr[i] = 1;

    for (int i = 2; i*i<=r; i++){
        if (arr[i] == 0){
            for (int j=i*i; j<r; j+=i){
                arr[j] = 1;
            }
        }
    }
    for (int i = l; i<r; i++){
        if (arr[i] == 0)
            cout<<i<<" ";
    }
}

int main(){
    int l, r; cin>>l>>r;

    sieve(l, r);

    return 0;
}