#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int q;
    cin>>q;
    bool flag;
    while(q--){
        int n, count=0, ans=0;
        cin>>n;
        int parr[n];
        for(int i=0; i<n; i++){
            cin>>parr[i];
        }
        flag=true;
        if((n==1)){
            cout<<"YES"<<endl;
        }else{
            for(int i=0; i<n-1; i++){
                if(parr[i+1]-parr[i]!=1 && (parr[i+1]-parr[i]!=-1)){
                    count=i;
                    ans+=1;
                }
            }
            if(count==0 || (count==n-2 && ans<2)){
               cout<<"YES"<<endl;
            }
            else if(parr[count]-parr[count-1]==parr[count+2]-parr[count+1] && ans<2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        // for(int i=1; i<n; i++){
        //     if(!(abs(parr[i]-parr[i-1])==1) || (parr[i]==1 && parr[i-1]==n) || (parr[i-1]==1 && parr[i-1]==n)){
        //         flag=false;
        //         cout<<"NO"<<endl;
        //         //cout<<"YES"<<endl;
        //         break;
        //     }
        // }
        // if(flag){
        //     cout<<"YES"<<endl;
        // }
    }
    return 0;
}