//read week number and print its day.
#include<stdio.h>

int main(){
    int wk_num;
    scanf("%d",&wk_num);
if(wk_num==1)
printf("Monday");   
else if(wk_num==2)
printf("Tuesday");
else if(wk_num==3)
printf("Wednesday");
else if(wk_num==4)
printf("Thursday");
else if(wk_num==5)
printf("Friday");
else if(wk_num==6)
printf("Saturday");
else if(wk_num==7)
printf("Sunday");
else 
printf(" There is no such weeknumber");
    return 0;
}
