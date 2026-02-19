#include <stdio.h>
int main() {
	int n;
	int i = 0;     
	double a, b;
	double c = 1.0; 
	printf("VVedite kolichestvo chisel N: ");
	scanf("%d", &n);
	printf("vvedite nabor is %d poljitelnie chisel:\n", n);
	while (i < n) {
		scanf("%lf", &a);
		b = a - (int)a;
		printf("drobnay chast: %f\n", b);
	
		c = c * b;
		
		i = i + 1;
	}
	printf("proisvedenie vsex drobnix chastey: %f\n", c);
	return 0;
}
