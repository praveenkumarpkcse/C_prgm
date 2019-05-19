#include<stdio.h>
void main()
{
int no;
  int count = 0;
  scanf("%d",&no);
  while(no!=0)
  {
    no = no/10;
    count ++;
  }
  
  printf("%d",count);
}
