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
    int n;
    cin>>n;
    int arr[n];

    rep(i,0,n){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    while(k--){
        int a,b;
        cin>>a>>b;
        int u=b-1;
       
        int d=arr[a-1]-b;
        //  cout<<arr[a-1]<<" "<<u<<" "<<d<<endl;
        arr[a-1]=0;
        if(a==1){
          arr[1]+=d;
          
        }else if(a==n){
            arr[n-2]+=u;
        }else{
            arr[a-2]+=u;
            arr[a]+=d;
        }
        // cout<<a<<":"<<arr[a-1]<<"\n";
        // cout<<a-1<<":"<<arr[a-2]<<"\n";
        // cout<<a+1<<":"<<arr[a]<<"\n";
    }

    rep(i,0,n){
        cout<<arr[i]<<endl;
    }
    return 0;

}