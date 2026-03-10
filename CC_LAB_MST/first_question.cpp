//  #include "setup.h"
#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define  ll  long long
#define ld long double
#define int  long long
ll modu=1e9+7;
//ll modu=998244353;
ll inf=1e18+69;
const ll maxxx=2e5 + 69;
vector<int >adj[maxxx];
// vector<int>Value(maxxx);
// vector<int>prime;
// vector<bool> balle(1000007,true);
//vector<int>factors[maxxx];
// vector<ll>multiples[maxxx];


void  solve() {
    int n ; cin>>n;
    using t=pair<int,int>;
    vector<t>v(n);
    for(int i=0;i<n;i++) cin>>v[i].first>>v[i].second;
    int ans=0;
    int sum=0;
    for(auto [x,y]:v){
        sum+=x;

        ans+=x;

    }
    sort(v.begin(),v.end(),[&](auto a,auto b ){
        return a.second-a.first>b.second-b.first;
    });
    for(auto [x,y]:v){
        if(y>sum){
            ans+=y-sum;
            sum=y;
        }
        sum-=x;

    }
    cout<<ans<<"\n";

}
int32_t main() {
//     setup();
    std::ios ::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t=1;
    // doo();
    // precompute();
    cin>>t ;
    while(t--)  solve();
}