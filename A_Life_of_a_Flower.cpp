#include <bits/stdc++.h>

using namespace std;

void Flower(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k=1;
    if(arr[0]==1)k++;
    for(int i=1;i<n;i++){
        if(arr[i]==0){
            if(arr[i]==arr[i-1]){
                cout<<"-1"<<endl;
                return;
            }
        }
        else{
            if(arr[i]==arr[i-1])
            k+=5;
            else k++;
        }
    }
    cout<<k<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        Flower();
    }
    return 0;
}