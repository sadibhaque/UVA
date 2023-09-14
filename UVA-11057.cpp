#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() 
{
    ll n, m;

    while (cin >> n) {
        ll arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        cin >> m;
        
        ll a,b;
        ll diff;
        ll maax = 1000000;

        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (arr[i] + arr[j] == m) {
                    diff = abs(arr[i] - arr[j]);
                    if(diff < maax){
                        maax = diff;
                        a = arr[i];
                        b = arr[j];
                    }
                    
                }
            }
        }
        cout << "Peter should buy books whose prices are " << min(a,b) << " and " << max(a,b) << "." << endl<<endl;
    }

    return 0;
}
