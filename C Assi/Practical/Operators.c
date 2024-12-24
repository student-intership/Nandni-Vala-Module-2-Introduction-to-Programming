#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("Enter No N1 : ");
	scanf("%d",&n1);
	
	printf("\nEnter No N2 : ");
	scanf("%d",&n2);
	
	//Aruthmatic operators 
	printf("Addition : %d\n",n1+n2); //Addition 
	printf("Substraction : %d\n",n1-n2);// Substraction
	printf("Multiplication : %d\n",n1*n2);//Multiplication
	printf("Division : %d\n",n1/n2);//Division
	printf("Moduls : %d\n",n1%n2);//Moduls
	
	//Relational Operators
	printf("Greater Than : %d\n",n1>n2);//Greater Than
	printf("Less Than : %d\n",n1<n2);//Less Than
	printf("Equal To : %d\n",n1==n2);//Equal To
	printf("Grater Than Equal To : %d\n",n1>=n2);//Greater Than Equal To
	printf("Less Than Equal To : %d\n",n1<=n2);//Less Than Equal To
	printf("Not Equal To : %d\n",n1!=n2);//Not Equal To
	
    //Logical Operators
    printf("Logical AND : %d\n",n1&&n2);//Logical AND
    printf("Logical OR : %d\n",n1||n2);//Logical Or
}
