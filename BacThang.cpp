#include<bits/stdc++.h>
#define ll             long long
#define fast_proc      ios::sync_with_stdio(0); cin.tie(0);
#define all(x)         (x).begin(),(x).end()
#define FOR(i,a,b)     for(int i=a;i<b;i++)
#define FORb(i,b,a)    for(int i=a;i>=b;i--)
#define sz(x)          (int)((x).size())
#define EACH(x,y)      for(auto& x:y)
const int mod=1e9+7;
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	ll dp[n+5];
	memset(dp,0,sizeof(dp));
	dp[0]=dp[1]=1;
	FOR(i,2,n+1){
		FOR(j,1,min(i,k)+1){
			dp[i]+=dp[i-j];
			dp[i]%=mod;
		}
	}
	cout<<dp[n]<<"\n";
}

int main(){
	fast_proc;
	int t;
	cin>>t;
	for(int i=1; i<t; i++){
		cout<<"Case "<<i<<": ";
		solve();
	}
}