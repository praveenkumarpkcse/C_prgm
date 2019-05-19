#include<stdio.h>
void main()
{
int a[100];
int n,k,sum=0;
scanf("%d%d",&n,&k);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(int j=0;j<k;j++)
{
    sum=sum+a[j];
    
}
printf("%d",sum);
}
