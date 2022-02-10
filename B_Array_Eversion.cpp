#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int result = 0;
        int last = arr[n - 1];
        for (int i=n-1; i>=0; i--){
            if (arr[i]>last){
                result++;
                last = arr[i];
            }
        }
        cout<<result<<endl;
    }
    return 0;
}