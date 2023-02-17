//print all those numbers from 1 upto n which are divisible by k and also print evensum and oddsum 
#include<stdio.h>

int main(){
    int i=1,n,k,odd=0,even=0;
    printf("enter the number:");
    scanf("%d%d",&n,&k);
    while(k*i<=n)
    {
        printf("%d ",k*i);
        if(k*i%2==0)
        even+=k*i;
        else
        odd+=k*i;
        i++;
    }
    printf("\nodd factors sum=%d\neven factors sum=%d",odd,even);
    return 0;
}
