
// https://codeforces.com/contest/1506/problem/A

#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
void solve()
{
 
    int r, c, x;
    cin >> r >> c >> x;
 
    int j = x / r;
 
    if (x == j * r)
        j--;
        
    int i = x - 1 - r * j;
 
    cout << (c * i + j + 1);
 
    cout << endl;
}
 
signed main() {
    int t;
    cin >> t;
    
    while (t--){
    
        solve();
 
    }
    
    return 0;
}
