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
int main(){
	fast_proc;
	int t;
	cin>>t;
	deque<int> q;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int n; cin>>n;
			q.push_back(n);
		}
		else if(s=="PRINTFORNT")
			sz(q)>0 ? cout<<q.front()<<"\n" : cout<<"NONE"<<"\n";
		else if(s=="POP" && sz(q)>0)
			q.pop_front();

	}
}