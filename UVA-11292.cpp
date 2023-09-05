#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {

    ll m, n; 

    while (cin >> m >> n && (m != 0 || n != 0)) {
         ll head[m];
         ll height[n];

        for (ll i = 0; i < m; i++){
            cin>>head[i];
        }

        sort(head, head+m);

        for (ll i = 0; i < n; i++){
            cin>>height[i];
        }
        sort(height, height+n);

        ll sum = 0, num = 0;
        
        if(m>n){
            cout<<"Loowater is doomed!"<<endl;
        }
        else if(head[m-1] > height[n-1]){
            cout<<"Loowater is doomed!"<<endl;
        }

        else{
            for(ll i=0,j=0; i<m and j<n; j++){
                if(head[i] <= height[j]){
                    num++;
                    i++;
                    sum += height[j];
                    height[j] = 0;
                }
            }
            if(num >= m) cout<<sum<<endl;
            else cout<<"Loowater is doomed!"<<endl;
        }

    }
    return 0;
}