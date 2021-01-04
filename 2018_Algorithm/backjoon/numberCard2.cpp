#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int check_number(int *arr,int target, int num)
{
  int start = 0;
  int end = num-1;
  int count =0;
  int mid;
  while(start <= end)
  {
    mid = (start+end)/2;
    if(arr[mid]==target)
    {
      count++;
      int mid_right = mid+1;
      int mid_left = mid-1;
      while(1)
      {
        if(arr[mid_left]!=target && arr[mid_right]!=target)
          break;
        if(arr[mid_right]==target)
        {
          mid_right++;
          count++;
        }
        if(arr[mid_left]==target)
        {
          mid_left--;
          count++;
        }
      }
      break;
    }
    else
    {
      if(arr[mid] < target)
      {
        start = mid+1;
      }
      else
      {
        end = mid-1;
      }
    }
  }
  return count;
}

int main()
{
  int m,n,temp,count;
  scanf("%d",&n);

  int *card_list = new int[n];

  for(int i=0;i<n;i++)
  {
    scanf("%d",&card_list[i]);
  }
  sort(card_list,card_list+n);

  scanf("%d",&m);

  for(int i=0;i<m;i++)
  {
    scanf("%d",&temp);
    count = check_number(card_list,temp,n);
    printf("%d ",count);
  }
  printf("\n");


  delete []card_list;
  return 0;
}
