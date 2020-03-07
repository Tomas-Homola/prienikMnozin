#include <stdio.h>

main()
{
	int pole1[] = {1, 2, 3, 4, 5, 6}, pole2[] = {2, 4, 6}, poleP[] = {};
	int i, j, rovne, k;
	
	k = 0;
	
	for (i = 0; i < (sizeof(pole1))/4; i++)
	{
		rovne = 0;
		for (j = 0; j < (sizeof(pole2))/4; j++)
		{
			if (pole1[i] == pole2[j])
			{
				rovne++;
			}						
		}
		if (rovne > 0)
			{
				poleP[k] = pole1[i];
				//printf("%d\n", poleP[k]);
				k++;
			}
	}
	
	for (i = 0; i < k; i++)
	{
		printf("%d\n", poleP[i]);
	}
}