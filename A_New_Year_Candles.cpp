#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, divi=0, remi=0;
    cin>>a>>b;
    int result=a;
    while(a>=b){
        divi=a/b;
        result+=divi;
        remi=a%b;
        a=divi+remi;
    }
    cout<<result<<endl;
    return 0;
}
