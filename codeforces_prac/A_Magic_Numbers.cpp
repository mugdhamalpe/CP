#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll n;
    cin>>n;
    while(n){
        if(n%1000==144){ //checking "144"
            n/=1000;
        }
        else if(n%100==14){ //checking "14"
            n/=100;
        }

        else if(n%10==1){ //checking "1"
            n/=10;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}

// #include <bits/stdc++.h>
// typedef long long ll;
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     ll one, four, notreq;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]=='1'){
//             one+=1;
//         }else if(s[i]=='4'){
//             four+=1;
//         }else if(s[i]!='1'&&s[i])
//         }
//     }
//     if((one && four) && (one>1 || four>1)){
//         if(notreq==0){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }

//     }else{
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }