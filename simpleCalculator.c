#include <stdio.h>

int divide(int x, int y){
	printf("%d / %d = %d", x, y, x / y);
}

int multiply(int x, int y){
	printf("%d * %d = %d", x, y, x * y);
}

int minus(int x, int y){
	printf("%d - %d = %d\n", x, y, x - y);
}


int plus(int x, int y){
	printf("%d + %d = %d\n", x, y, x + y);
}


int main()
{
	int x, y;
	printf("µÎ ¼ö ÀÔ·Â: ");
	scanf("%d %d", &x, &y);	
	plus(x, y);
	minus(x, y);
	divide(x, y);
	multiply(x, y);
	
	return 0;	
}
