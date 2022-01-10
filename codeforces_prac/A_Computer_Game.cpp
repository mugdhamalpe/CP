/*
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; //no of test cases
    cin>>t;
    while(t--){
        int n; //no of columns
        cin>>n;
        int safe;
        bool trap=false;
        string s1[2];//2 rows
        for(int i=1; i<=2; i++){
            cin>>s1[i]; //inputing both strings
        }
        for(int i=1; i<n; i++){
            if(s1[1][i]=='1' && s1[2][i]=='1'){
                cout<<"NO"<<endl;
                break;
            }else{
                cout<<"YES"<<endl;
            }
        }
        // string s2;
        // int safe;
        // bool trap=false;
        // for(int i=0; i<s1.size(); i++){
        //     if(s1[i]=='1' && s2[i]=='1'){
        //         trap=true;
        //     }
        // }
        // if(trap){
        //     cout<<"NO"<<endl;
        // }else{
        //     cout<<"YES"<<endl;
        // }
    }

    return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string matrix[2]; //2 rows
        bool safe = true;
        bool trap=false;
        for(int i = 0;i<2;i++){
            cin>>matrix[i];
        }
        for(int i  =1;i<n;i++){
            if(matrix[0][i]=='1' && matrix[1][i]=='1'){
                trap=true;
            }
        }
        if(trap==true){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}