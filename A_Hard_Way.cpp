#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,x3,y3;
        // for(int i=0; i<3; i++){
        //     cin>>x>>y;
        // }
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int res=0;
        if(y1==y2 && y3<y1){
            res=abs(x1-x2);
        }else if(y2==y3 && y1<y2){
            res=abs(x2-x3);
        }else if(y1==y3 && y2<y1){
            res=abs(x1-x3);
        }
        cout<<fixed<<setprecision(9)<<res<<endl;
    }
    return 0;
}