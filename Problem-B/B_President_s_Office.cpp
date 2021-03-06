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
    char c;
    cin>>n>>m>>c;
    char arr[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    unordered_set<char> deputies;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(arr[i][j]==c){
                if(i!=0 && arr[i-1][j]!=c && arr[i-1][j]!='.'){
                    deputies.insert(arr[i-1][j]);
                   
                }
                if(i!=n-1 && arr[i+1][j]!=c && arr[i+1][j]!='.'){
                    deputies.insert(arr[i+1][j]);
                    
                }
                if(j!=0 && arr[i][j-1]!=c && arr[i][j-1]!='.'){
                    deputies.insert(arr[i][j-1]);
                    
                }
                if(j!=m-1 && arr[i][j+1]!=c && arr[i][j+1]!='.'){
                    deputies.insert(arr[i][j+1]);
                    
                }
            }
        }
       
    }
    
    cout<<deputies.size();
    return 0;

}