#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m, minimum;
    cin>>n>>m;
    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    sort(arr, arr+m);
    for(int i=n; i<m+1; i++){
        int min_abs=abs(arr[i-1]-arr[i-n]);
        minimum=min(minimum, min_abs);
    }
    cout<<minimum;
    return 0;
}