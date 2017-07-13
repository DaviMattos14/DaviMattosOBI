#include <stdio.h>
#include <string.h>
int main(void)
{
	int x1, y1, x2, y2, i, j, count = 0;
	int xadrez[8][8];

	for (i = 0; i < 8; i++)
		for(j = 0; j < 8; j++)
		{
			xadrez[i][j] = 0;
			count++;
		}
	printf("%d\n", count);
	do{scanf("%d %d %d %d", &x1, &y1, &x2, &y2);}
	while(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0);


	return 0;
}