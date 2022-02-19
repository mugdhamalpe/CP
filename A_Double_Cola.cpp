#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=1;
    while(count*5<n){
        n-=count*5;
        count*=2;
    }
    int temp=(n-1)/count;
    switch(temp){
        case 0:
        cout<<"Sheldon"<<endl;
        break;
        case 1:
        cout<<"Leonard"<<endl;
        break;
        case 2:
        cout<<"Penny"<<endl;
        break;
        case 3:
        cout<<"Rajesh"<<endl;
        break;
        case 4:
        cout<<"Howard"<<endl;
        break;
    }
    return 0;
}