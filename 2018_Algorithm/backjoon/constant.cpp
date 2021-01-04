#include <cstdio>

int main()
{
  int n1,n2;
  int max;

  scanf("%d %d",&n1,&n2);
  n1 = n1%10*100+(n1%100/10)*10+n1/100;
  n2 = n2%10*100+(n2%100/10)*10+n2/100;

  if(n1>n2) max = n1;
  else max = n2;

  printf("%d\n",max);

  return 0;

}
