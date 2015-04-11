#include <stdio.h>
int main()
{
	char array[10];
	int c=&array;
	printf("%d\n",c);
	printf("%d\n",&array[1]);
}