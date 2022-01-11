#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, flag=0;
    cin>>n;
    string s, subs, gram2;
    char pair1, pair2;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        pair1=s[i];
        pair2=s[i+1];
        int count=0;
        for(int j=0; j<n; j++){
            if(s[j]==pair1 && s[j+1]==pair2){
                count+=1;
            }
        }
        if(flag<count){
            gram2=pair1;
            gram2+=pair2;
            flag=count;
        }
    }

    //using substr
    // for(int i=0; i<s.size(); i++){
    //     subs=s.substr(i, 2);
    //     if(s[i]==subs[0] && s[i+1]==subs[1]){
    //         count+=1;
    //     }
    //     if(count>0){
    //         gram2=subs;
    //     }
    // }
    cout<<gram2<<endl;
    return 0;
}