#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, zero=0, one=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0'){
                zero+=1;
            }else if(s[i]=='1'){
                one+=1;
            }
        }
        if(zero<one){
            cout<<min(zero, one)<<endl;
            zero=0;one=0;
        }else if(one<zero){
            cout<<min(zero, one)<<endl;
            zero=0;one=0;
        }else if(zero==one){
            if(zero==1 || one==1){
                cout<<"0"<<endl;
            }else if(zero>1){
                cout<<zero-1<<endl;
            }
            zero=0;one=0;
        }
    }
    return 0;
}