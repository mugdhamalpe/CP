// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int n, p, q, i, j;
//     bool flag=false;
//     cin>>n;
//     cin>>p;
//     int arr[2*n];
//     for(i=0; i<p; i++){
//         cin>>arr[i];
//     }
//     cin>>q;
//     for(j=0; j<q; j++, i++){
//         cin>>arr[i];
//     }
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<p+q; j++){
//             if(i==arr[j]){
//                 flag=true;
//                 break;
//             }else{
//                 flag=false;
//             }
//         }
//     }
//     if(flag){
//         cout<<"I become the guy."<<endl;
//     }else{
//         cout<<"Oh, my keyboard!"<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, q, count=0;
    bool flag=false;
    cin>>n;
    cin>>p;
    int arr[2*n];
    for(int i=0; i<p; i++){
        cin>>arr[i];
    }
    cin>>q;
    for(int i=p; i<p+q; i++){
        cin>>arr[i];
    }
    sort(arr, arr+(p+q));
    for(int i=0; i<p+q; i++){
        if(arr[i]!=arr[i+1]){
            count+=1;
        }
    }
    if(count==n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
