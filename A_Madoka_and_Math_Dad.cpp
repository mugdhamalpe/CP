#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=n/3, y=n%3;
        if(y%2==0){
            for(int i=0; i<x; i++){
                cout<<"21";
            }if(y==2){
                cout<<"2";
            }
        }else{
            for(int i=0; i<x; i++){
                cout<<"12";
            }cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}

//ENDING WITH 1
//1212...21
//x-ones and 2x-twos
//x+2x=3x+1

//ENDING WITH 2
//2121...12
//2x-twos and (x-1)-ones
//2x+(x-1)=3x-1=3x+2