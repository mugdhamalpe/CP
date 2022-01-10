#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        vector<int> vecu;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        while(ar[i]!=1){
            for(int i=0; i<n; i++){
                int count=0;
                if(arr[i]%2==0){
                    count+=1;
                    arr[i]/=2;
                    vecu.push_back(arr[i]);
                    if(vecu[i]%2==0){
                        count+=1;
                        vecu[i]/=2;
                    }
                }
            }

        }

    }
    return 0;
}