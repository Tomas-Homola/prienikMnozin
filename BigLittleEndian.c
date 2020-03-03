#include <stdio.h>

main()
{
	unsigned char *a;
	short int *p;
	short int i;
	
	p = &i;
	i = 256;
	a = (unsigned char *)p;
	
	printf("%d\n", *(a+1));
	
}