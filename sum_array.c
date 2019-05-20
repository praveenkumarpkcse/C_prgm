#include<stdio.h>
void main()
{
int a[100];
int num,k,sum=0;
scanf("%d%d",&num,&k);
for(int i=0;i<num;i++)
{
scanf("%d",&a[i]);
}

for(int j=0;j<k;j++)
{
    sum=sum+a[j];
    
}
printf("%d",sum);
}
