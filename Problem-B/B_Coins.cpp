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
    unordered_map<char,ll> mp;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string ans="";
    if(s1[1]=='>')
    mp[s1[0]]++;
    else
    mp[s1[2]]++;

    if(s2[1]=='>')
    mp[s2[0]]++;
    else
    mp[s2[2]]++;

    if(s3[1]=='>')
    mp[s3[0]]++;
    else
    mp[s3[2]]++;
    
    if(mp['A']==0 && mp['B']!=0 && mp['C']!=0){
        ans=ans+'A';
    }else if(mp['B']==0 && mp['A']!=0 && mp['C']!=0){
        ans=ans+'B';
    }else if(mp['C']==0 && mp['B']!=0 && mp['A']!=0){
        ans=ans+'C';
    }else{
        cout<<"Impossible";
        return 0;
    }
    if(mp['A']==1 && mp['B']!=1 && mp['C']!=1){
        ans=ans+'A';
    }else if(mp['B']==1 && mp['A']!=
    1 && mp['C']!=1){
        ans=ans+'B';
    }else if(mp['C']==1 && mp['B']!=1 && mp['A']!=1){
        ans=ans+'C';
    }else{
        cout<<"Impossible";
        return 0;
    }
    if(mp['A']==2 && mp['B']!=2 && mp['C']!=2){
        ans=ans+'A';
    }else if(mp['B']==2 && mp['A']!=2 && mp['C']!=2){
        ans=ans+'B';
    }else if(mp['C']==2 && mp['B']!=2 && mp['A']!=2){
        ans=ans+'C';
    }else{
        cout<<"Impossible";
        return 0;
    }
    cout<<ans;
    


    
    
    return 0;

}