#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if (is_sorted(s.begin(), s.end())){
            cout<<"YES"<<endl;
        }else{
            int ones = s.find("11");
            int zeroes = s.find("00");
            if(ones!=-1 && zeroes!=-1 && ones<zeroes){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}