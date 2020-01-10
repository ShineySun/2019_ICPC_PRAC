// 2309 번 문제
// Seven Dwarfs
// 2020 FOSCAR Algorithm
// 2020 . 01 .10

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int num_of_dwarfs = 9;
int sum_of_weight = 0;
int remain = 0;
bool check = false;

int main()
{
  // memory alloc
  vector<int> weights(9,0);

  // get input
  for(int i = 0; i < num_of_dwarfs; i++)
  {
    cin >> weights[i];
    sum_of_weight += weights[i];
    //cout << weights[i] << ' ';
  }

  remain = sum_of_weight - 100;

  // cout << sum_of_weight << endl;
  // cout << remain << endl;
  // sort data
  sort(weights.begin(),weights.end());

  for(int i = 0; i < num_of_dwarfs-1; i++)
  {
    for(int j = i+1; j < num_of_dwarfs; j++)
    {
      if(weights[i]+weights[j] == remain)
      {
        weights[i] = -1;
        weights[j] = -1;
        check = true;
        break;
      }
    }
    if(check) break;
  }

  for(int i = 0; i < num_of_dwarfs; i++)
  {
    if(weights[i] != -1)
    {
      cout << weights[i] << endl;
    }
  }
}
