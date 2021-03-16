/**
*!! Abhimanyu Bano !!
*!!कर्म करो फल की चिंता मत करो !!
* @Author  : Abhinandan Mishra
* @DateTime: 13-03-2021  15:38:32
*
**/
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
#define f        first
#define s        second
#define pll       pair<ll,ll>
#define vll        vector<ll>
#define vpll        vector<pair<ll,ll>>
#define mll          map<ll,ll>
#define umll          unordered_map<ll,ll>
#define usll          unordered_set<ll,ll>
#define sll          set<ll,ll>
#define FILL(arr)         for(ll i=0,i<n;i++)cin>>arr[i];
#define fill(arr)         for(ll i=0,i<n;i++){ ll k; cin>>k;arr.pb(k); }
#define Print(arr)         for(ll i=0,i<n;i++)cout<<arr[i]<<' ';
#define charcountmap(s)         for(ll i=0,i<s.length();i++)mp[s[i]]++;
#define rep(n)   for(ll i=0;i<n;i++)
#define repe(i,a,b)   for(ll i=a;i<=b;i++)
#define mem1(a)      memset(a,-1,sizeof(a))
#define mem0(a)      memset(a,0,sizeof(a))
#define INF 100000000000000000
#define mod 1000000007
#define esp 10e-7
const int mx=1e5+7;


ll gcd(ll a, ll b){
if (b == 0)
return a;
return gcd(b, a % b);
}
bool isleap(ll year){
    if(year%400==0){
        return true;
    }
    if(year%4==0){
        if(year%100==0){
            return false;
        }
        return true;
    }
    return false;
}
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2){
        cout<<0<<endl;
        return;
    }
    unordered_map<ll,ll> mpl={{1,31},{2,29},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};
    unordered_map<ll,ll> mp={{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};
    ll sy,sm,sd,ey,ed,em;
    sy=(s1[0]-'0')*1000+(s1[1]-'0')*100+(s1[2]-'0')*10+(s1[3]-'0');
    ey=(s2[0]-'0')*1000+(s2[1]-'0')*100+(s2[2]-'0')*10+(s2[3]-'0');
    sm=(s1[5]-'0')*10+(s1[6]-'0');
    em=(s2[5]-'0')*10+(s2[6]-'0');
    ed=(s2[8]-'0')*10+(s2[9]-'0');
    sd=(s1[8]-'0')*10+(s1[9]-'0');
    ll count=0;
    if(ey!=sy){
        if(ey<sy){
            swap(ey,sy);
           swap(em,sm);
           swap(ed,sd);
        }
     // when years are different
    if(isleap(ey)){
        for(int i=1;i<em;i++){
            count+=mpl[i];
        }
        count+=ed;
    }else{
        for(int i=1;i<em;i++){
            count+=mp[i];
        }
        count+=ed;
    }
    if(isleap(sy)){
        for(ll i=sm;i<=12;i++){
            count+=mpl[i];
        }
        count-=sd;
    }else{
        for(ll i=sm;i<=12;i++){
            count+=mp[i];
        }
        count-=sd;
    }
    for(ll i=sy+1;i<ey;i++){
        if(isleap(i)){
            count+=366;
        }else{
            count+=365;
        }
    }
    

    }else{
        // when years are same
        if(em!=sm){
            if(em<sm)
            {swap(em,sm);
            swap(ed,sd);}

            if(isleap(sy)){
                for(ll i=sm;i<em;i++){
                    count+=mpl[i];
                }
                count-=sd;
                count+=ed;
            }else{
                for(ll i=sm;i<em;i++){
                    count+=mp[i];
                }
                count-=sd;
                count+=ed;
            }
        }else {
            if(ed<sd)
            swap(ed,sd);

            count+=ed-sd;
        }
    }



    cout<<count;
    
}

int main(){
    ll t=1;
    while(t--){
        solve();
    }

    return 0;
}