#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int n, count=0;
    cin>>n;
    int x[n],y[n];
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0; i<n; i++){
        int right=0, left=0, up=0, down=0;
        for(int j=0; j<n; j++){
            if(x[j]>x[i] && y[j]==y[i]){
                right=1;
            }else if(x[j]<x[i] && y[j]==y[i]){
                left=1;
            }else if(x[j]==x[i] && y[j]<y[i]){
                down=1;
            }else if(x[j]==x[i] && y[j]>y[i]){
                up=1;
            }
        }
        if(right && left && up && down){
            count+=1;
        }
    }
    cout<<count<<endl;
    return 0;
}