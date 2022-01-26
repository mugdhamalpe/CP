#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h0, m0, h, m;
    int countH=0, countM=0, count=1, result=1;
    cin>>n;
    cin>>h0>>m0;
    int num=n-1;
    while(num--){
        cin>>h>>m;
        // countH+=h;
        // countM+=m;
        if(h==h0 && m==m0){
            count+=1;
            if(count>result){
                result=count;
            }
        }
        // else{
        //     countH=h;
        //     countM=m;
        //     if(count>result){
        //         result=count;
        //     }
        //     // else if(count<result){
        //     //     result=1;
        //     // }
        // }
        else{
            // result=1;
            count=1;
        }
        h0=h;
        m0=m;
    }
    cout<<result<<endl;
    return 0;
}