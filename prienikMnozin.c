#include <stdio.h>

void intersection (int poleA[], int poleB[], int n, int m, int *p)
{
	int i, j, rovne, k, l, isThere;
	
	k = 0;
	isThere = 0;
	
	for (i = 0; i < n; i++)
	{
		rovne = 0;
		for (j = 0; j < m; j++)
		{
			if (poleA[i] == poleB[j])
			{
				rovne++;
			}						
		}
		if (rovne > 0)
			{
				for (l = 0; l < k; l++)
				{
					if (poleA[i] == p[l])
					{
						isThere = 1;
						break;
					}
				}
				if (isThere == 0)
				{
					p[k] = poleA[i];
					k++;
					//printf("%d\n", poleP[k]);
				}
			}
	}
	
	for (i = 0; i < k; i++)
	{
		printf("%d\n", p[i]);
	}
}

main()
{
	int pole1[] = {1, 2, 4, 5, 10, 19, 19}, pole2[] = {2, 4, 5, 5, 10, 19}, poleP[] = {};
	/*int i, j, rovne, k, l, isThere;									//i, j, k, l pre for loops
	
	k = 0;
	isThere = 0;
	
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
				for (l = 0; l < k; l++)
				{
					if (pole1[i] == poleP[l])
					{
						isThere = 1;
						break;
					}
				}
				if (isThere == 0)
				{
					poleP[k] = pole1[i];
					k++;
					//printf("%d\n", poleP[k]);
				}
			}
	}*/
	
	intersection(pole1, pole2, sizeof(pole1)/sizeof(pole1[0]), sizeof(pole2)/sizeof(pole2[0]), poleP);
	
	/*for (i = 0; i < k; i++)
	{
		printf("%d\n", poleP[i]);
	}*/
}