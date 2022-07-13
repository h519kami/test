#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%n", &n);
  
  if( (n & 1) == 0 ){	//(n&1)が優先されるようにする
    printf("%d は偶数です\n", n);
  }
  return 0;
}
