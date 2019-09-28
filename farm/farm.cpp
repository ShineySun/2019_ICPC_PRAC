/*
2019. 9. 28
KMUCS ALGO LAB - 6
PRAC FOR ICPC
ALGO NAME : Farm
*/

#include <iostream>
#include <cstdio>
#include <fstream>
#include <cmath>

int main()
{
  std::ifstream in("input.txt");

  if(!in.is_open())
  {
    std::cout << "File Stream Error" << std::endl;
    return 0;
  }

  int testCase;

  in >> testCase;

  for(int t = 0; t < testCase; t++)
  {
    int a,b,n,w;

    int n_x = 0;
    int n_y = 0;

    in >> a >> b >> n >> w;

    int count = 0;

    for(int x = 1; x < n; x++)
    {
      int y = n-x;

      if(x*a + y*b == w)
      {
        count++;
        n_x = x;
        n_y = y;
      }
    }
    if(n_x && n_y && count == 1)
      std::cout << n_x << ' ' << n_y << std::endl;
    else
      std::cout << -1 << std::endl;
  }

  return 0;
}
