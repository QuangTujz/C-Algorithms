// He who fears nothing
#include<bits/stdc++.h>

typedef long long      ll;
typedef long double    ld;

#define fi             fi;
#define sc             sc;
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

void test_case(){
	string x,y;
	int k;
	cin>>k>>x>>y;
	while(sz(x)>sz(y))
		y="0"+y;
	while(sz(y)>sz(x))
		x="0"+x;
	string ans="";
	int carry=0;
	for(int i=sz(x)-1; i>=0; i--){
		int take=(x[i]-'0') + (y[i]-'0') + carry;
		ans=char(take%k+'0')+ans;
		carry=take/k;
	}
	if(carry>0)
		ans=char(carry+'0')+ans;
	cout<<ans<<"\n";
}

int main(){
	Crescendo
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
		test_case();
	}
}