

#include <stdio.h>
#include <stdlib.h>


void addition()
{
	int a, b, c;
	system("clear");
	printf("insert first number: ");
	scanf("%d", &a);
	printf("\ninsert second number: ");
	scanf("%d", &b);

	c = a + b;

	printf("\nResult: %d\n\n", c);
	printf("Press any key to continue...");
	getchar();
	return;
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

		if(opt == 1)
		{
			addition();
			getchar();
		}
	}

	return 0;
}
