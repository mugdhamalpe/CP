#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin>>x;
    int steps = x/5;
    // x=steps*5;
    if(x%5==0){
        cout<<x/5;
    }else if(x%5!=0){
        cout<<(x/5)+1;
    }
    return 0;
}