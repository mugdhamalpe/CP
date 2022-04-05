#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s, res;
        cin>>s;
        unordered_map<char,int> mappie;
        for(auto &i:s){
            mappie[i]+=1;
        }
        for(int i=0; i<s.length(); i++){
            if(mappie[s[i]]>1){
                mappie[s[i]]-=1;
            }else{
                res=s.substr(i);
                cout<<res<<endl;
                break;
            }
        }
    }
    return 0;
}