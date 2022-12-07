#include <stdio.h>

int main() {
	int a=0, b=0;
	scanf("%d", &a);
	if (a < 0) {
		b = ~(a - 1);
	}
	else {
		b = ~a + 1;
	}
	printf("%d",b);
	return 0;
}