#include <stdio.h>
int xadrez[8][8];
int resposta[]
int olharMatriz(int x1, int y1, int x2, int y2)
{
	for (i = 0; i < 8; i++)
	for(j = 0; j < 8; j++){xadrez[i][j] = 0;}
	while(x1 == 8 || y1 == 8)
	{
		x1++;
		y1++;
		
	}
}

int main(void) 
{
	int x1, y1, x2, y2, i, j;
	int xadrez[8][8];
	do{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2); 
		olharMatriz(x1, y1, x2, y2);
	}
	while(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0);
	return 0;
}
