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
   vector<string>arr(n);
   for(int i=0;i<n;i++) cin>>arr[i];
   vector<pair<int,int>>v;
   for(int i=0;i<n;i++)
   {
       int bit=0;
//
       for(auto x:arr[i])
       {bit|=(1<<(x-'a'));

       }

       v.push_back({bit,arr[i].size()});

   }

   int ans=0;
   for(int i=0;i<n;i++){
       int curr_bit=v[i].first;
       int len1=v[i].second;
       for(int j=i+1;j<n;j++){
           if((curr_bit&(v[j].first))==0){
               ans=max(ans,len1*v[j].second);
           }
       }
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