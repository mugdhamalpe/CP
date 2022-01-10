


#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, x, y;
    int x1, y1;
    cin>>t;
    while(t--){
        cin>>x>>y;
        //float divi = (float)(x-y);
        int subs = abs(x-y);
        if(subs>0 && subs%2==0){
            if(x>y){
                x1=(float)(x-y)/2;
                y1=y;
                cout<<x1<<" "<<y1<<endl;
            }else if(x<y){
                x1=x;
                y1=(y-x)/2;
                cout<<x1<<" "<<y1<<endl;
            }else if(x==0 && y==0){
                cout<<x<<" "<<y<<endl;
            }

        }else if(subs==0){
            if(x%2==0){
                cout<<x/2<<" "<<y/2<<endl;
            }else if(x%2!=0){
                x1=(x-y)/2;
                y1=y;
                cout<<x1<<" "<<y1<<endl;
            }else{
                cout<<"-1 -1"<<endl;
            }
        }
        else{
            cout<<"-1 -1"<<endl;
        }
    }
    return 0;
}



