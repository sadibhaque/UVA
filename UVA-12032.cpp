#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll t;
    cin>>t;

    for (int i = 0; i < t; i++){
        ll n;
        cin>>n;
        ll arr[n+1];
        ll diff = 0;
        arr[0] = 0;
        for (int j = 1; j <= n; j++) cin>>arr[j];

        for (int j = 0; j <n; j++){
            if(diff < abs(arr[j] - arr[j+1])){
                diff = abs(arr[j] - arr[j+1]);
            }
        }   

        ll k = diff;

        ll ctr = 0;
        
        for (int j = 0; j <n; j++){
                
            if(abs(arr[j] - arr[j+1]) == k){
                k--;
            }
            else if(abs(arr[j] - arr[j+1]) > k){
                ctr = 1;
            }
        }
        if(ctr == 0) cout<<"Case "<<i+1<<": "<<diff<<endl;
        else cout<<"Case "<<i+1<<": "<<diff+1<<endl;
    }    
}