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
    vector <vector <ll> > jobs;
    for(ll i=0  ;i<n ; i++){
        ll a,b,c;
        cin>>a>>b>>c;
        vector <ll> f;
        f.pb(a);
        f.pb(b);
        f.pb(c);
        jobs.pb(f);
    }
    map<ll,ll> dp;
        
    sort(jobs.begin(), jobs.end(), [](const vector<ll>& a, const vector<ll>& b) {
        return a[0] > b[0];
    });
    ll maxT = 0;
    for (auto job : jobs) {
        auto it = dp.lower_bound(job[1]+1);
        ll pre = (it == dp.end()) ? 0 : it->second;
        maxT = max(maxT, job[2] + pre);
        dp[job[0]] = maxT;
    }
    
    cout<<maxT;
    

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