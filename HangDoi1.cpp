#include<bits/stdc++.h>
#define ll             long long
#define ld             long double
#define pqueue         priority_queue
#define fast_proc      ios::sync_with_stdio(0); cin.tie(0);
#define all(x)         (x).begin(),(x).end()
#define FOR(i,a,b)     for(int i=a;i<b;i++)
#define FORb(i,b,a)    for(int i=b;i>=a;i--)
#define sz(x)          (int)((x).size())
#define EACH(x,y)      for(auto& x:y)
const int mod=1e9+7;
using namespace std;

void solve(){
	int n,last=0;
	cin>>n;
	queue<int> q;
	while(n--){
		int con;
		cin>>con;
		if(con==1)
			cout<<sz(q)<<"\n";
		else if(con==2)
			sz(q)>0 ? cout<<"NO"<<"\n" : cout<<"YES"<<"\n";
		else if(con==3){
			int k; cin>>k;
			q.push(k);
		}
		else if(con==4 && sz(q)>0)
			q.pop();
		else if(con==5)
			sz(q)>0 ? cout<<q.front()<<"\n" : cout<<"-1"<<"\n";
		else if(con==6)
			sz(q)>0 ? cout<<q.back()<<"\n" : cout<<"-1"<<"\n";
		last=con;
	}
	if(last==3 || last ==4)
		cout<<"\n";
}

int main(){
	fast_proc;
	int t;
	cin>>t;
	while(t--)
		solve();
}