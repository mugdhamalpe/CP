#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    bool check_occ=true;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(check_occ==false){
                cout<<" "; //print empty space instead of WUB
            }
        }else{
            check_occ=false;
            cout<<s[i]; //else print rest elements of string
        }
    }
    return 0;
}