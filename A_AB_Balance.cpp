#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int AB=0, BA=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='a' && s[i+1]=='b'){
                AB+=1;
            }else if(s[i]=='b' && s[i+1]=='a'){
                BA+=1;
            }
        }
        if(s[0]!=s[s.length()-1]){
            s[s.length()-1]=s[0];
        }
        cout << s << endl;
        // if(AB==BA || (AB==0 || BA==0) || (AB==0 && BA==0)){
        //     cout<<s<<endl;
        // }else{
        //     s[s.length()-1]=s[0];
        //     cout<<s<<endl;
        // }
    }
    return 0;
}