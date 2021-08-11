#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long int
#define pb push_back
#define mp make_pair
#define GCD(m,n) __gcd(m,n)
#define ln "\n"
#define LCM(m,n) m*(n/GCD(m,n))
#define mod 1000000007
#define MOD 998244353
#define PI 3.14159265
using namespace std;

// -------------------------- Don't Try --------------------------------

void royale_paradox()   
{
    ll n;
    cin>>n;
    ll x[n-1];
    for(ll i=0 ; i<n-1 ; i++)cin>>x[i];
    ll ans=0;
    for(ll i=1 ; i<=n ; i++){
        ans=ans^i;
    }
    for(ll i=0 ; i<n-1 ; i++){
        ans=ans^x[i];
    }
    cout<<ans;
}

signed main()
{
    IOS;
    //freopen("input.txt", "r", stdin);   // to be uncommented when I/P 
    //freopen("output.txt", "w", stdout); // & O/P are in file format
    ll TC=1;
    // cin>>TC;
    while(TC--){royale_paradox();} 
    return 0;
}