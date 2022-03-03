#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vecu;
        if(n==1){
            cout<<"1"<<endl;
        }else if(n==2){
            cout<<"2"<<" 3"<<endl;
        }else if(n>=3){
            // for(int i=2; i<n+2; i++){
            //     cout<<i<<" ";
            // }cout<<endl;
            for(int i=2; i<n+2; i++){
                if((i-1)%i!=0){
                    vecu.push_back(i);
                }
            }
            for(int i=0; i<vecu.size(); i++){
                cout<<vecu[i]<<" ";
            }cout<<endl;
        }
    }
    return 0;
}