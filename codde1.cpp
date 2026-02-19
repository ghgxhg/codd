/* Дано трехзначное число. В нем зачеркнули первую справа цифру и
приписали ее слева. Вывести полученное число.*/
#include <stdio.h>
int main() {
	int a, b, c, d;
	printf("vedite chisla: ");
	scanf("%d", &a); 
	b = a % 10;      
	c = a / 10;      
	d = b * 100 + c; 
	printf("res: %d\n", d);
	return 0;
}
