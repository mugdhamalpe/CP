#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        if((a+c-2*b)%3 == 0){
        cout<<"0"<<endl;
        }else{
            cout<<"1"<<endl;
        }
    }
}

// Explaination
/*
1605A - A.M. Deviation
→ Applying the operation on a1 and a3 (irrespective of which element is incremented and which one is decremented) does not change the value of a1+a3−2⋅a2.

→ Incrementing a1 (or a3) by 1 and decrementing a2 by 1 causes the value of a1+a3−2⋅a2 to increase by 3.

→ Decrementing a1 (or a3) by 1 and incrementing a2 by 1 causes the value of a1+a3−2⋅a2 to decrease by 3.

This effectively means that we can add or subtract any multiple of 3 by performing some number of operations. Also, the value of a1+a3−2⋅a2 will never change modulo 3. Thus,

If a1+a3−2⋅a2≡0 mod3, then the minimum value of d(a1,a2,a3)=|0|=0
If a1+a3−2⋅a2≡1 mod3, then the minimum value of d(a1,a2,a3)=|1|=1
If a1+a3−2⋅a2≡2 mod3, then the minimum value of d(a1,a2,a3)=|2−3|=|−1|=1
In simpler words, if a1+a3−2⋅a2 is divisible by 3 the answer is 0, otherwise it is 1.

Time Complexity: O(1)
*/

