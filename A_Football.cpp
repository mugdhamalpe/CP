#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    long long int count=0;
    for(int i=0; i<s.size(); i++){
        for(int j=i+1; j<i+7; j++){
            if(s[i]==s[j]){
                count+=1;
            }else{
                count=0;
                break;
            }
        }
        if(count>0){
            break;
        }
    }
    if(count>0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     if(s.find("0000000")<100||s.find("1111111")<100){
//     cout<<"YES";
//     return 0;
//     }
//     cout<<"NO";
//     return 0;
// }