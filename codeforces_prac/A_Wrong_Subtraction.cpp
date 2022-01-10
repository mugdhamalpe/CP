#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    for(int i=0; i<k; i++){
        if(n%10==0){
            n=n/10;
        }
        else{
            n=n-1;
        }
    }
    cout<<n;
    return 0;
}

// while(n%10!=0){
    //     for(int i; i<k; i++){
    //         n=n-1;
    //     }
    //     if(n%10==0){
    //         n=n/10;
    //         n=n-1;
    //         break;
    //     }
    // }