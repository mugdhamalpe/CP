#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, k, countA=0, countB=0, result=0;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arrA[n], arrB[n];
        vector<pair<int, int>>vecu;
        for(int i=0; i<n; i++){
            int a1, b1;
            cin>>arrA[i];
            //countA+=arrA[i];
            // if(countA<=k){
            //     result=k+arrA[i];
            // }
        }
        for(int i=0; i<n; i++){
            cin>>arrB[i];
            countB+=1;
        }
        for(int i=0; i<n; i++){
            vecu.push_back({arrA[i],arrB[i]});
        }
        sort(vecu.begin(), vecu.end());
        int max=0;
        while((k>=vecu[max].first) && max<n){
            k+=vecu[max].second;
            max+=1;
        }
        cout<<k<<endl;
    }
    return 0;
}