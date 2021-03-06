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

#define rep(i,a,b)   for(int i=a;i<b;i++)

#define repe(i,a,b)   for(int i=a;i<=b;i++)

#define mem1(a)      memset(a,-1,sizeof(a))

#define mem0(a)      memset(a,0,sizeof(a))

#define ppc          __builtin_popcount

#define ppcll        __builtin_popcountll

#define INF 100000000000000000

#define mod 1000000007

#define esp 10e-7

const int mx=1e5+7;

int main(){
    ll n;
    cin>>n;
    ll arr[n],brr[n];
    for (ll i = 0; i < n; i++)
    {
       cin>>arr[i];
       brr[i]=arr[i];
    }
    sort(brr,brr+n);
    ll t;
    cin>>t;
    ll sum1[n],sum2[n];
    sum1[0]=0;
    sum2[0]=0;
    for(ll i=1;i<n;i++){
               sum1[i]=sum1[i-1]+arr[i];
           }
    for(ll i=1;i<n;i++){
               sum2[i]=sum2[i-1]+brr[i];
           }
    while (t--)
    {
       ll a,b,c;
       cin>>a>>b>>c;
       ll sum=0;
       if(a==1){
           sum=sum1[c-1]-sum1[b-1];
           sum+=arr[b-1];
       }else{
           sum=sum2[c-1]-sum2[b-1];
           sum+=brr[b-1];
       }
       cout<<sum<<endl;
    }
    
    return 0;

}