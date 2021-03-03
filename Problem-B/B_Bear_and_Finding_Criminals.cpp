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
    int n,k;
    cin>>n>>k;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }

    int count=0;
    
    int i=k-1,j=k-1;
    while(i>=0 || j<n){
        if(i==k-1){
            if(arr[i])
            count++;

            i--;
            j++;
           
            continue;
        }
        if(i>=0 && j<n ){
          if(arr[i] && arr[j])  
           count+=2;
          
           i--;
           j++;
        }else if(i>=0){
            if(arr[i]==1){
                count++;
                
            }
            
            i--;
        }else if(j<n){
            if(arr[j]==1){
                count++;
                
            }
            
            j++;
        }
    }

    cout<<count;

    return 0;

}