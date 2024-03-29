#include <bits/stdc++.h>

using namespace std;

int main (){
    int a,result=0,i;
    int b[10005];
    scanf("%d",&a);
    for (i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for (i=0;i<a-1;i++){
        for (int j=i+1;j<a;j++){
            if (b[i]>b[j]){
                result++;
            }
        }
    }
    printf("%d",result);
    return 0;
}