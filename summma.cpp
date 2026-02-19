/*Вычислить сумму элементов последовательности неизвестной длины.Последовательность целых чисел, оканчивающаяся нулём.*/
#include <stdio.h>
int main(void)
{ 
	int num;
	int sum = 0;
	while (scanf("%d", &num) == 1) {
		if (num == 0) {
			break;
		}
		sum += num;
	}
	printf("%d", sum);
	
	return 0;
}
