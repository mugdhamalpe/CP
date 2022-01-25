// #include <bits/stdc++.h>
// typedef long long ll;

// using namespace std;

// //to check if i is prime or not
// int checkPrime(ll num)
// {
//     if (num<=1){
//         return 0;
//     }
//     for (ll i=2; i<num; i++){
//         if (num%i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     ll t;
//     ll l,r,k;
//     cin>>t;
//     while(t--){
//         cin>>l>>r>>k;
//         ll count=0;
//         ll diff=l-r;
//         for(ll i=l; i<=r; i++){
//             if(checkPrime(i)==1){
//                 count+=1;
//             }
//         }
//         if(diff==0 && l==1){
//             cout<<"NO"<<endl;
//         }else if(diff==0 && l>1){
//                 cout<<"YES"<<endl;
//         }else if(k>=count){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
typedef long long ll;
 
using namespace std;
 
//to check if i is prime or not
// int checkPrime(ll num)
// {
//     if (num<=1){
//         return 0;
//     }
//     for (ll i=2; i<num; i++){
//         if (num%i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }
 
int main(){
    ll t;
    ll l,r,k;
    cin>>t;
    while(t--){
        cin>>l>>r>>k;
        ll count=0;
        ll diff=l-r;
        // for(ll i=l; i<=r; i++){
        //     if(checkPrime(i)==1){
        //         count+=1;
        //     }
        //}
        if(diff==0){
            if(l==1){
                cout<<"NO"<<endl;
                continue;
            }else{
                cout<<"YES"<<endl;
                continue;
            }
        }
        //if l is odd, no of odd numbers in range = (r-l+1)/2
        //if l is even, no of odd numbers in range = (r-l+2)/2
        if(l%2){
            if(k>=(r-l+2)/2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if(k>=(r-l+1)/2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}