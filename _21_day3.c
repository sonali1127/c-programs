/* Evaluate the following expression
    1+1/2+1/3+1/4…+1/n */
#include<stdio.h>

int main(){
    int n;
    float i,sum=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    sum+=1/i;
    }
    printf("%.4f",sum);
    return 0;
}
