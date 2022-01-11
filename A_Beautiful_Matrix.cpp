#include <bits/stdc++.h>

using namespace std;

int main()
{   int i,j;
    int mat_item=0;
    for(i=1; i<6; i++){
        for(j=1; j<6; j++){
            cin>>mat_item;
            if(mat_item==1){
                cout<<abs(3-i)+abs(3-j)<<endl;
            }
        }
    }
    return 0;
}