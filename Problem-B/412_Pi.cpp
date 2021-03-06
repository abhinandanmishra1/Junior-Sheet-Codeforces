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
ll gcd(ll a,ll b){
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}
int main(){
    ll n;
    while(1){
        cin>>n;
        if(n==0) break;
        ll arr[n];
        rep(i,0,n){
            cin>>arr[i];
        }
        ll count=0,gcd_count=0;
        rep(i,0,n-1){
            rep(j,i+1,n){
                if(gcd(arr[i],arr[j])==1){
                    gcd_count++;
                }
                count++;
            }
        }
        if(gcd_count>0)
        {double ans= sqrt((double)6*count/(double)gcd_count);
        printf("%.6lf\n",ans);
        }
        else{
            cout<<"No estimate for this data set.\n";
        }

    }

    return 0;

}