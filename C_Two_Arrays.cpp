#include <bits/stdc++.h>

using namespace std;

void twoArrays(){
    int n;cin>>n;
    int arrA[n], arrB[n];
    for(int i=0; i<n; i++){
        cin>>arrA[i];
    }
    for(int i=0; i<n; i++){
        cin>>arrB[i];
    }
    sort(arrA,arrA+n);
    sort(arrB,arrB+n);
    for(int i=0; i<n; i++){
        int count=arrB[i]-arrA[i];
        if(count==1||count==0){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        twoArrays();
    }
    return 0;
}