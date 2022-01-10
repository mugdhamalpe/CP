#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int Pi;
    cin>>n;
    int *arr;
    arr = new int [n+1]; //coz i starting from 1
    for(int i=1; i<n+1; i++){
        cin>>Pi;
        arr[Pi]=i;
    }for(int i=1; i<n+1; i++){
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}