#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	/* code */
	printf("%s is at %p\n", argv[1], getenv(argv[1]));
	return 0;
}