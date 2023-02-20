//Write a c program find 2nd highest among n numbers
#include<stdio.h>

int main(){
    int i=1,n,ele,sec,first;
    printf("enter the no of terms:");
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&ele);
        if(i==1)
        first=ele;
        if(i==2)
        sec=ele;
        if(ele>first)
        {
            sec=first;
            first=ele;
        }
        if(ele<first && ele>sec)
        sec=ele;
        i++;
    }
    printf("second highest is %d",sec);
    return 0;
}
