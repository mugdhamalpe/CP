#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int array;
    int req_count=0, count=1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>=arr[i-1]){
            count+=1;
        }else{
            if(count>req_count){
                req_count=count;
            }count=1;
        }
    }if(count>req_count){
        req_count=count;
    }cout<<req_count;
    return 0;
}