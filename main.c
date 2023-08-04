#include "calc.h"
int main(int argc, char **argv)
{
	int a, b;
	char op;

	if (argc < 4)
	{
		printf("Please enter all necessary inputs\n");
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = argv[2][0];

	switch (op)
	{
		case '+':
			printf("%d\n", a + b);
		case '-':
			printf("%d\n", a - b);
		case '*':
			printf("%d\n", a * b);
		case '/':
			if (a == 0 || b == 0)
				printf("Error: Cannot divide by 0\n");
			else
				printf("%d\n", a / b);
	}

	return (0);
}
