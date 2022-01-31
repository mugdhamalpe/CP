#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(stoi(s)%7==0){
            cout<<s<<endl;
        }else{
            int max=stoi(s.substr(0,s.size()-1));
            for(int i=0;i<10;i++){
                if((max-(2*i))%7==0){
                    s[s.size()-1]=i+'0';
                    break;
                }
            }
            cout<<s<<endl;
        }
        // cin>>n;
        // if(n%7==0){
        //     cout<<n<<endl;
        // }else if(n%7==1){
        //     cout<<n+6<<endl;
        // }else if(n%7==2){
        //     cout<<n+5<<endl;
        // }else if(n%7==3){
        //     cout<<n+4<<endl;
        // }else if(n%7==4){
        //     cout<<n+3<<endl;
        // }else if(n%7==5){
        //     cout<<n+2<<endl;
        // }else if(n%7==6){
        //     cout<<n+1<<endl;
        // }
    }
    return 0;
}