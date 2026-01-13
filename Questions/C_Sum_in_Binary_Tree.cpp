#include <bits/stdc++.h>
using namespace std ; 

long long solve(long long n){
    if(n == 1) return 1 ; 
    return n + solve(n/2) ; 
}

int main(){

    int t ; 
    cin >> t ; 
    while(t--){
        long long n ; 
        cin >> n ; 
        cout << solve(n) << endl  ; 
    }

return 0 ; 
}