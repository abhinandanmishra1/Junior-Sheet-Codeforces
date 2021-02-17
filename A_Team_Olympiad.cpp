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
    int c[3]={0};
    vector<vector<int>> v(3,vi(n,0));
    int k=0,l=0,m=0;
    rep(i,0,n){
        cin>>arr[i];
        c[arr[i]-1]++;
        int s=arr[i]-1;
        if(s==0){ 
        v[s][k]=i+1;
        k++;
        }else if(s==1){ 
        v[s][l]=i+1;
        l++;
        }else{
            v[s][m]=i+1;
            m++;
        }
        
    }

    int ans=min(min(c[0],c[1]),c[2]);
    cout<<ans<<endl;
    if(ans>0){
        for(int i=0;i<ans;i++){
            cout<<v[0][i]<<" "<<v[1][i]<<" "<<v[2][i]<<endl;
        }
    }


    return 0;

}