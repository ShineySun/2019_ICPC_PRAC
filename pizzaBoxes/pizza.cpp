/*
2019. 9. 28
KMUCS ALGO LAB - 5
PRAC FOR ICPC
ALGO NAME : PizzaBoxes
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>

int main()
{
  // std::ifstream in("input.txt");
  //
  // if(!in.is_open())
  // {
  //   std::cout << "File Stream Error" << std::endl;
  //   return 0;
  // }

  int testCase;

  std::cin >> testCase;

  for(int t = 0; t < testCase; t++)
  {
    int n,m;      // 1 <= n,m <= 1000

    std::cin >> n  >> m;   // hight , width

    // memory allocation
    // original data
    long **boxes = new long*[n];
    for(int h = 0; h < m; h++)
    {
      boxes[h] = new long[m];
    }

    // front data
    bool ** front = new bool*[n];
    for(int h = 0; h < m; h++)
    {
      front[h] = new bool[m];
    }

    long total_sum = 0;

    std::vector<long> temp_row;
    std::vector<long> temp_col;

    // make front data
    for(int x = 0; x < n; x++)
    {
      for(int y = 0; y < m; y++)
      {
        std::cin >> boxes[x][y];
        total_sum += boxes[x][y];
        temp_row.push_back(boxes[x][y]);
      }

      long row_max = *max_element(temp_row.begin(), temp_row.end());

      for(int y = 0; y < m; y++)
      {
        if(boxes[x][y] == row_max)
        {
          // std::cout << "비교 됨?" << std::endl;
          front[x][y] = true;
        }
      }
      temp_row.clear();
    }

    // make side data
    for(int y = 0; y < m; y++)
    {
      for(int x = 0; x < n; x++)
      {
        temp_col.push_back(boxes[x][y]);
      }

      int col_max = *max_element(temp_col.begin(), temp_col.end());

      for(int x = 0; x < n; x++)
      {
        if(boxes[x][y] == col_max)
        {
          front[x][y] = true;
        }
      }
      temp_col.clear();
    }

    // // sum max data
    for(int x = 0; x < n; x++)
    {
      for(int y = 0; y < m; y++)
      {
        if(front[x][y])
          total_sum -= boxes[x][y];
      }
    }

    std::cout << total_sum << std::endl;
  }

  return 0;
}
