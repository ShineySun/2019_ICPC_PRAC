/*
2019. 9. 23
KMUCS ALGO LAB - 4
PRAC FOR ICPC
ALGO NAME : HappyNumber
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <cstdlib>
// #include <typeinfo>

void get_happy_number(int number)
{
  int tmp = 0;

  while(1)
  {
    tmp += (number%10)*(number%10);

    number /= 10;

    if(number == 0)
    {
      if(tmp == 1)
      {
        std::cout << "HAPPY" << std::endl;
        return;
      }
      else if(tmp == 4)
      {
        std::cout << "UNHAPPY" << std::endl;
        return;
      }
      else
      {
        number = tmp;
        tmp = 0;
      }
    }

  }

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
    int number;

    in >> number;  // 1 <= n <= 1,000,000,000

    get_happy_number(number);


  }

  return 0;
}
