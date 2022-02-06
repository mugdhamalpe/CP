#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a;
        cin>>b;
        int count=0;
        for(int i=0; i<=min(a.length(), b.length()); i++){
            for(int j=0; j+i<=a.length(); j++){
                for(int k=0; k+i<=b.length(); k++){
                    if(a.substr(j, i)==b.substr(k, i)){
                        count=max(count, i);
                    }
                }
            }
        }
        cout<<a.length()+b.length()-2*count<<endl;
    }
    return 0;
}