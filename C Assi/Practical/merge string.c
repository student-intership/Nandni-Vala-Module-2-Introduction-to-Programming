#include<stdio.h>
main()
{
	char a[10];
	char b[10];
	
	printf("Enter String a : ");
	gets(a);
	
	printf("Enter String b : ");
	gets(b);
	
	printf("Merge a String : %s",strcat(a,b));
}
