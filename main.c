#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <time.h> 


int main()
{
	int arr[100];
	int brr[100];
	int crr[200];
	int n, m, was, i, j,t; 
	int a1 = 0,
		b1 = 0,
		c1 = 0;
	printf("vvedite N: ");
	scanf("%i", &n);
	printf("vvedite M: ");
	scanf("%i", &m);
	printf("vvedite pervy masiv iz N elementov : ");
	 i = 0;
	 j = 0;
	for (i = 0; i < n; i++)
		scanf("%i", &arr[i]);
	printf("vvedite vtoroi massiv iz M elementov: ");
	for (i = 0; i < m; i++)
		scanf("%i", &brr[i]);

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (brr[i] < brr[j])
			{
			    t = brr[i];
				brr[i] = brr[j];
				brr[j] = t;
			}
		}
	}
	   
	while (a1 < n || b1 < m)
	{
		if (arr[a1] < brr[b1] && a1 < n)
		{
		    was = 0;
			for (i = 0; i < c1; i++)
			{
				if (arr[a1] == crr[i])
				{
					was = 1;
					a1++;
					break;
				}
			}
			if (was == 0)
			{
				crr[c1] = arr[a1];
				c1++;
				a1++;
			}
		}
		else if (b1 < m)
		{
			
			for (i = 0; i < c1; i++)
			{
				if (brr[b1] == crr[i])
				{
					was = 1;
					b1++;
					break;
				}
			}
			if (was == 0)
			{
				crr[c1] = brr[b1];
				c1++;
				b1++;
			}
		}
	}
	printf("Massiv posle sliyaniya: \n");
	for (i = 0; i < c1; i++)
		printf("%i ", crr[i]);
} 
