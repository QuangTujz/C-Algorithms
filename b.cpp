// I have depression while coding
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
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

const ll mod=1e9+7;
const ll MOD=1e15+7;
const int d4y[4]={-1,0,1,0}, d4x[4]={0,1,0,-1};
const int d8y[8]={-1,-1,0,1,1,1,0,-1}, d8x[8]={0,1,1,1,0,-1,-1,-1};

template<typename T>
using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

void test_case(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> l(n+1),r(n+1);
    l[0]=r[n]=1e9;
    for(int i=0; i<n; i++)
        l[i+1]=s[i]&1?0:l[i]+1;
    for(int i=n-1; i>=0; i--)
        r[i]=s[i]&1?0:r[i+1]+1;
    ll ans=0;
    for(int i=0; i<n; i++)
        ans+=min(l[i+1],r[i]);
    cout<<ans<<"\n";
}

int main(){
    Crescendo;
    int test;
    cin>>test;
    for(int i=1; i<=test; i++){
        cout<<"Case #"<<i<<": ";
        test_case();
    }
}