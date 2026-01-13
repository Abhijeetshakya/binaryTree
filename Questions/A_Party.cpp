#include <bits/stdc++.h>
using namespace std ; 

vector<int> adj[2003]; 

int getDepth(int rootNodes){
    int maxDepth =  0 ; 
    for(int i : adj[rootNodes]){
        maxDepth = max(maxDepth,getDepth(i)) ; 
    }
    return 1 + maxDepth ; 
}

int main(){

    int n ; 
    cin >> n ; 
    vector<int> roots ; 
    for(int i = 1; i <= n ; i++){
        int manager ; 
        cin >> manager ; 
        if(manager == -1 ){
            roots.push_back(i) ; 
        }else adj[manager].push_back(i) ; 
    }

    int groups = 0 ; 
    for(int rootNodes : roots){
        groups = max(groups,getDepth(rootNodes)) ; 
    }
    cout << groups ; 

return 0 ; 
}