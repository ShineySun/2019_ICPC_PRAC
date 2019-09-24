#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int arr_A[100001];

void binary_search(int,int);

int main()
{
  int M,N;
  int temp,size;
  scanf("%d",&N);


  for(int i=0;i<N;i++)
  {
    scanf("%d",&arr_A[i]);
  }
  scanf("%d",&M);

  sort(arr_A,arr_A+N);

  /*for(int i =0;i<N;i++)
    cout << arr_A[i] << ' ';
    */
  for(int t=0;t<M;t++)
  {
    scanf("%d",&temp);
    binary_search(temp,N);
  }

  return 0;
}

void binary_search(int target,int end)
{
  int start = 0;
  end = end-1;
  int mid = 0;

  while(end - start >= 0)
  {
    mid = (start+end)/2;
    if(arr_A[mid]==target)
    {
      printf("1\n");
      return;
    }
    else{
      if(arr_A[mid] > target)
      {
        end = mid - 1;
      }
      else
      {
        start = mid+1;
      }
    }
  }
  printf("0\n");
  return;
}
