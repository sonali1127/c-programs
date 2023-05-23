//find whether the given number is strong number or not.
#include<stdio.h>

int main()
{
    int fact=1,sum=0,rem,temp,num,i;
    scanf("%d",&num);
    temp=num;
    while(num!=0){
    rem=num%10;
    fact=1;
    for(i=1;i<=rem;i++)
    fact*=i;
    sum+=fact;
    num/=10;
    }
    if(temp==sum)
    printf("strong number");
    else
    printf("not a strong number");
    return 0;
}