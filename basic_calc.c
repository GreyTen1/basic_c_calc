

#include <stdio.h>
#include <stdlib.h>


void addition()
{

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
	}

	return 0;
}
