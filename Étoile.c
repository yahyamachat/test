#include <stdio.h>
int main()
{

char etoile[]= "*";
char a[] = "*";
int i;
printf("%s\n", a);

for (i = 0; i < 7; i++)
{
 strcat(a, etoile);
 printf("%s\n", a);
 
}

}