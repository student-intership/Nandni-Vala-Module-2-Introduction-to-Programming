#include<stdio.h>
main()
{
	int Month;
	
	printf("Enter Month No 1 To 12 : ");
	scanf("%d",&Month);
	
	switch(Month)
	{
		case 1 :
			printf("January\n");
			break;
		case 2 :
			printf("FebRuary\n");
			break;
		case 3 :
			printf("March\n");
			break;
		case 4 :
			printf("April\n");
			break;
		case 5 :
			printf("May\n");
			break;
		case 6 :
			printf("June\n");
			break;
		case 7 :
			printf("July\n");
			break;
		case 8 :
			printf("Augest\n");
			break;
		case 9 :
			printf("September\n");
			break;
		case 10 :
			printf("Octomber\n");
			break;
		case 11 :
			printf("November\n");
			break;
		case 12 :
			printf("December\n");
			break;
		case 13 :
			printf("Invalid\n");
			break;
	}
}
