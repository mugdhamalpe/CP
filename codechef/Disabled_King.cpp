#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            cout<<n<<endl;
        }else{
            cout<<n-1<<endl;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;
// int numberOfPaths(int m, int n)
// {
//     // If either given row number is first or given column
//     // number is first
//     if (m == 1 || n == 1)
//         return 1;
  
//     // If diagonal movements are allowed then the last
//     // addition is required.
//     return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
//     // + numberOfPaths(m-1, n-1);
// }
// int main(){
//     int t, n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         numberOfPaths(n, n);
//     }
//     return 0;
// }

// C++ program to find number of cells a queen can move
// with obstacles on the chessborad
// #include<bits/stdc++.h>
// using namespace std;
 

// int range(int n, int x, int y)
// {
//   return (x <= n && x > 0 && y <= n && y > 0);
// }
 

// int check(int n, int x, int y, int xx, int yy)
// {
//   int ans = 0;
//   while (range(n, x, y))
//   {
//     x += xx;
//     y += yy;
//     ans++;
//   }
   
//   return ans;
// }

// int numberofMoves(int n, int k, int x, int y)
// {
//   int x1, y1, ans = 0;
//   map <pair<int, int>, int> mp;
   


//   ans += check(n, x, y + 1, 0, 1);
//   ans += check(n, x, y-1, 0, -1);
//   ans += check(n, x + 1, y + 1, 1, 1);
//   ans += check(n, x + 1, y-1, 1, -1);
//   ans += check(n, x-1, y + 1, -1, 1);
//   ans += check(n, x-1, y-1, -1, -1);
   
//   return ans;
// }
 

// int main()
// {
//     int t, n;
//     cin>>t;
//     int k = 0;
//     int posX = 1; // x position
//     int posY = 1; // y position
//     while(t--){
//         cin>>n;
//         int n = n;  // chessboard size
//         int tot = numberofMoves(n, k, posX+1, posY+1);
//         int tot1 = numberofMoves(n, k, posX, posY);
//         cout << tot-tot1 << endl;
//     }
//   return 0;
// }


