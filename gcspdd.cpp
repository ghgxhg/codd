/*Array1. Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел:1, 3, 5, . . . .*/
#include <stdio.h>
int main() {
	int n, i = 0;
	int b; 
	scanf("%d", &n);
	if (n <= 0) return 0;
		while (i < n) {
		b = 2 * i + 1; 
		printf("%d ", b);
		i = i + 1;
	}
	printf("\n");
	return 0;
}
