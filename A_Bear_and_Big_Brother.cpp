#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int yr=0;
    do{
        a*=3;
        b*=2;
        yr+=1;
    }while(a<=b);
    cout<<yr;
    return 0;
}