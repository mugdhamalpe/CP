// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int t, n, a, b, c, d;
//     cin>>t;
    
//     while(t--){
//         int diff_ab=0, sum_ab=0, diff_cd=0, sum_cd=0;
//         cin>>n>>a>>b>>c>>d;
//         diff_ab=a-b;
//         sum_ab=a+b;
//         diff_cd=c-d;
//         sum_cd=c-d;
//         if((n*sum_ab>=diff_cd) && (n*diff_ab<=sum_cd)){
//             cout<<"Yes"<<endl;
//         }else{
//             cout<<"No"<<endl;
//         }

//     }

//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,a,b,c,d;
    int sum_ab=0,diff_ab=0,sum_cd=0,diff_cd=0;
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>c>>d;
        sum_ab=a+b;
        diff_ab=a-b;
        sum_cd=c+d;
        diff_cd=c-d;
        if((n*sum_ab>=diff_cd) && (n*diff_ab<=sum_cd)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}