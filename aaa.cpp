#include <bits/stdc++.h>
using namespace std;
 
//#include <ext/pb_ds/assoc_container.hpp> 
//#include <ext/pb_ds/tree_policy.hpp> 
//using namespace __gnu_pbds; 
//https://codeforces.com/blog/entry/11080
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define f first
#define s second
#define pii pair<int,int>
#define lui long unsigned int
//#define int long long
 
const int N = 1000005;
const ll MOD = 1e9 + 7;
const ll M = 1e18;
 
ll qpow(ll a, ll b, ll m)
{
    ll  ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%m;
        b/=2;
        a=(a*a)%m;
    }
    return ans;
}

int main()
{

/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/

    IOS;

    int tt=1; //cin>>tt;
    for(int t = 1; t <= tt; t++){

       int n; cin >> n; 
       int ans = n/3 * 2;
       if(n%3 > 0) ans++;
       cout << ans;
        
    cout << endl;
        
    }
    
    return 0;
}