//  #include "setup.h"
#include<bits/stdc++.h>
using namespace std;
#define  ll  long long
#define ld long double
#define int  long long
 ll modu=1e9+7;
//ll modu=998244353;
ll inf=1e18+69;
const ll maxxx=2e5 + 69;
// vector<int >adj[maxxx];
// vector<int>Value(maxxx);
// vector<int>prime;
// vector<bool> balle(1000007,true);
//vector<int>factors[maxxx];
// vector<ll>multiples[maxxx];


void  solve() {
int n , a ,b;
cin>>n>>a>>b;
int low=0, mid=0,high=2e18;
int ans=0;
if(a>b)swap(a,b);
low=a;
high=n*a;
while(low<=high){
    mid=(low+high)/2;
    int cnt1=mid/a;
    int cnt2=mid/b;
    int g=__gcd(a,b);
    int lcm_ab=a*b/g;
    int cnt3=mid/lcm_ab;
    int curr=cnt1+cnt2-cnt3;
    if(curr>=n){
        ans=mid;
        high=mid-1;

    }else low=mid+1;

}
ans%=modu;
cout<<ans<<"\n";

}
int32_t main() {
//     setup();
    std::ios ::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t=1;
    // doo();
    // precompute();
//    cin>>t ;
    while(t--)  solve();
}