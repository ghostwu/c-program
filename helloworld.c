#include <stdio.h>

int main(  void ) {
	printf( "welcome to study c program\n" );
	int a, b;
	printf( "pls input a and b\n" );
	scanf( "%d %d", &a, &b );
	int sum = a + b;
	printf( "sum of a and b = %d\n", sum );
	return 0;
}
