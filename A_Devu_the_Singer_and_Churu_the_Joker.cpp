#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, d, sum=0;
    cin>>n>>d;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int song_dur=(n-1)*10;
    int diff=d-sum;
    if(sum+song_dur<=d){
        cout<<diff/5<<endl;
    }else{
        cout<<"-1"<<endl;
    }

    return 0;
}