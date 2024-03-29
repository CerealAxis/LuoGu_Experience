#include <bits/stdc++.h>

using namespace std;

int main (){
    int n,i,num[500005];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    sort(num,num+n);
    for(i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}