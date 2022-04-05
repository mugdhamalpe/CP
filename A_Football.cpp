#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int count=0;//no of goals
    cin>>n;
    string s1;//football team
    string s2;//winning team
    while(n--){
        if(count!=0){
            cin>>s1;
            if(s1==s2){
                count+=1;
            }else{
                count-=1;
            }
        }else{
            cin>>s2;
            count=1;
        }
        // cout<<s2<<endl;
    }
    cout<<s2<<endl;
    return 0;
}

