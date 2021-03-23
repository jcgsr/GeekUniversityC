// 20.03.2021

 #include <stdio.h>

int main (void)
{
  puts("\t\t**Matriz 4x4**");
  int num[4][4];

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      num[0][0] = 2;
      num[i][j] += num[0][0] + 2;
    }
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d - %d\n", num[i][j]);
    }    
  }
  return 0;  
}
