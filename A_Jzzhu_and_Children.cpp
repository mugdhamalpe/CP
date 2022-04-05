#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, count=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for(int i=0; i<n-1; i++){
    //     count=max(arr[i], arr[i+1]);
    // }
    // cout<<count<<endl;
    while(true){
        bool flag=false;
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                flag=true;
                count=i+1;
            }
            arr[i]=arr[i]-m; //if ele=m, break and out of for loop
            //else continue traversing and incr count
        }
        if(flag==false){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}