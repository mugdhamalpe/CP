#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int count = 0;
        while(k){
            count+=1;
            //last digit-3 and div by 3
            if (count%3!=0 && count%10!=3){
                k-=1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}