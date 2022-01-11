#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin>>k;
    int arr[12], arr_sum=0;
    //int count=0, sum=0;
    for(int i=0; i<12; i++){
        cin>>arr[i];
        arr_sum+=arr[i];
    }
    if(arr_sum<k){
        cout<<"-1"<<endl;
    }
    else{
        sort(arr, arr + 12, greater<int>()); //sort array in reverse order
        int count=0, sum=0;
        for(int i=0; i<12; i++){
            while(sum<k){
                sum+=arr[count];
                count+=1;
                // if(sum>=k){
                //     break;
                // }
            }
            // else if(arr[i]>=k && k!=0){
            //     cout<<"1"<<endl;
            //     break;
            // }
        }
        cout<<count<<endl;
    }

    return 0;
}
