#include <stdio.h>

int main(void) {
	float x, y;
	char operator;
	
	printf("Enter an operator (+, -, *, /):\n");
	scanf("%c", &operator);
	printf("Enter for X:\n");
	scanf(" %f", &x);
	printf("Enter for Y:\n");
	scanf(" %f", &y);
	
	switch(operator) {
		case '+':
			printf("Result: %.2f\n", (x + y));
			break;
		case '-':
			printf("Result: %.2f\n", (x - y));
			break;
		case '*': 
			printf("Result: %.2f\n", (x * y));
			break;
		case '/':
			if (y != 0) 
			{
				printf("Result: %.2f\n", (x / y));
			}
			else 
				printf("Can not divide by zero!\n");
				break;
		default: 
			printf("We do math here\n");
	}
}


