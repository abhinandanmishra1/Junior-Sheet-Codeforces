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
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll start=-1,end=-1;
    for(ll i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            start=i;
            break;
        }
    }
    for(ll i=n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            end=i;
            break;
        }
    }
    if(start==-1 || end==-1){
        cout<<"yes\n1 1";
        return 0;
    }
    // cout<<start<<" "<<end<<endl;
    for(ll i=start;i<=(end+1)/2;i++){
        swap(arr[i],arr[end-i+1]);
    }
    bool flag=true;
    for(ll i=0;i<n;i++){
        cout<<arr[i]<<" ";
        if(i!=n-1 && arr[i]>arr[i+1]){
            flag=false;
        
        }
    }
    if(flag){
        cout<<"yes\n";
        cout<<start+1<<" "<<end+1;
        
    }else{
        cout<<"no";
    }
    return 0;

}