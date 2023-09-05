#include<bits/stdc++.h>

using namespace std;

int main() {

    int t,res,iq,n;
    cin>>t;

    while(t--){
        res = -10000;
        int max = -10000;
        cin>>n;

        while(n--){
            cin >> iq;

            if (max - iq > res)
            res = max - iq;

            if (iq > max)
                max = iq;
        }
        cout << res << endl;
        
    }

    return 0;
}
