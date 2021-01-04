/*

2018 12 24 Foscar Algorithm

7568 덩치 문제

*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;


class Person
{
public:
  int weight;
  int height;
  int rank;
  bool isCompared;

  Person()
  {
    weight = 0;
    height = 0;
    rank = 1;
  }

  void setData(int w, int h)
  {
    weight = w;
    height = h;
    rank = 1;
  }

  void printData()
  {
    cout << "몸무게 : " << weight << endl;
    cout << "키 : " << height << endl;
    cout << "순위 : " << rank << endl;
  }
};

int main()
{
  int numberOfPerson,w,h;

  cin >> numberOfPerson;

  Person *person = new Person[numberOfPerson];
  //Person people[numberOfPerson];

  for(int i = 0; i < numberOfPerson; i++)
  {
      cin >> w >> h;
      person[i].setData(w,h);
  }

  for(int i = 0; i<numberOfPerson; i++)
  {
    int count = 0;
    for(int j = 0; j< numberOfPerson;j++)
    {
      if(i == j)
        continue;
      if(person[i].weight < person[j].weight && person[i].height < person[j].height)
      {
        count++;
      }
    }
    person[i].rank = count+1;
  }
  for(int i = 0; i<numberOfPerson; i++)
  {
    cout << person[i].rank << ' ';
  }
  cout << endl;
  return 0;
}
