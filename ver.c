#include "head.h"
void	ver(char **st)
{
	int i;
	int n;
	int nrl;
	int j;

	i = 1;
	j = 0;
	nrl = 0;
	if (st[j])
		n = atoi(st[j]);
	while (st[1][j++] != '\0')
		nrl++;
	while (i < n - 1)
	{
		if (st[i][nrl] != st[i+1][nrl])
		putstr("map error\n");
		i++;
	}
}
