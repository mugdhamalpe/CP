#include <bits/stdc++.h>

using namespace std;

//condition of equilb=summation of x coord=0, y coord=0 and z coord=0 resp

int main(){
    int n, x, y, z;
    int sumX=0, sumY=0, sumZ=0;
    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }
    if((sumX==0) && (sumY==0) && (sumZ==0)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}