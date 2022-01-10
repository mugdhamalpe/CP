// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     char s[100001];
//     cin>>s;
//     int A_count=0, D_count=0;
//     while(cin>>n){
//         for(int i=0; i<n; i++){
//             cin>>s[i];
//             if(s[i]=='A'){
//                 A_count+=1;
//             }else if(s[i]=='D'){
//                 D_count+=1;
//             }
//         }
//     }

//     if(A_count>D_count){
//         cout<<"Anton";
//     }else if(A_count<D_count){
//         cout<<"Danik";
//     }else if(A_count==D_count){
//         cout<<"Friendship";
//     }
//     return 0;
// }

#include <bits/stdc++.h>

    using namespace std;

int main(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int A_count=0, D_count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            A_count++;
        else
            D_count++;
    }
    if(A_count>D_count){
        cout<<"Anton"<<endl;
    }
    else if(D_count>A_count){
        cout<<"Danik"<<endl;
    }
    if(A_count==D_count){
        cout<<"Friendship"<<endl;
    }
    return 0;
}