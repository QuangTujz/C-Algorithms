#include<bits/stdc++.h>
using namespace std;
void test_case(){
    int n;
    cin>>n;
    vector<int> v(n+5);
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a>0)
        v.push_back(a);
    }
    int sum=0;
    for(int i=0; i<v.size(); i++){
        sum+=v[i];
    }
    cout<<sum<<"\n";
}
int main(){
    int test;
    cin>>test;
    for(int i=1; i<=test; i++){
        test_case();
    }
}
