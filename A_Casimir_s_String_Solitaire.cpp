#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int count[3]{0};
        for (char c : s){
            count[c - 'A']+=1;
        }
        if (count[0] + count[2] == count[1]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}