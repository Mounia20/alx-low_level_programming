#include "main.h"
#include <string.h>
char *leet(char *)
{
int a = 0, b, l = 5;
char tr[5] = {'A', 'E', 'O', 'T', 'L'}
char trw[5] = {'4', '3', '7', '0', '1'};
while (x[a])
{
	b = 0;
	while (b < l)
	{
		if (x[a] == tr[b] || x[a] - 32 == tr[b])
			x[a] = trw[b];
		b++;
	}
}
