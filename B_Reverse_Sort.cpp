#include <bits/stdc++.h>

using namespace std;

void reverseSort(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s2=s;
    vector<int> res;
    sort(s2.begin(),s2.end());
    if(s==s2){
        cout<<0<<endl;return;
    }
    for(int i=0;i<n;i++){
        if(s[i]!=s2[i]){ 
            res.push_back(i+1);
        }
    }
    cout<<1<<endl;
    cout<<res.size()<<" ";
    for(int i=0; i<res.size(); i++) {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        reverseSort();
    }
  return 0;
}