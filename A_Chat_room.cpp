#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    string hello="hello";
    int count=0, pos=0;
    //sort(s.begin(), s.end());
    for(int i=0; i<s.length(); i++){
        if(s[i]==hello[pos]){
            pos+=1;
            count+=1;
        }
        if(count==hello.length()){
            break;
        }
    }
    if(count==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}