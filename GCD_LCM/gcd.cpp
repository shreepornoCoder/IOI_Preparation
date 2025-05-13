#include <bits/stdc++.h>
using namespace std;

// This is the Recursive approach of Euclid's Algorithm
// The Time Complxity totally depends on the min(a, b)

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    int a, b; cin>>a>>b;
    cout << gcd(a, b);
    return 0;
}