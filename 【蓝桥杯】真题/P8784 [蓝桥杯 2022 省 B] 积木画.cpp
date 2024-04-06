#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7,N=1e7;

int main (){
    int i,n;
    int f[N]={0,1,2,5};
    cin>>n;
    if (n<=4){
        cout<<f[n]<<endl;
    }else{
        for (i=4;i<=n;i++){
            f[i]=(2*f[i-1]%mod+f[i-3]%mod)%mod;
        }
        cout<<f[n]<<endl;
    }
    return 0;
}