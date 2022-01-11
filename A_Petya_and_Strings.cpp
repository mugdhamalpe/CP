/*
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    char s1, s2;
    cin>>s1;
    cin>>s2;
    s1 = tolower(s1);
    s2 = tolower(s2);
    char leftstr[] = {s1};
    char rightstr[] = {s2};
    int res = strcmp(leftstr, rightstr);
    if(res==0){
        cout<<"0"<<endl;
    }
    else if(res>0){
        cout<<"1"<<endl;
    }
    else if(res<0){
        cout<<"-1"<<endl;
    }

    // if(lexicographical_compare(s1, s1+13, s2, s2+3)){
    //     cout<<"-1"<<endl;
    // }else if(!lexicographical_compare(s1, s1+13, s2, s2+3)){
    //     cout<<"1"<<endl;
    // }else{
    //     cout<<"0"<<endl;
    // }
    return 0;
}
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    for(int i=0; i<s1.size(); i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    if(s1==s2){
        cout<<"0";
    }
    else{
        for(int i=0; i<s1.size(); i++){
            if(s1[i]<s2[i]){
                cout<<"-1"<<endl;
                break;
            }
            else if(s1[i]>s2[i]){
                cout<<"1"<<endl;
                break;
            }

        }
    }return 0;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;
// string a, b;
// int main() {
//     cin >> a >> b;
//     for (int i = 0; i < a.size(); i++) {
//         if (a[i] < 92) {
//             a[i] += 32;
//         }
//         if (b[i] < 92) {
//             b[i] += 32;
//         }
//     }
//     if (a < b) {
//         cout << -1;
//     } else if (a > b) {
//         cout << 1;
//     } else if (a == b) {
//         cout << 0;
//     }
// }