#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main() {
    ll t;
    cin>>t;

    for (int i = 0; i < t; i++){
        ll dot=0;
        ll x;
        string str;
        cin>>x;
        cin>>str;

        for (int i = 0; i < x; i++){
            if(str[i] == '.'){
                str[i+1] = '#';
                dot++;
                i += 2;
            }
        }
        // for (int i = 0; i < x; i++) cout<<str[i]<<" ";
        cout<<"Case "<<i+1<<": "<<dot<<endl;
    }    
}