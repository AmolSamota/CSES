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
    string s,r;
    cin>>s>>r;
    ll n,m;
    n=s.size();
    m=r.size();
    ll dp[n+1][m+1];
    dp[0][0]=0;
    for(ll i=1 ; i<=n ; i++)dp[i][0]=i;
    for(ll i=1 ; i<=m ; i++)dp[0][i]=i;
    
    for(ll i=1 ; i<=n ; i++){
        for(ll j=1 ; j<=m ; j++){
            if(s[i-1] == r[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=min(dp[i-1][j] , min(dp[i][j-1], dp[i-1][j-1]))+1;
            }
        }
    }
    cout<<dp[n][m];

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