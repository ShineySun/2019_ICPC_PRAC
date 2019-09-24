// 1037 번 문제
// get prime
// 2018 FOSCAR Algorithm
// 2018 . 11 .18


#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int numOfPrime,result;
  cin >> numOfPrime;

  int *list = new int[numOfPrime];

  for(int i =0;i<numOfPrime;i++)
  {
    scanf("%d",&list[i]);
  }
  sort(list,list+numOfPrime);

  if(numOfPrime%2 == 0)
  {
    result = list[0]*list[numOfPrime-1];
  }
  else
  {
    result = list[numOfPrime/2]*list[numOfPrime/2];
  }
  printf("%d\n",result);
  delete []list;

  return 0;
}
