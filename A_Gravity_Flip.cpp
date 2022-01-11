#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n; //no of columns
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    }
    //printing no of rows after sorting arr

    return 0;
}