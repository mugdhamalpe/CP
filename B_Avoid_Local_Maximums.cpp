#include <bits/stdc++.h>

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
        int count=0;
        for(int i=1; i+1<n; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                //arr[i-1]=arr[i];
                //arr[i + 1] = max(arr[i], arr[i + 1]);
                 if (i + 2 < n) {
                    arr[i+1]=max(arr[i], arr[i+2]);
                } else {
                    arr[i+1]=arr[i];
                }
                count+=1;
            }
        }
        cout<<count<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    return 0;
}