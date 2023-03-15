# include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: base
 *@height: side
 *Return: a pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **ans;
	int i, j;

	ans = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		ans[i] = malloc(sizeof(int) * width);
		if (ans[i] == NULL)
			return (NULL);
	}

	if (width <= 0 || height <= 0 || ans == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ans[i][j] = 0;
	return (ans);
}
