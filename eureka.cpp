/*
2019. 9. 17
KMUCS ALGO LAB - 2
PRAC FOR ICPC
ALGO NAME : Eureka
*/

#include <iostream>
#include <vector>
#include <fstream>

std::vector<int> tri_num;

void set_tri_num()
{
  int temp;

  for(int i = 1; ;i++)
  {
    temp = i*(i+1)/2;

    if(temp <= 1000)
    {
      tri_num.push_back(temp);
      // std::cout << temp << std::endl;
    }
    else
      return;
  }
}

bool isEureka(int num)
{
  for(int i = 0; i < tri_num.size(); i++)
  {
    for(int j = 0; j < tri_num.size(); j++)
    {
      for(int k = 0; k < tri_num.size(); k++)
      {
        if(tri_num[i]+tri_num[j]+tri_num[k] == num)
          return true;
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

  set_tri_num();

  // std::cout << tri_num.size() << std::endl;

  int testCase,num;

  in >> testCase;

  for(int t = 0; t < testCase; t++)
  {
    in >> num;
    std::cout << isEureka(num) << std::endl;
  }

  return 0;
}
