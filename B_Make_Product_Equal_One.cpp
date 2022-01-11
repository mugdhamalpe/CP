#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n, count=0, zero=0, negative=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==0){
            zero+=1;
        }else if(arr[i]<0){
            count+=(abs(arr[i])-1);
            negative+=1;
        }else if(arr[i]>0){
            count+=(arr[i]-1);
        }
    }
    if(negative%2!=0){
        if(zero>0){
            count+=1;
            zero-=1;
        }else{
            count+=2;
        }
    }
    count+=zero;
    
    cout<<count<<endl;
    
    return 0;
}