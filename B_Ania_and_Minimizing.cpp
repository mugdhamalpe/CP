#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, count=0;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0){
        cout<<s;
        return 0;
    }
    if(n==1 && k>=1){
        cout<<"0";
        return 0;
    }
    if(s[0]!='1'){
        count=1;
        s[0]='1';
    }
    else{
        count=0;
    }
    for(int i=1; i<n && count<k; i++){
        if(s[i]!='0'){
            s[i]='0';
            count++;
        }
    }
    cout<<s<<endl;
    return 0;
}

//1st digit -> change to 1
//then change k-1 digits to 0
//keep others as it is