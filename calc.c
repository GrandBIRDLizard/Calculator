#include <stdio.h> 

int add() {
	int x, y;
	printf("Enter for x: ");
	scanf("%d", &x);
	printf("Enter for y: ");
	scanf("%d", &y);
	int sum = (x + y);
	printf("Total: %d\n", sum);
}

int sub() {
	int x, y;
	printf("Enter for x: ");
	scanf("%d", &x);
	printf("Enter for y: ");
	scanf("%d", &y);
	int dif = (x - y);
	printf("Total: %d\n", dif);
}

int mul() {
	int x, y;
	printf("Enter for x: ");
	scanf("%d", &x);
	printf("Enter for y: ");
	scanf("%d", &y); 
	int prod = (x * y);
	printf("Total: %d\n", prod);
}

float div() {
	float x, y; 
	printf("Enter for x: ");
	scanf("%d", &x);
	printf("Enter for y: "); 
	scanf("%d", &y);
	float quot = (x / y);
	if (y != 0) {
		printf("Total: %f\n", quot);
	} else {
		printf("Can not divide by zero!\n");
	}
}

int main(void)
{	
	int choice;

	printf("Calculator:\n\nPress the number that corresponds to the operation that you wish to compute\n1.(Addition)\n2.(Subtraction)\n3.(Multiplication)\n4.(Division)\n");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1:
				add();
				break; 
		case 2:
				sub();
				break;
		case 3: 
				mul();
				break;
		case 4: 
				div();
				break;
		default:
				printf("This is a calculator");
	}

	return 0;
}
