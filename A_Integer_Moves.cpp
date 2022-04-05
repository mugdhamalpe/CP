#include <bits/stdc++.h>

using namespace std;

// int countSquares(int a, int b)
// {
//     int count = 0;
//     for (int i = a; i <= b; i++)
//         for (int j = 1; j * j <= i; j++)
//             if (j * j == i)
//                 count++;
//     return count;
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        double d=sqrt(pow(x,2)+pow(y,2));
        if(x==0&&y==0){
            cout<<"0"<<endl;
        }else if(d==(int)d){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }
    return 0;
}