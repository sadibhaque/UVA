#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    

    for(int i = 0; i < n; i++) {
        int x; 
        scanf("%d", &x);

        int arr[x];

        for(int j = 0; j < x; j++) {
            scanf("%d", &arr[j]);
        }

        int max = arr[0];

        for(int k=1; k<x; k++){
            if(arr[k]>max){
                max = arr[k];
            }
        }
        printf("Case %d: %d\n",i+1,max);
    }

    return 0;
}
