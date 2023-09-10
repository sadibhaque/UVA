#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll n,d,r;

    while(cin>>n>>d>>r && n != 0 && d != 0 && r != 0){
        ll o = 0;
        ll mor[n];
        ll eve[n];

        for (int i = 0; i < n; i++) cin>>mor[i];
        sort(mor, mor+n);
        for (int i = 0; i < n; i++) cin>>eve[i];
        sort(eve,eve+n);

        for(ll i = 0; i<n; i++){
            if(mor[i] + eve[n-i-1] > d){
                o += ((mor[i] + eve[n-i-1]) - d) * r;
            }
        }

        cout<<o<<endl;


    }
}