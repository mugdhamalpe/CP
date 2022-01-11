// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     int count=0, grps=0;
//     cin>>n;
//     int arr[n+9];
//     for(int i=1; i<=n; i++){
//             cin>>arr[i];
//     }
//     for(int i=1; i<=n; i++){
//         count=0;
//         int num = arr[i];
//         while(arr[i]!=-1){
//             num=arr[num];
//             count+=1;
//         }
//         grps=max(grps, count);
//     }
//     cout<<grps+1<<endl;
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, count=0, grps=0;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];

    }
    for(int i=1; i<=n; i++){
        count=0;
        int num=arr[i];
        while(num != -1){
            num=arr[num];
            count+=1;
        }
        grps=max(grps, count);
    }
    cout<<grps+1<<endl;

    return 0;
}