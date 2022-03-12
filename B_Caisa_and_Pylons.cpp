#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pylons=0, energy=0;
    pylons=arr[0];
    for(int i=0; i<n-1; i++){
        int diff=abs(arr[i+1]-arr[i]);
        if(arr[i]>arr[i+1]){
            energy+=diff;
        }else{
            if(energy>diff){
                energy-=diff;
            }else{
                pylons+=(diff)-energy;
                energy=0;
            }
        }
    }
    cout<<pylons;
    return 0;
}