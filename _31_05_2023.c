// binary search operation using user defined function.
#include<stdio.h>
void binsearch(int[],int,int);
int main(){
    int arr[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};   
	int len=sizeof(arr)/sizeof(int);
	int n;
	scanf("%d",&n); 
        binsearch(arr,len,n);
    return 0;
}
void binsearch(int arr[],int len,int n){
    int sind,eind,mid;
	sind=0;
	eind=len-1;
	if(n>arr[len-1]||n<arr[0])
    printf("Key not found");
	while(sind<=eind)
	{
		mid=(sind+eind)/2; 
		if(arr[mid]==n)
		{
			printf("found at location:%d",mid);
			break;
		}
		if(arr[mid]>n)
			eind=mid-1;
		else
			sind=mid+1;
	}
	
}
