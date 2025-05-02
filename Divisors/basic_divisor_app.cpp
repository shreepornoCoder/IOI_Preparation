#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    int total_divisor = 0;
    int total_sum_of_divisor = 0;

    for (int i = 1; i*i<=n; i++){
        if (n % i == 0)
        {
            cout<<i<<" "<<(n/i)<<"\n";

            total_divisor++; total_sum_of_divisor += i;

            if (i != (n/i)){
                total_divisor++; total_sum_of_divisor += (n/i);
            }
        }
    }
    cout<<total_divisor<<" "<<total_sum_of_divisor;

    // Time Complexity - O(sqrt(n))

    return 0;
}