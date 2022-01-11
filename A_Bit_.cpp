// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n, x=0;
//     cin >> n;
//     string ip;
//     while (n--)
//     {
//         cin >> ip;
//         if (ip[1] == '+'){
//             x++;
//         }
//         else{
//             x--;
//         }
//     }
//     cout << x << endl;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    int count = 0;
    cin>>num;
    for(int i=0; i<num; i++){
        char process[4];
        cin>>process;
        if(process[1]=='+'){
            count += 1;
        }else if(process[1]=='-'){
            count -= 1;
        }
    }
    cout<<count;
    return 0;
}