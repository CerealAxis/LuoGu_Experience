#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,i;
    cin>>n;
    for (i=1;i<=n;i++){
        cout<<max(2*(n-i),2*(i-1))<<endl;
    }
    return 0;
}