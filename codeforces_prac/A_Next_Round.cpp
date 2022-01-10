#include <bits/stdc++.h>

using namespace  std;

int main(){
    int n, k;
    cin>>n>>k;
    int count=0;
    int *arr;
    int i, j, temp;
    arr = new int [n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    for(i=1; i<=n; i++){
        if(arr[i]>=arr[k] && arr[i]>0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}


//alternative approach

// #include <iostream>
// using namespace std;
// int n, k, a, b = 0, mas[10000];
// int main() {
//     cin >> n >> k;
//     for (int i = 1; i <= n; i++) {
//         cin >> a;
//         mas[i] = a;
//     }
//     for (int j = 1; j <= n; j++) {
//         if (mas[j] >= mas[k] && mas[j] > 0) {
//             b++;
//         }
//     }
//     cout << b;
// }