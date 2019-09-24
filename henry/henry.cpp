/*
2019. 9. 23
KMUCS ALGO LAB - 3
PRAC FOR ICPC
ALGO NAME : Henry
*/

#include <iostream>
#include <fstream>

int gcd(int a, int b)
{
  int c;

  while(b!=0)
  {
    c = a%b;
    a = b;
    b = c;
  }

  return a;
}


int get_sol(int a, int b)
{
  int x;

  while(a!=1)
  {
    if(b%a)
      x = b/a + 1;
    else
      x = b/a;

    a = a*x - b;
    b = b*x;

    int g = gcd(a,b);

    a /= g;
    b /= g;
  }

  return b;
}

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
    int a,b;

    in >> a >> b;


    std::cout << get_sol(a,b) << std::endl;
  }

  return 0;
}
