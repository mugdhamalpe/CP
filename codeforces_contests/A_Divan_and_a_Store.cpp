
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int t;
    ll n,l,r,k;
    cin>>t;
    while(t--){
        int choco_count=0, sum=0;
        cin>>n>>l>>r>>k;
        ll arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        //sort array
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp  =arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

        for(int i=0; i<n; i++){
            if(arr[i]>=l && arr[i]<=r){
                //sum+=arr[i];
                if(arr[i]<=k) //item less than k(budget)
                {
                    choco_count+=1;
                    k=k-arr[i];
                }
                // if(sum<=k){
                //     choco_count+=1;
                // }
            }
        }
        cout<<choco_count<<endl;
        // if(sum<=k){
        //     cout<<choco_count<<endl;
        // }else{
        //     cout<<"0"<<endl;
        // }
        // for(int i=0; i<n; i++){
        //     if(arr[i]>l && arr[i]<r){
        //         sum+=arr[i];
        //         choco_count+=1;
        //     }
        // }
    }
    return 0;
}


// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t>0)
//     {
//         long int n,l,r,k,count=0;
//         cin>>n>>l>>r>>k;
//         long int arr[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         n = (sizeof(arr) / sizeof(arr[0]));
//         sort(arr,arr+n);
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]>=l && arr[i]<=r && arr[i]<=k)
//             {
//                 count++;
//                 k=k-arr[i];
//             }
//         }
//         cout<<count<<endl;
//         t--;
//     }
//     return 0;
// }
