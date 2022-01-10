#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        if(n==1 && m==1){
            cout<<"0"<<endl;
        }else if(n>1 && m==1){
            cout<<"1"<<endl;
        }else if(m>1 && n==1){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }
    return 0;
}

//case1: 1 row => |1-1|+|1-y| =>p=y-1, so y=p+1 
//SO, k=1
//case2: 1column => |1-1|+|1-x| => q=x-1, so x=q+1 
//SO, k=1
//case3: n=1, m=1 => only one cell => k=0
//case4: n>1 & m>1 
//SO, k=2
        //p=(x-1)+(y-1)
        //q=(n-x)+(y-1)
        //k=0 or 1 or 2