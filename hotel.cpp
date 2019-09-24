/*
2019. 9. 17
KMUCS ALGO LAB - 1
PRAC FOR ICPC
ALGO NAME : HOTEL
*/

#include <stdio.h>
#include <fstream>
#include <iostream>

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
    int height,width,n;

    in >> height >> width >> n;

    if((n-1)/height+1 >= 10)
      std::cout << (n-1)%height+1 << (n-1)/height+1 << std::endl;
    else
      std::cout << (n-1)%height+1 << 0 << (n-1)/height+1 << std::endl;
  }

  return 0;
}
