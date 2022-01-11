#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,res;
    cin>>n>>m;
    int total=n+m;
    int intersec=n*m;
    int left_rows = n-1;
    int left_columns = n-m;
    if(left_columns>0){
        res=m;
    }else{
        res=n;
    }
    if(res%2==0){
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }
    return 0;
}