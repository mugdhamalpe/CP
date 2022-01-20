#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, result=0;
    cin>>n>>m;
    if(m>n){
        result=-1;
    }
    else{
        if(n%2==0){
            result=n/2;
        }else{
            result=n/2+1;
        }
        while(result%m!=0){
            result+=1;
        }
    }
    cout<<result<<endl;
    return 0;
}