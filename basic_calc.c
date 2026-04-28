

#include <stdio.h>
#include <stdlib.h>


float addition(float a, float b)
{
	float c;
	
	c = a + b;

	return c;
}

float substraction(float a, float b)
{
	float c;

	c = a - b;

	return c;
}

float multiplication(float a, float b)
{
	float c;

	c = a * b;

	return c;
}

float division(float a, float b)
{
	float c;

	c = a / b;

	return c;
}


void interface(int opt)
{
	
	if((opt != 1) && (opt != 2) && (opt != 3) && (opt != 4))
	{
		return;
	}

	float a, b, c;
	system("clear");
	printf("insert first number: ");
	scanf("%f", &a);
	printf("\ninsert second number: ");
	scanf("%f", &b);

	switch(opt)
	{
		case 1:
			c = addition( a , b );
			break;
		
		case 2:
			c = substraction( a , b );
			break;
		
		case 3:
			c = multiplication( a , b );
			break;
		
		case 4:
			c = division( a , b );
			break;
		
		default:
			break;

	}

	printf("\nResult: %f\n\n", c);
	printf("Press any key to continue...");
	getchar();
	getchar();

}



int main()
{
	int opt = -1;


	while(opt != 0)
	{
		system("clear");
		printf("######################################################\n");
		printf("############# welcome to my calculator! ##############\n");
		printf("######################################################\n");
		printf("\n");
		printf("1: Addition\n");
		printf("2: Substraction\n");
		printf("3: Multiplication\n");
		printf("4: Division\n");
		printf("\n0: Exit\n\n");
		printf("select an option: ");
		scanf("%d",&opt);
		interface(opt);
	}

	return 0;
}
