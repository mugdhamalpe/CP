#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, res=0;
    string s1, s2;
    string sub_s1, sub_s2;
    bool flag;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s1>>s2;
        // flag=s2[n-1]>s1[n-1];
        // if(flag){
        //     res+=1;
        // }
        for(int i=0;i<n; i++){
            sub_s1=s1.substr(i, n-i);
            sub_s2=s2.substr(i, n-i);
            if(sub_s2>sub_s1){
                res+=1;
            }
        }
        // for(int i=n-2;i>=0;i--){
        //     if(s2[i]>s1[i]){
        //         flag=true;
        //         res+=1;
        //     }else if(s2[i]<s1[i]){
        //         flag=false;
        //     }else{
        //         if(flag){
        //             res+=1;
        //         }
        //     }
        // }
        cout<<res<<endl;
    }
    return 0;
}