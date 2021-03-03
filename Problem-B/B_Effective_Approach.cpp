#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long

#define pb        push_back

#define ppb       pop_back

#define pf        push_front

#define ppf       pop_front

#define all(x)    (x).begin(),(x).end()

#define uniq(v)   (v).erase(unique(all(v)),(v).end())

#define ff        first

#define ss        second

#define pii       pair<int,int>

#define vi        vector<int>

#define vpi       vector<pair<int,int>>

#define mii          map<int,int>

#define rep(i,a,b)   for(ll i=a;i<b;i++)

#define repe(i,a,b)   for(int i=a;i<=b;i++)

#define mem1(a)      memset(a,-1,sizeof(a))

#define mem0(a)      memset(a,0,sizeof(a))

#define ppc          __builtin_popcount

#define ppcll        __builtin_popcountll

#define INF 100000000000000000

#define mod 1000000007

#define esp 10e-7


int main(){

    ll n;
    cin>>n;
    unordered_map<ll,ll> mp;
    rep(i,0,n){
        ll k;
        cin>>k;
        mp[k]=i;
    }
    ll m;
    cin>>m;
    
    ll sum1=0,sum2=0;
    while(m--){
        ll k;
        cin>>k;
        ll ind=mp[k];
        sum1+=ind+1;
        sum2+=(n-ind);
        
    }
    cout<<sum1<<" "<<sum2<<endl;


    return 0;

}