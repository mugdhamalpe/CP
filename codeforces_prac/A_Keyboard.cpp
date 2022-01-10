#include <bits/stdc++.h>

using namespace std;

//brute force approach
int main(){
    char direc;
    cin>>direc;
    string input_str;
    cin>>input_str;
    string s1;
    s1="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(direc=='L'){
        for(int i=0; i<input_str.size(); i++){
            for(int j=0; j<s1.size(); j++){
                if(input_str[i]==s1[j]){
                    cout<<s1[j+1];
                }
            }
        }
    }

    else if(direc=='R'){
        for(int i=0; i<input_str.size(); i++){
            for(int j=0; j<s1.size(); j++){
                if(input_str[i]==s1[j]){
                    cout<<s1[j-1];
                }
            }
        }
    }

    return 0;
}
