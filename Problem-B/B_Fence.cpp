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

    ll n,m;
    cin>>n>>m;
    ll arr[n],sum=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(i<m){
            sum+=arr[i];
        }
    }
    ll pos=0;
    ll min=sum;
    for(int i=1;i<n+1-m;i++){ 
        sum=sum-arr[i-1]+arr[m+i-1];
        if(sum<min){
            min=sum; 
            pos=i;  
        }
       
   
    }
    cout<<pos+1;

    
    return 0;

}