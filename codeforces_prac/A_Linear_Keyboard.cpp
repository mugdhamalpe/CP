#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
        while(t--){
            string s1;
            cin>>s1;
            int arr[26];
            int result=0;
            for(int i=0;i<s1.size();i++)
            arr[s1[i]-'a']=i;
            string s2;
            cin>>s2;
            for(int i=1;i<s2.size();i++){
                result+=abs(arr[s2[i]-'a']-arr[s2[i-1]-'a']);
            }
            cout<<result<<endl;
        }
    return 0;
}