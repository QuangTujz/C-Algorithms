// He who fears nothing
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef long long      ll;
typedef long double    ld;

#define pii            pair<int,int>
#define pll            pair<ll,ll>
#define Crescendo      ios::sync_with_stdio(0); cin.tie(0);
#define all(x)         (x).begin(),(x).end()
#define sz(x)          (int)((x).size())
#define pqueue         priority_queue
#define each(x,y)      for(auto& x:y)
#define SetLimit(x)    cout<<fixed<<setprecision(x);

const int mod=1e9+7;
const ll MOD=1e15+7;
const int d4y[4]={-1,0,1,0}, d4x[4]={0,1,0,-1};
const int d8y[8]={-1,-1,0,1,1,1,0,-1}, d8x[8]={0,1,1,1,0,-1,-1,-1};

template<typename T>
using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


bool check(int n){
    if(n<=5)
        return true;
    if(n>5 && n<10)
        return false;
    vector<int> v,ok;
    while(n!=0){
        int k=n%10;
        v.push_back(k);
        n/=10;
    }
    each(i,v)
        if(i>5)
            ok.push_back(i);
    if(sz(ok)>=1)
        return false;
    else
        return true;
}

void test_case(){
    int l,r;
    cin>>l>>r;
    int cnt=0;
    for(int i=l; i<=r; i++){
        int num = i;
        bool visited[10] = {false};
        while (num){
            if (visited[num % 10])
                break;
            visited[num%10] = true;
            num = num/10;
        }
        if (num==0 && check(i))
            cnt++;
    }
    cout<<cnt<<"\n";
}

int main(){
    int test;
    cin>>test;
    for(int i=0; i<test; i++){
        test_case();
    }
}