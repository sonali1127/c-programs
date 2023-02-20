//Find whether the given number is prime number or not.
#include<stdio.h>

int main(){
    int n,i=2,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<n)
    {
    if(n%i==0){
    count++;
    break;
    }
    i++;
    }    
    if(count==0)
    printf("PRIME");
    else
    printf("NOT PRIME");
    return 0;
}
