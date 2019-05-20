#include<stdio.h>
void main()
{
int no,no2,no3;
scanf("%d%d%d",&no,&no2,&no3);

if(no>no2 &&no>no3)
{
    printf("%d",no);
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
