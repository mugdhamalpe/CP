#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    string s;
    cin>>n>>t;
    cin>>s;
    while (t--){
        for (int i=1; i<n; i++){
            if(s[i]=='G' && s[i-1]=='B'){
                // int temp = s[i];
                // s[i] = s[j];
                // s[j] = temp;
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}