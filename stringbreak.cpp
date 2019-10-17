#include <stdio.h>
#include <stdlib.h>
int main()
{
 char a[20],x;
 int i,j;
 printf("\n Enter a string: ");
 gets(a);
 printf("\n Enter letter to break line from: ");
 scanf("%c",&x);
 printf("\n");
 for(i=0;a[i]!='\0';i++)
 {
 	if (a[i]==x)
 	{
 		printf("\n");
	}
	else
	{
		printf("%c",a[i]);
	}
 }
 return 0;
}
  

