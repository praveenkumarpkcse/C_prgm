#include<stdio.h>
void main()
{
char letter;
scanf("%c",&letter);
if(letter=='a' || letter=='e' || letter=='i' ||letter=='o' || letter=='u' || letter=='A' ||letter=='E' ||letter=='I' || letter=='O' ||letter=='U')
        {
           printf ("Vowel");
        }
        else if((letter>='a'&& letter<='z') || (letter>='A'&& letter<='Z'))
        {
            printf("Consonant");
        }
        else 
        {
        printf("invalid");
        }
}
