#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, maxi, count, evencount=0, oddcount=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            evencount+=1;
        }else{
            oddcount+=1;
        }
    }
    //sort(arr, arr+n);
    if(oddcount%2!=0){
        cout<<oddcount<<endl;
    }else{
        cout<<evencount<<endl;
    }
    return 0;
}