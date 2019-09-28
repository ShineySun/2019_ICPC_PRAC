/*
2019. 9. 28
KMUCS ALGO LAB - 6
PRAC FOR ICPC
ALGO NAME : GoldbachConjecture
*/

#include <iostream>
#include <fstream>
#include <cstdio>
#include <algorithm>
#include <vector>

std::vector<bool> prime_set(1001,false);
std::vector<int> prime_set2;

typedef struct data
{
  int num1;
  int num2;
  int diff;

  data(int n1, int n2, int d) : num1(n1), num2(n2), diff(d)
  {

  }
}Data;

// 에라토스테네스의 체(Sieve of Eratosthenes)
void set_prime()
{
  for(int i = 2; i <= 1001; i++)
  {
    if(!prime_set[i])
    {
      for(int j = i*2; j<=1001; j+=i)
      {
        prime_set[j] = true;
      }
    }
  }

  for(int i = 2; i <= 1001; i++)
  {
    if(!prime_set[i])
      prime_set2.push_back(i);
  }

  // for(int i = 0; i < prime_set2.size(); i++)
  // {
  //   std::cout << prime_set2[i] << ' ';
  // }
  // std::cout << std::endl;
}

bool cmp_diff(const Data& n1, const Data& n2)
{
  return abs(n1.diff) < abs(n2.diff);
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

  set_prime();

  in >> testCase;

  for(int t = 0; t < testCase; t++)
  {
    int even;

    in >> even;

    std::vector<Data> d_v;

    for(int i = 0; i < prime_set2.size(); i++)
    {
      for(int j = 0; j < prime_set2.size(); j++)
      {
        if(prime_set2[i] + prime_set2[j] == even)
        {
          d_v.push_back(Data(prime_set2[i],prime_set2[j],prime_set2[i]-prime_set2[j]));
        }
      }
    }

    sort(d_v.begin(), d_v.end(),cmp_diff);

    // for(int i = 0; i < d_v.size(); i++)
    // {
    //   std::cout << d_v[i].num1 << ' ' << d_v[i].num2 << ' '<< d_v[i].diff << std::endl;
    // }

    // std::cout << "sol : ";
    if(d_v[0].num1 < d_v[0].num2)
      std::cout << d_v[0].num1 << ' ' << d_v[0].num2 << std::endl;
    else
      std::cout << d_v[0].num2 << ' ' << d_v[0].num1 << std::endl;
  }

  return 0;

}
