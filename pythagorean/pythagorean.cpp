/*
2019. 9. 23
KMUCS ALGO LAB - 5
PRAC FOR ICPC
ALGO NAME : PythagoreanExpectation
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

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
    int numOfTeam, numOfGame;

    in >> numOfTeam >> numOfGame;   // 2 <= n,m <= 1000

    int team_score[1001] = {0,};
    int team_a_score[1001] = {0,};

    int a,b,p,q;

    for(int g = 0; g < numOfGame; g++)
    {
      in >> a >> b >> p >> q;

      team_score[a] += p;
      team_a_score[a] += q;

      team_score[b] += q;
      team_a_score[b] += p;
    }

    std::vector<double> expectation;

    for(int i = 1; i <= numOfTeam; i++)
    {
      double y = team_score[i]*team_score[i];
      double x = team_score[i]*team_score[i] + team_a_score[i]*team_a_score[i];
      double tmp = y/x*1000;

      expectation.push_back(tmp);
    }

    double max = *max_element(expectation.begin(), expectation.end());
    double min = *min_element(expectation.begin(), expectation.end());

    std::cout << int(max) << std::endl;
    std::cout << int(min) << std::endl;

  }

  return 0;
}
