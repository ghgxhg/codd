/*Написать программу, которая читает со входа последовательность чисел фиксированной длины N */
#include <stdio.h>
int main() {
	int n, i = 0;
	int a; 
	if (scanf("%d", &n) != 1) return 0;
	while (i < n) {
		scanf("%d", &a);
		printf("%d ", a);
		i = i + 1; 
	}
	printf("\n");
	return 0;
}
