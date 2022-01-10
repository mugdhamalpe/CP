#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        // long int greatest_num = max(a,b,c);
        int A,B,C;
        int B_C = max(b,c)+1-a;
        int A_C = max(a,c)+1-b;
        int A_B = max(a,b)+1-c;
        A=max(0, B_C);
        B=max(0, A_C);
        C=max(0, A_B);
        // if(a>=b && a>c){
        //     A = 0;
        //     B = abs(a-b)+1;
        //     C = abs(a-c)+1;
        // }
        // else if(b>a && b>=c){
        //     A = abs(b-a)+1;
        //     B = 0;
        //     C = abs(b-c)+1;
        // }
        // else if(c>=a && c>b){
        //     A = abs(c-a)+1;
        //     B = abs(c-b)+1;
        //     C = 0;
        // }
        // else if(a==b && b==c && c==a){
        //     A=1;
        //     B=1;
        //     C=1;
        // }
        cout<<A<<" "<<B<<" "<<C<<endl;
    }
    return 0;
}