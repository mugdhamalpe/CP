#include <bits/stdc++.h>

using namespace std;

void sqString(){
    string s, s1, s2;
    cin>>s;
    int siz=s.length();
    int c=siz/2;
    bool ans;
    if(siz%2!=0){
        cout<<"NO"<<endl;
        return;
    }else{
        for(int i=0; i<c; i++){
            if(s[i]!=s[i+c]){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        sqString();
    }
    return 0;
}