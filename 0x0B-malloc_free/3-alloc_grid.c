#include "main.h"
/**
* alloc_grid - Retunrs a pointer to a bidimensional array of integers
*
* @width: Grid width
* @height: Grid height
*
* Return: Pointer to a bidimensional array or NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
