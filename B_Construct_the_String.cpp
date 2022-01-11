#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n,a,b;
    //char str[]="abcdefghijklmnopqrstuvwxyz";
    //string s;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        // for(int i=0; i<b; i++){
        //     s[i]=str[i];
        // }
        //int count=0;
        for(int i=0; i<n; i++){
            cout<<char('a'+i%b);
            //count+=1;
            // if(count==b){
            //     count=0;
            // }
        }
        cout<<endl;
    }
    return 0;
}
