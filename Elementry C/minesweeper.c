#include<stdio.h>
int
main ()
{

  char cell[50][50];
  int i, j, m, n, x, mines[50][2];


  for (i = 0; i < 50; i++)
    for (j = 0; j < 50; j++)
      cell[i][j] = 0;


  printf ("Enter the matrix value(less than 50) m n:");
  scanf ("%d %d", &m, &n);
  printf ("Enter no. of mines:");
  scanf ("%d", &x);
  printf ("enter the co-ordinates of mines:");


  for (i = 0; i < x; i++)
    {
      scanf ("%d  %d", &mines[i][0], &mines[i][1]);
      cell[mines[i][0]][mines[i][1]] = 'B';
    }

 printf("\n-------------------\n");
  /*logic for minesweeper game, where the numbers are placed and 
     appended wrt mines coordinate. */

  i = 0;
  j = 0;
  for (i = 0; i < x; i++)
    {
      if (mines[i][0] - 1 >= 0 && mines[i][1] - 1 >= 0 && cell[mines[i][0] - 1][mines[i][1] - 1] != 'B')
			cell[mines[i][0] - 1][mines[i][1] - 1] = cell[mines[i][0] - 1][mines[i][1] - 1] + 1;

      if (mines[i][0] - 1 >= 0 && mines[i][1] + 1 < n && cell[mines[i][0] - 1][mines[i][1] + 1] != 'B')
			cell[mines[i][0] - 1][mines[i][1] + 1] = cell[mines[i][0] - 1][mines[i][1] + 1] + 1;

      if (mines[i][0] + 1 < m && mines[i][1] - 1 >= 0 && cell[mines[i][0] + 1][mines[i][1] - 1] != 'B')
			cell[mines[i][0] + 1][mines[i][1] - 1] = cell[mines[i][0] + 1][mines[i][1] - 1] + 1;

      if (mines[i][0] + 1 < m && mines[i][1] + 1 < n && cell[mines[i][0] + 1][mines[i][1] + 1] != 'B')
			cell[mines[i][0] + 1][mines[i][1] + 1] = cell[mines[i][0] + 1][mines[i][1] + 1] + 1;

      if (mines[i][0] - 1 >= 0 && cell[mines[i][0] - 1][mines[i][1]] != 'B')
			cell[mines[i][0] - 1][mines[i][1]] = cell[mines[i][0] - 1][mines[i][1]] + 1;

      if (mines[i][0] + 1 < m && cell[mines[i][0] + 1][mines[i][1]] != 'B')
			cell[mines[i][0] + 1][mines[i][1]] = cell[mines[i][0] + 1][mines[i][1]] + 1;

      if (mines[i][1] - 1 >= 0 && cell[mines[i][0]][mines[i][1] - 1] != 'B')
			cell[mines[i][0]][mines[i][1] - 1] = cell[mines[i][0]][mines[i][1] - 1] + 1;

      if (mines[i][1] + 1 >= 0 && cell[mines[i][0]][mines[i][1] + 1] != 'B')
			cell[mines[i][0]][mines[i][1] + 1] = cell[mines[i][0]][mines[i][1] + 1] + 1;
    }

  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	{
		if(cell[i][j]!='B')
	  		printf ("%d   ", cell[i][j]);
	  	else{
	  		printf("%c   ", cell[i][j]);	
		}
	}
      printf ("\n");
    }

  return 0;
}
