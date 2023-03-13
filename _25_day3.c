//write a program to print difference between maximum and minimum.
#include<stdio.h>

int main(){
    int i,small,big,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    big=small=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
        small=a[i];
        else if(a[i]>big)
        big=a[i];
    }
    printf(" %d ",big-small);
    return 0;
}