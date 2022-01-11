#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long int u,v;
    long long int x,y;
    while (t--){
        cin>>u>>v;
        x=-(u*u);
        y=v*v;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}

/*
x/u+y/v=x+y/u+v
simplifies to
x/y=-u^2/v^2
so, x=-u^2 and y=v^2
*/