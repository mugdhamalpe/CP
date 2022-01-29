#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, a, b, result=0;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        string s;
        cin>>s;
        if(b>=0){
            result=n*(a+b);
        }else{
            int m = unique(s.begin(), s.end()) - s.begin();
            int newres=(m/2)+1;
            result=n*a+newres*b;
        }
        cout<<result<<endl;
    }
    return 0;
}

//When you delete a substring of length l, you get a⋅l+b points.

//result=an+bk

//if b>=0 
//k=n
//result=an+bn

//else when b<0
//Let the string s consist of m blocks of zeros and ones, then ⌊m/2⌋+1 is the minimum number of operations for which the entire string can be deleted. 
