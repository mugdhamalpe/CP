#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int len=s.length()+1;
    int k, maxi=0, count=0;
    cin>>k;
    int arr[27];
    for(int i=0; i<26; i++){
        cin>>arr[i];
        maxi=max(maxi, arr[i]);
    }
    for(int i=0; i<s.length(); i++){
        count+=(i+1)*(arr[s[i]-'a']);
        //count=arr[i]+maxi*i;
    }
    for(int i=k; i>0; i--){
        count+=(len)*maxi;
        len+=1;
    }
    cout<<count<<endl;
    return 0;
}