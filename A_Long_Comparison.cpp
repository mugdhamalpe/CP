#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ll t;
    cin>>t;
    ll x1,x2,p1,p2;
    string s1,s2;
    while(t--){
        cin>>x1>>p1;
        cin>>x2>>p2;
        int mini=min(p1,p2);
        ll pnew1 = p1-mini;
        ll pnew2 = p2-mini;
        s1='0'*pnew1;
        s2='0'*pnew2;
        string str1 = to_string (x1);
        string str2 = to_string (x2);
        string num1=str1+s1;
        string num2=str2+s2;
        ll n1 = stoll(num1, nullptr, 10);
        ll n2 = stoll(num2, nullptr, 10);
        if(n1>n2){
            cout<<">"<<endl;
        }else if(n1==n2){
            cout<<"="<<endl;
        }else if(n1<n2){
            cout<<"<"<<endl;
        }
        // if(p1>=7){
        //     cout<<">"<<endl;
        // }else if(p2>=7){
        //     cout<<"<"<<endl;
        // }else{
        //     for(int j=0; j<pnew1; j++){
        //         x1 *= 10;
        //     }
        //     for (int j=0; j<pnew2; j++){
        //         x2 *= 10;
        //     }
        //     if(x1>x2){
        //         cout<<">"<<endl;
        //     }else if(x1==x2){
        //         cout<<"="<<endl;
        //     }else if(x1<x2){
        //         cout<<"<"<<endl;
        //     }
            
        // }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int t;
//   cin >> t;
//   for (int i = 0; i < t; i++){
//     long long x1;
//     int p1;
//     cin >> x1 >> p1;
//     long long x2;
//     int p2;
//     cin >> x2 >> p2;
//     int m = min(p1, p2);
//     p1 -= m;
//     p2 -= m;
//     if (p1 >= 7){
//       cout << '>' << endl;
//     } else if (p2 >= 7){
//       cout << '<' << endl;
//     } else {
//       for (int j = 0; j < p1; j++){
//         x1 *= 10;
//       }
//       for (int j = 0; j < p2; j++){
//         x2 *= 10;
//       }
//       if (x1 > x2){
//         cout << '>' << endl;
//       } else if (x1 < x2){
//         cout << '<' << endl;
//       } else {
//         cout << '=' << endl;
//       }
//     }
//   }
// }