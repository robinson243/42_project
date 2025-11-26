#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	sum(int *tab, int size)
{
	int	n;
	int	res;

	n = size - 1;
	res = 0;
	if (size == 0)
		return (0);
	return (tab[size - 1] + sum(tab, size - 1));
}

void	print_array(int *tab, int size)
{
	int	i = 0;
	if (size == 0)
		return ;
	printf("%d", tab[0]);
	print_array(tab + 1, size - 1);
}

int	main(void)
{
	int	numb[] = {1, 2, 3, 4, 5};
	char *tab = "bonjour";
	// rec_reverse(tab);
	print_array(numb, 5);
	// printf("%s", numb);
}