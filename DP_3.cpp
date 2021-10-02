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
    ll n,x;
    cin>>n>>x;
    ll coins[n];
    for(ll i=0 ; i<n ; i++)cin>>coins[i];
    ll table[x+1];
    table[0]=1;
    for(ll i=1 ; i<=x ; i++){
        table[i]=1e18+5;
    }
    for(ll i=1 ; i<=x ; i++){
        table[i]=0;
        for(ll j=0 ; j<n ; j++){
            if(i-coins[j]>=0){
                table[i]=(table[i] + table[i-coins[j]])%mod;
            }
        }
    }
    if(table[x] == 1e18+5)cout<<"-1";
    else cout<< table[x];
    
    
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