#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    //1-bag -> 1,2,3...n^2candies
    //1 to n^2 -> k candies
    int n,sum=0;
    cin>>n;
    int ele1=1, ele2=(n*n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
            cout<<ele1<<" ";
            ele1+=1;
        }
        for(int j=0; j<n/2; j++){
            cout<<ele2<<" ";
            ele2-=1;
        }
        // int last=n*n-i;
        //cout<<i+1<<" "<<n*n-i<<endl;
        cout<<endl;
    }
    //cout<<endl;

    return 0;
}