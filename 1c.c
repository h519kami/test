#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%n", &n);
  
  if( (int)(n & 1) == 0 ){	//(n&1)をintに変換する
    printf("%d は偶数です\n", n);
  }
  return 0;
}
