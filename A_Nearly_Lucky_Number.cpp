// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     int count=0;
//     for(int i=0; i<sizeof(s); i++){
//         if(s[i]=='4' || s[i]=='7'){
//             count+=1;
//         }
//     }
//     if(count==4 || count==7){
//         cout<<"YES";
//     }else if(count==0){
//         cout<<"NO";
//     }
//     else{
//         cout<<"NO";
//     }
//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    int count=0;
    while(n){
        if(n%10==4 || n%10==7){
            count+=1;
        }n=n/10;
    }
    if(count==4 || count==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}

// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
// long long int n;
// int lucky = 0;

// cin >> n;

// while(n)
// {
// if(n % 10 == 7 || n % 10 == 4)
// lucky++;

// n = n / 10;
// }

// if(lucky == 7 || lucky == 4)
// cout << "YES";
// else
// cout << "NO";

// return 0;
// }