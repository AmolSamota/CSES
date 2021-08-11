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
    ll n,m;
    cin>>n>>m;
    vector< ll > adj[n+1];
    for(ll i=0 ; i<m ; i++){
        ll x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    ll ans=0;
    queue <ll> pq;
    bool visited[n+1];
    vector <ll> as;
    for(ll i=0 ; i<=n ; i++)visited[i]=false;
    for(int i=1 ; i<=n ; i++){
        // cout<<adj[i].size()<<" ";
        if(visited[i] == false){
            as.pb(i);
            pq.push(i);
            visited[i]=true;
            ans++;
        }
        while(pq.size() != 0){
            // cout<<pq.front()<<" ";
            ll k,j=0;
            k=pq.front();
            pq.pop();
            while(j<adj[k].size()){
                // if(k==9)cout<<adj[k][j]<<" "<<visited[adj[k][j]]<<ln;
                if(visited[adj[k][j]]==false){
                    visited[adj[k][j]]=true;
                    pq.push(adj[k][j]);
                }
                j++;
            }
        }
    }
    cout<<ans-1<<ln;
    for(ll i=0 ; i<as.size()-1 ; i++){
        cout<<as[i]<<" "<<as[i+1]<<ln;
    }
    
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