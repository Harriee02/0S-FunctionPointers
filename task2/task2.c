#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int (*arr[])(int, int) = {add, subtract, multiply, divide};

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int inputt;
	printf("%s\n", "Operand ‘a’ : 6 | Operand ‘b’ : 3");
	printf("%s\n", "Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
	scanf("%d", &inputt);
	int a;
	int b;
	a = 6;
	b = 3;
	while (inputt != 4){
		printf("%d\n",(*arr[inputt])(a, b));
		printf("%s\n", "Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
		scanf("%d", &inputt);
	}
	exit(0);
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'b' from 'a'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }

