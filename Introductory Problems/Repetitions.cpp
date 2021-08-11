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
    string s;
    cin>>s;
    ll n=s.size();
    ll ans=0,ct=1;
    for(ll i=0 ; i<n-1 ; i++){
        if(s[i]==s[i+1])ct++;
        else{
            ans=max(ct,ans);
            ct=1;
        }
    }
    ans=max(ct,ans);
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