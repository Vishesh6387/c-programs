#include <stdio.h>
int main(){
    float bb,dis,total_bill;
    printf("Enter the basic bill amount ");
    scanf("%f",&bb);
    dis=bb/100*7.5;
    total_bill=bb-dis;
    printf("The total bill is %f",total_bill);
    return 0;
}
