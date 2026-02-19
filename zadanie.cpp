/*Minmax1*. Дано целое число N и набор из N чисел. Найти минимальный и
максимальный из элементов данного набора и вывести их в указанном
порядке.*/
#include <stdio.h>
int main() {
	int n, i = 1;
	int a, b, c; 
		if (scanf("%d", &n) != 1 || n <= 0) return 0;
	scanf("%d", &a);
	b = c = a; 
		while (i < n) {
		i += 1;
		scanf("%d", &a);
		if (a > b) b = a;
		if (a < c) c = a;
	}
	printf("%d %d\n", c, b);
	return 0;
}
