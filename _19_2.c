//print difference between oddsum and evensum
#include<stdio.h>

int main(){
    int n,i=1,os=0,es=0;
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0)
        es+=i;
        else
        os+=i;
        i++;
    }
    printf("oddsum=%d\nevensum=%d\n",os,es);
    printf("difference=%d ",os-es);
    return 0;
}
