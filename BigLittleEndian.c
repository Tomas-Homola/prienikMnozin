#include <stdio.h>

main()
{
	unsigned char *a;
	short int i;
	
	a = &i;
	i = 256;
	
	printf("%d\n", *a);
	printf("%d\n", *(a+1));
}