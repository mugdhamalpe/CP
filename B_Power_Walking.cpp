#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>nums;//to find number of distinct numbers
        vector<int> arr(n+1);
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            nums.insert(arr[i]);
        }
        int diffNum=nums.size();
        for(int i=1; i<=diffNum; i++){
            cout<<diffNum<<" ";
        }
        for(int i=diffNum+1; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}