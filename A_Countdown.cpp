#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, count=0, nonzero=0, sum=0;
        cin>>n;
        string s;
        cin>>>s;
        //int arr[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
            sum+=s[i];
        }
        for(int i=0; i<n; i++){
            // if(s[i]==0){
            //     count+=1;
            // }
            if(s[i]!=0){
                nonzero+=i;
                break;
            }
        }
        if(s[0]>0){
            n--;
        }else if(s[0]==0){
            swap(s[0], s[nonzero]);
        }
        // if(count>0){
        // }
        for(int i=0; i<n; i++){
            if(s[i]>0){
                count+=1;
            }
        }
        if(count>0){
            cout<<count+sum<<endl;
        }
    }
    return 0;
}