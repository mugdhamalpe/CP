#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>count){
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}