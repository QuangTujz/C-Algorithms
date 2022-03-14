// He who fears nothing
#include<bits/stdc++.h>
using namespace std;

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
const int d4i[4]={-1,0,1,0}, d4j[4]={0,1,0,-1};

struct Data{
	int value,weight;
};

bool newlook(struct Data x, struct Data y){
	double lp=(double)x.value/(double)x.weight;
	double rp=(double)y.value/(double)y.weight;
	return lp>rp;
}

void FractionKnapsack(struct Data v[], int n, int W){
	sort(v,v+n,newlook);
	int current=0;
	double Dvalue=0.0;
	for(int i=0; i<n; i++){
		if(current+v[i].weight<=W){
			current+=v[i].weight;
			Dvalue+=v[i].value;
		}
		else{
			int remain=W-current;
			Dvalue+=v[i].value*((double)remain/(double)v[i].weight);
			break;
		}
	}
	SetLimit(2);
	cout<<Dvalue<<"\n";
}

void test_case(){
	int n,W;
	cin>>n>>W;
	Data v[n];
	for(int i=0; i<n; i++)
		cin>>v[i].value>>v[i].weight;
	FractionKnapsack(v,n,W);
}

int main(){
	Crescendo;
	int test;
	cin>>test;
	for(int i=0; i<test; i++){
		test_case();
	}
}