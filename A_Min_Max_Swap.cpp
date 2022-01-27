#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, largeA, largeB;
    cin>>t;
    while(t--){
        cin>>n;
        int arrA[n];
        int arrB[n];
        for(int i=0; i<n; i++){
            cin>>arrA[i];
        }
        for(int i=0; i<n; i++){
            cin>>arrB[i];
        }
        for(int i=0; i<n; i++){
            if(arrA[i]<arrB[i]){
                int temp=arrA[i];
                arrA[i]=arrB[i];
                arrB[i]=temp;
            }
        }
        largeA=*max_element(arrA, arrA + n);
        largeB=*max_element(arrB, arrB + n);
        cout<<largeA*largeB<<endl;
    }
    return 0;
}