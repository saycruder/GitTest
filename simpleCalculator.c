#include <stdio.h>

int multiply(int x, int y){
	printf("%d * %d = %d", x, y, x * y);	
}

int plus(int x, int y){
	printf("%d + %d = %d\n", x, y, x + y);
}


int main()
{
	int x, y;
	printf("두 수 입력: ");
	scanf("%d %d", &x, &y);	
	plus(x, y);
	multiply(x, y);
	
	return 0;	
}
