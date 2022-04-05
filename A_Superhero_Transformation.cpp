#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    bool flag=false;
    if(s.length()!=t.length()){
        cout<<"No"<<endl;
        return 0;
    }else{
        //flag=true;
        for(int i=0; i<s.length(); i++){
            if((s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') && (t[i]=='a'|| t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')){
                flag=true;
            }else if((s[i]!='a'&& s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') && (t[i]!='a' && t[i]!='e' && t[i]!='i' && t[i]!='o' && t[i]!='u')){
                flag=true;
            }else{
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}