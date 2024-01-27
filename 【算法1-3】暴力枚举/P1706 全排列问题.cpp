#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        a[i]=i+1;
    }
    for (i=0;i<n;i++){
        printf("%5d",a[i]);
    }
    printf("\n");
    while (next_permutation(a,a+n)){
        for (i=0;i<n;i++){
            printf("%5d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
