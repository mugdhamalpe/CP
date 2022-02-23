#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int R,G,B,r,g,b;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int doors=0, keys=0;
        for(int i=0; i<s.length(); i++){
            // string str1="RGB";
            // string str2="rgb";
            // size_t found1 = s.find(str1);
            // size_t found2 = s.find(str2);
            // if(found1 != string::npos){
            //     doors+=1;
            // }else if(found2 != string::npos){
            //     keys+=1;
            // }
            if(s[i]=='R'){
                R=i;
            }else if(s[i]=='G'){
                G=i;
            }else if(s[i]=='B'){
                B=i;
            }else if(s[i]=='r'){
                r=i;
            }else if(s[i]=='g'){
                g=i;
            }else if(s[i]=='b'){
                b=i;
            }
        }
        // if(keys>doors){
        //     cout<<"YES"<<endl;
        // }else{
        //     cout<<"NO"<<endl;
        // }
        if(R>r && G>g && B>b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}