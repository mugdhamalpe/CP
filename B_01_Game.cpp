#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int zero_count=0, one_count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                zero_count+=1;
            }else{
                one_count+=1;
            }
        }
        int s_len =s.size();
        int mini = min(zero_count, one_count);
        if(mini%2!=0){
            cout<<"DA"<<endl;
        }else{
            cout<<"NET"<<endl;
        }
    }
    return 0;
}
