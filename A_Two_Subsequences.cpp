#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int min =s[0];
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]<min){
                min=s[i];
                count=i;
            }
        }
        string b;
        if(count == s.size()-1){
            b = s.substr(0, count);
        }
        else{
            b = s.substr(0, count)+s.substr(count+1);
        }
        cout<<(char)min<<" "<<b<<endl;
    }

    return 0;
}