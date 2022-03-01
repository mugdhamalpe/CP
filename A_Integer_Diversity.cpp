#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>settie;
        vector<int>vecu(n);
        for(int i=0; i<vecu.size(); i++){
            cin>>vecu[i];
            if(settie.find(vecu[i])!=settie.end()){
                settie.insert(vecu[i]*(-1));
            }
            else{
                settie.insert(vecu[i]);
            }
        }
        cout<<settie.size()<<endl;
    }
    return 0;
}