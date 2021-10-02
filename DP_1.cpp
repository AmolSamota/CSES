// On a road to becoming a expert on my own before September ends :')

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
#define iterator vector<vector<int>>::iterator
using namespace std;

// -------------------------- Never Give Up --------------------------------

void royale_paradox()   
{
    ll n;
    cin>>n;
    ll dp[n+1]={0};
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(ll i=4 ; i<=n ; i++){
        for(ll j=1 ; j<=6 ; j++){
            if(i-j >= 0)dp[i] = (dp[i] + dp[i-j])%mod;
        }
    }
    cout<<dp[n];
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