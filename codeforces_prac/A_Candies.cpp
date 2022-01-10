#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long int x, denom, k;
    while(t--){
        long long int n;
        cin>>n;
        for(int k=2; k<=29; k++){
            denom = pow(2,k)-1;
            if(!(n%denom)){
                x=n/(pow(2,k)-1);
                break;
            }
        }
        // k=n%2+2;
        // denom = pow(2, k-2)+1;
        // x=1/denom+1;
        cout<<x<<endl;
    }
    return 0;
}

//sum of gp -> se sum ka formula aaya h
//summation of 2^i=2k−1 
// print x=n/2^k−1