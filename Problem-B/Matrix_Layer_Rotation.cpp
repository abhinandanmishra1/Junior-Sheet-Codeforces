#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// Complete the matrixRotation function below.
void matrixRotation(ll ** matrix,ll m,ll n, ll r) {
    
    ll rot=n<m?n/2:m/2;
    ll k=0;
    while(k<rot){
            r=r%(2*m+2*n-8*k);
        for(ll time=0;time<r;time++){
            ll save=matrix[k][k];
            for(ll j=k;j<n-k-1;j++){
                matrix[k][j]=matrix[k][j+1];  
                
            }
            
            for(ll i=k;i<m-k-1;i++){
                matrix[i][n-k-1]=matrix[i+1][n-k-1];
            }
            for(ll j=n-k-1;j>k;j--){
                matrix[m-k-1][j]=matrix[m-k-1][j-1];
            }
            for(ll i=m-k-1;i>k;i--){
                matrix[i][k]=matrix[i-1][k];
            }
            matrix[k+1][k]=save;
            
        }
               
        k++;
        
    }
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
 ll m,n,r;
 cin>>m>>n>>r;
 ll **matrix=new ll*[m];
 for(ll i=0;i<m;i++){
     matrix[i]=new ll[n];
     for(ll j=0;j<n;j++){
         cin>>matrix[i][j];
     }
 }
 matrixRotation(matrix,m,n,r);
 return 0;
    for(ll j=0;j<m;j++){
         delete[] matrix[j];
     }
     delete[] matrix;
}
   