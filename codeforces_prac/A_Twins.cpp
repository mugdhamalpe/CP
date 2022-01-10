#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0, count=0, rev_sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
        // while(sum<=arr[i]){
        // count+=1;
        // }
        // if(sum>arr[i]){
        //     break;
        // }
    }
    sum=sum/2; //checking reverse sum with sum/2 i.e till half of array
    sort(arr, arr+n); //sorting array
    for(int i=n-1; i>=0; i--){
        rev_sum += arr[i];
        count+=1;
        if(rev_sum>sum){
            break; //out of for loop
        }
    }
    cout<<count;
    return 0;
}