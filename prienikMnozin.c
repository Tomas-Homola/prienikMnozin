#include <stdio.h>

main()
{
	int pole1[] = {1, 2, 3, 4, 5, 6}, pole2[] = {2, 2, 6};
	int i, j, k;
	
	k = 0;
	
	for (i = 0; i < (sizeof(pole1))/4; i++)
	{
		for (j = 0; j < (sizeof(pole2))/4; j++)
		{
			if (pole1[i] == pole2[j])
			{
				k++;
			}
		}
	}
	
	int poleP[k];
	k = 0;
	
	for (i = 0; i < (sizeof(pole1))/4; i++)
	{
		for (j = 0; j < (sizeof(pole2))/4; j++)
		{
			if (pole1[i] == pole2[j])
			{
				poleP[k] = pole1[i];
				k++;
			}
		}
	}
	
	printf("pole1: %d\n", sizeof(pole1)/4);
	printf("pole2: %d\n", sizeof(pole2)/4);
	printf("poleP: %d\n", sizeof(poleP)/4);
	
	for (i = 0; i < (sizeof(poleP)/4); i++)
	{
		printf("%d\n", poleP[i]);
	}
}