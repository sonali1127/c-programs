//Find Lowest among n numbers
#include<stdio.h>

int main(){
    int i=1,n,ele,first;
    printf("enter the no of terms:");
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&ele);
        if(i==1)
        first=ele;
        if(ele<first)
        first=ele;
        i++;
    }
    printf("lowest is %d",first);
    return 0;
}
