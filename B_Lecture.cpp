#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    string a1, b1;
    //string arr1, arr2;
    map<string, string> mappie;
    while(m--){
        cin>>a1>>b1;
        if(a1.length()>b1.length()){
            mappie[a1]=b1;
        }else{
            mappie[a1]=a1;
        }
    }
    while(n--){
        cin>>a1;
        cout<<mappie[a1]<<" ";
    }
    return 0;
}