#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; char c;
        cin>>s;
        cin>>c;
        bool flag;
        int pos;
        vector<int> vecu;
        int count=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]==c){
                //flag=true;
                vecu.push_back(i);
            }
        }
        if(vecu.size()==0){
            count=0;
        }else{
            for(int i=0; i<vecu.size(); i++){
                if((s.size()-vecu[i]+1)%2==0){
                    count+=1;
                    break;
                }
            }
        }
            // if(i%2!=0){
            //     pos=i+1;
            // }
            // if(s.find(c, pos) != string::npos){
            //     flag=true;
            //}
        if(count>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}