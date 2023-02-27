/*If variable i is declared as int and i is initialized to 65, 
then if u print I as char value, u will get A (alphabet letter).*/ 
#include<stdio.h>

int main(){
    int i,j;
    for(i=65;i<=90;i++){
        for(j=65;j<=i;j++)
        printf("%c ",j);
        printf("\n");
    }
    return 0;
}
