#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    string s_new;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='+'){
            s_new.push_back(s[i]);
        }
    }sort(s_new.begin(), s_new.end());
    cout<<s_new[0];
    for(int i=1; i<s_new.length(); i++){
        cout<<"+"<<s_new[i];
    }
    return 0;
}