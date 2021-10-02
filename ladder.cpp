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

ll ans=25;
void solve(ll mask, ll curr, ll count, ll target, ll x[], ll n){
    
    int flag=0;
    for(int j=0 ; j<n ; j++){
        if( (1<<j) & mask == 0){
            flag++;  
        }
    }
    if(flag){
        ans=min(ans,count);
        return;
    }
    cout<<"a";
    for(int j=0 ; j<n ; j++){
        if((1<<j) & mask == 0){
            cout<<"a"<<x[j]<<target<<" ";
            if(x[j]+curr <= target){
                mask=mask^(1<<j);
                cout<<mask<<" ";
                solve(mask,curr+x[j],count,target,x,n);
                mask=mask^(1<<j);
            }
            else{
                mask=mask^(1<<j);
                solve(mask,x[j],count+1,target,x,n);
                mask=mask^(1<<j);
            }
        }
    }
    
}
void royale_paradox()   
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0 ; i<n ; i++)cin>>a[i];
    solve(0,0,1,x,a,n);
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