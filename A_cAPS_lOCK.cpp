#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, res;
    cin>>s;
    string firstL;
    firstL=s[0];
    bool flag=false;
    if(islower(s[0])){
        res=toupper(s[0]);
    }else if(isupper(s[0])){
        res=s[0];
    }
    for(int i=1; i<s.length(); i++){
        if(islower(s[i])){
            flag=true;
        }
    }
    if(flag==false){
        for(int i=0; i<s.length(); i++){
            if(islower(s[i])){
                res=toupper(s[i]);
            }else{
                res=tolower(s[i]);
            }
            cout<<res;
        }
    }
    else{
        cout<<s;
    }
    return 0;
}