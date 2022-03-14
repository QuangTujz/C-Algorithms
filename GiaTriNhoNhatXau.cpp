// He who fears nothing
#include<bits/stdc++.h>

typedef long long      ll;
typedef long double    ld;

#define pii            pair<int,int>
#define pll            pair<ll,ll>
#define Crescendo      ios::sync_with_stdio(0); cin.tie(0);
#define pqueue         priority_queue
#define all(x)         (x).begin(),(x).end()
#define sz(x)          (int)((x).size())
#define EACH(x,y)      for(auto& x:y)
#define SetLimit(x)    cout<<fixed<<setprecision(x);
const int mod=1e9+7;
using namespace std;

void Divine(){
	int n; cin>>n;
	string s; cin>>s;
	int d[26];	
	memset(d,0,sizeof(d));
	pqueue<int,vector<int>,less<int> > pq;
	for(int i=0;i<sz(s);i++)
		d[s[i]-'A']++;
	for(int i=0;i<26;i++)
		pq.push(d[i]);
	while(n--){
		int take=pq.top();
		pq.pop();
		take--;
		pq.push(take);
	}
	int res=0;
	while(!pq.empty()){
		int sol=pq.top();
		res+=sol*sol;
		pq.pop();
	}
	cout<<res<<"\n";
}

int main(){
	Crescendo
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
		Divine();
	}
}