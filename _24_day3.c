//write a c program to print armstrong numbers in the given range.
#include<stdio.h>

int main(){
    int n,r,sum,temp,s,e;
    scanf("%d%d",&s,&e);
    for(n=s;n<=e;n++){
    temp=n;
    sum=0;
    while(temp!=0){
    r=temp%10;
    sum=sum+r*r*r;
    temp=temp/10;
    }
    if(n==sum)
    printf("%d ",n);
    }
    return 0;
}

