#include<stdio.h>

int main() {
	int num1, num2, a;
	printf("Enter first number : ");
	scanf_s("%d", &num1);
	printf("Entert second number : ");
	scanf_s("%d", &num2);
	a = num2;
	while (num1 % num2 != 0 || a % num2 != 0) {
		num2 = num2 - 1;
	}
	printf("Greatest common divisor = %d", num2);
	return 0;
}