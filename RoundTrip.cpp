#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
 
vi ar[100001];
bool vis[100001];
int color[100001];
 
bool bfs(int source){
	queue<int> q;
	vis[source] = 1;
	color[source] = 1;
	q.push(source);
	
	while(!q.empty()){
		int node = q.front();
		q.pop();
		
		for(int v : ar[node])
		if(vis[v] == false){
			vis[v] = true;
			color[v] = color[node] ^ 1;
			q.push(v);
		}
		else{
			if(color[node] == color[v]) return false;
		}
	}
	
	return true;
}
 
int main()
{
	int a , b , n , m;
	cin>>n>>m;
	
	REP(i , m) cin>>a>>b , ar[a].pb(b) , ar[b].pb(a);
	
	bool flag = true;
	
	REP(i , n)
	if(vis[i] == false)
	{
		flag = bfs(i);
		if(flag == false) break;
	}
	
	if(!flag) cout<<"IMPOSSIBLE";
	else
	REP(i , n) cout<<color[i] + 1<<" ";
}
 