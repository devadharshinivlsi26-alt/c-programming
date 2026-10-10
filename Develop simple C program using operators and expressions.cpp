#include<stdio.h>
int main()
{
	int a,b,choices,res;
	printf("=====OPERATORS AND EXPRESSIOMS=====\n");
	printf("Enter the first number:\n");
	scanf("%d",&a);
	printf("Enter the second number:\n");
	scanf("%d",&b);
	printf("\n-----MENU-----");
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Modulus\n");
	printf("Enter your choices:\n");
	scanf("%d",&choices);
	switch(choices)
	{
		case 1:
			{
				res=a+b;
				printf("Result=%d",res);
			}
			break;
		case 2:
			{
				res=a-b;
				printf("Result=%d",res);
			}
			break;
		case 3:
		    {
		    	res=a*b;
				printf("Result=%d",res);
		    }
		    break;
		case 4:
		    {
		    	if(b!=0)
		    	{
		    		res=a/b;
		    		printf("Result=%d",res);
				}
				else
				{
					printf("Division by zero is not possible.\n");
				}
			}
			break;
		case 5:
			{
				if(b!=0)
				{
					res=a%b;
					printf("Result=%d",res);
				}
				else
				{
					printf("Modulus by zero is not possible.\n");
				}
			}
			break;
		default:
			{
				printf("Invalide choice.\n");
			}
	}
}
