#include<stdio.h>
void main()
{
int no1,no2,no3;
scanf("%d%d%d",&no1,&no2,&no3);

if(no1>no2 &&no1>no3)
{
    printf("%d",no1);
}
else if(no2>no3)
{
    printf("%d",no2);
}
else
{
    printf("%d",no3);
}
}
