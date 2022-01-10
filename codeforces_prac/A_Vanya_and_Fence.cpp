#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h;
    cin>>n>>h;
    int Ai;
    int count=0;
    while(n--){
        cin>>Ai;
        if(Ai<=h){
            count+=1;
        }else if(Ai>h){
            count+=2;
        }
    }
    cout<<count;
    return 0;
}