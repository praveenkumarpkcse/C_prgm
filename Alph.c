#include<stdio.h>
void main()
{
char ap;
scanf("%c",&ap);
if((ap>='a' && ap<='z')||(ap>='A'&& ap<='Z'))
{
printf("Alphabet");
}
else
{
printf("No");
}
}
