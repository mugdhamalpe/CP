#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n][n];
    //vector<int> v1, v2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //int last=n-(j+1);
            //input as matrix
            cin>>arr[i][j];
        }
    }
    //diagonal elements
    char v1=arr[n/2][n/2];
    char v2=arr[0][1];
    int count=0;
    for(int i=0; i<n; i++){
        int l=n-(i+1);
        if(arr[i][i]!=v1 || arr[i][l]!=v1 || arr[i][i]==v2 || arr[i][l]==v2){
            count=1;
            break;
        }else{
            for(int j=0; j<n; j++){
                if(i!=j && j!=l){
                    if(arr[i][j]!=v2){
                        count=1;
                        break;
                    }
                }
            }
        }
    }
    if(count==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}