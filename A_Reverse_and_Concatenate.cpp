#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(2*t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string s2=s;
        reverse(s2.begin(), s2.end());
        if(k==0){
            cout<<"1"<<endl;
        }else if(s==s2)//palindrome
        {
            //ans=s+s - irr of k, ans=1
            cout<<"1"<<endl;
        }else if(s!=s2){
            cout<<"2"<<endl;
        }
    }
    return 0;
}