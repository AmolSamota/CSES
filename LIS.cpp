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
    ll x[n];
    for(ll i=0 ; i<n ; i++)cin>>x[i];
    vector <ll> inc;
    for(ll i=0 ; i<n ; i++){
        if(inc.size()==0)inc.pb(x[i]);
        else{
            ll last=inc[inc.size()-1];
            if(x[i] <= last){
                ll it = lower_bound(inc.begin() , inc.end() , x[i]) - inc.begin();
                inc[it]=x[i];
            }
            else{
                inc.pb(x[i]);
            }
        }
    }
    cout<<inc.size();

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