#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, l;
    cin>>t;
    vector<int>res(l,0);
    while(t--){
        cin>>n>>l;
        vector<int> arr;
        vector<int> res;
        for(int i=0; i<n; i++){
            cin>>arr[i];

            int count=0;
            while(arr[i]>0){
                res[count++]+=(arr[i]%2);
                arr[i]/=2;
            }
        }
        for(int i=0; i<l; i++){
            if(res[i]>=(n+1)/2){
                res[i]=1;
            }
            else {
                res[i]=0;
            }
        }
        int result=0;
        for(int i=0; i<l; i++){
            if(res[i]){
                result+=pow(2,i);
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}