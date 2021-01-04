#include <cstdio>
#include <iostream>
#include <algorithm>
#include <algorithm>

void check(int* arr,const int num,const int target)
{
  int start = 0;
  int end = num-1;
  int mid;

  while(start <= end)
  {
    mid = (start+end)/2;
    if(arr[mid] == target)
    {
      printf("1");
      return;
    }
    else
    {
      if(arr[mid] > target)
      {
        end = mid-1;
      }
      else
      {
        start = mid+1;
      }
    }
  }
  printf("0");
  return;
}

int main()
{
  int m,n,temp;
  scanf("%d",&n);
  int *card_list = new int[n];

  for(int i =0;i<n;i++)
  {
    scanf("%d",&temp);
    card_list[i] = temp;
  }
  std::sort(card_list,card_list+n);

  scanf("%d",&m);

  for(int i =0;i<m;i++)
  {
    scanf("%d",&temp);
    check(card_list,n,temp);
    if(i != m-1)
      printf(" ");
    }

  delete []card_list;
  return 0;

}
