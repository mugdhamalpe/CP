#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s,result;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if((n-i)%2){
            result=result+s[i];
        }
        else {
            result=s[i]+result;
            }
    }
    cout<<result<<endl;
}