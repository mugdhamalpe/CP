// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     string ip_string;
//     cin>>ip_string;
//     sort(ip_string.begin(), ip_string.end());
//     int freq_count = 0;
//     int string_len = ip_string.length();

//     for(int i; i<string_len; i++){
//         if(ip_string[i]!=ip_string[i-1]){
//             freq_count+=1;
//         }
//     }
//     if(freq_count%2 == 0){
//         cout<<"CHAT WITH HER!";
//     }else{
//         cout<<"IGNORE HIM!";
//     }
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string ip_string;
    cin>>ip_string;
    sort(ip_string.begin(),ip_string.end());
    int len_string=ip_string.length();
    int count=0;
    for(int i=1; i<len_string; i++)
    {
        if(ip_string[i]!=ip_string[i-1]){
            count++;
        }
    }
    if(count%2 == 0)
        cout<<"IGNORE HIM!"<<endl;
    else
        cout<<"CHAT WITH HER!"<<endl;

    return 0;
}