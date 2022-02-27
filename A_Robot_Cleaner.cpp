#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, res=0, res1=0;
    cin>>t;
    while(t--){
        int n,m,rb,cb,rd,cd;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        if(rb<=rd){
            res=rd-rb;
        }else{
            res=2*n-rb-rd;
        }
        if(cb<=cd){
            res1=cd-cb;
        }else{
            res1=2*m-cb-cd;
        }
        cout<<min(res, res1)<<endl;
    }
    return 0;
}