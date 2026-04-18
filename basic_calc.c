

#include <stdio.h>
#include <stdlib.h>



void interface(int opt)
{
	
	if((opt != 1) && (opt != 2) && (opt != 3) && (opt != 4))
	{
		return;
	}

	int a, b, c;
	system("clear");
	printf("insert first number: ");
	scanf("%d", &a);
	printf("\ninsert second number: ");
	scanf("%d", &b);

	switch(opt)
	{
		case 1:
			c = a + b;
			break;
		
		case 2:
			c = a - b;
			break;
		
		case 3:
			c = a * b;
			break;
		
		case 4:
			c = a / b;
			break;
		
		default:
			break;

	}

	printf("\nResult: %d\n\n", c);
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
