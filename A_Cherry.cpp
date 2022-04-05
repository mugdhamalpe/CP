#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        ll res=0;
        for (int i=1; i<n; i++) {
            res = max(res, 1LL*arr[i]*arr[i-1]);
        }
        cout<<res<<endl;
    }
    return 0;
}