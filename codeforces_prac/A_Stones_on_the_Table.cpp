#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    string colors;
    cin>>colors;
    //int red=0,blue=0,green=0;
    for(int i=0; i<n-1; i++){
            if(colors[i+1]==colors[i]){
                count+=1;
            }else{
                count=count;
            }
        }
        cout<<count;
    return 0;
}

// for(int i=0; i<=n; i++){
    //     if(colors[i+1]==colors[i]){
    //         count+=1;
    //     }else{
    //         count=count;
    //     }
    // }
    // cout<<count;


    // if(colors[i+1]==colors[i]){
    //         if(colors[i]=='R'){
    //             red+=1;
    //         }
    //         else if(colors[i]=='B'){
    //             blue+=1;
    //         }
    //         else if(colors[i]=='G'){
    //             green+=1;
    //         }
    //     }


