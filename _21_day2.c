// Print n1 to n2 odd numbers except 3rd number in the range

#include<stdio.h>

int main(){
    int n1,n2,i,j=1;
    scanf("%d%d",&n1,&n2);
    if(n1%2==0)
    n1++;
    for(i=n1;i<=n2;i+=2)
    {
        if(j!=3)
        printf("%d ",i);
        j++;
    }
    return 0;
}
