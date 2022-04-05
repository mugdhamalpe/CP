#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, equal=0, less=0, more=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='='){
                equal+=1;
            }
            if(equal==s.length()){
                cout<<"="<<endl;
                break;
            }

            if(s[i]=='<'){
                less+=1;
            }else if(s[i]=='='){
                equal+=1;
            }
            if(less>0 && equal>0){
                cout<<"<"<<endl;
                break;
            }

            if(s[i]=='>'){
                more+=1;
            }else if(s[i]=='='){
                equal+=1;
            }
            if(more>0 && equal>0){
                cout<<">"<<endl;
                
                break;
            }else{
                cout<<"?"<<endl;
                break;
            }
        }
    }
    return 0;
}