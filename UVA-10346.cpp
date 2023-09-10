#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n,k,sum;
    
    while(cin>>n>>k){
        sum = n;

        while(n/k){
            ll a = n/k;
            ll b = n%k;

            sum += a;
            n = a+b;    
        }
        cout<<sum<<endl;
    }

}