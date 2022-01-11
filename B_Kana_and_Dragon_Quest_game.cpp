#include <bits/stdc++.h>

using namespace std;

int voidAbsorption(int h){
    return (h/2)+10;
}

//if h=6, absorb-> 6/2+10=13 which means that we r gaining health from the attack which ain't possible

// so, h/2 must be > 10
// i.e. h>20

int lightningStrike(int h){
    return h-10;
}

int main(){
    int t;
    int x,n,m;
    //x->hit point
    //n->absorb
    //m->strike
    cin>>t;
    while(t--){
        cin>>x>>n>>m;
        if(x<=m*10){
            cout<<"YES"<<endl;
            continue;
        }
        while(x>0 && (n>0 || m>0)){
            if(x>20 && n>0){
                n-=1;
                x=voidAbsorption(x);
            }
            else if(x>20 && m>0){
                m-=1;
                x=lightningStrike(x);
            }
            else if(n>0){
                n-=1;
                x=voidAbsorption(x);
            }
            else if(m>0){
                m-=1;
                x=lightningStrike(x);
            }
        }

        if(x<=0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

//h/2+10>h-10
//h/2>20
//h>40
