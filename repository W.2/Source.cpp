#include<stdio.h>

int main() {
	int num1, num2;
	num2 = 2;
	printf("Enter Number : ");
	scanf_s("%d", &num1);
	printf("Factoring Result : ");
	while (num1 != 1) {
		while (num1 % num2 == 0) {
			if (num1 / num2 > 1) {
				printf("%d ", num2);
				num1 = num1 / num2;
				printf("x ");
			}
			else {
				printf("%d", num2);
				num1 = num1 / num2;
			}
		}
		num2 = num2 + 1;
	}
	return 0;
}