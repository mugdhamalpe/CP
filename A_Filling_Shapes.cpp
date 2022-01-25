#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<"0"<<endl;
    }else{
        int powi=pow(2, n/2);
        cout<<powi<<endl;
    }
    return 0;
}