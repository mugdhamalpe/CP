#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, x;
    cin>>t;
    while(t--){
        cin>>x;
        //for single digit numbers output x itself
        if(x/10==0){
            cout<<x<<endl;
        }
        //max sum possible = 45
        else if(x>45){
            cout<<"-1"<<endl;
        }else{
            
        }

    }
    return 0;
}