#include<stdio.h>

int main() {
	int sq;
	scanf_s("%d", &sq);
	for (int i = 0;i < sq;i++) {
		printf("*");
	}
	for (int i = 0;i < sq;i++) {
		printf("\n*");
		for (int i = 2;i < sq;i++) {
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
	for (int i = 0;i < sq;i++) {
		printf("*");
	}
	return 0;
}