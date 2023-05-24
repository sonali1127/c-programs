//merge two arrays and store it into third array
#include<stdio.h>

int main(){
    int n1,n2,i,j;
    scanf("%d %d",&n1,&n2);
    int arr1[n1];int arr2[n2],mer[n1+n2];
    for(i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
    mer[i]=arr1[i];
    }
    j=i;
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
        mer[j]=arr2[i];
        j++;
    }
    for(i=0;i<j;i++)
    printf("%d ",mer[i]);
    return 0;
}
