/*
2019. 9. 28
KMUCS ALGO LAB - 6
PRAC FOR ICPC
ALGO NAME : Pialindrome
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>

bool check_palin(std::vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
      if(v[i] != v[v.size()-1-i])
        return false;
    }
    return true;
}

int main()
{
  int testCase;

  std::cin >> testCase;

  for(int t = 0; t < testCase; t++)
  {
    int number;
    bool flag = false;

    std::cin >> number;

    int temp_number = number;



    for(int i = 2; i <= 64; i++)
    {
      temp_number = number;
      std::vector<int> arr;

      while(temp_number)
      {
        arr.push_back(temp_number%i);
        temp_number /= i;
      }

      if(check_palin(arr))
      {
        flag = 1;
        break;
      }
    }
    std::cout << flag << std::endl;

  }
  return 0;

}
