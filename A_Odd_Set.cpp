#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //int arr[2*n];
        int count=0;
        for(int i=0; i<2*n; i++){
            int num;
            cin>>num;
            if(num%2==0){
                count+=1;
            }
        }
        if(count==n){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}