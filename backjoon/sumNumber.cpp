#include <iostream>
#include <string>
using namespace std;

int main()
{
  int numOfAtt;
  char number[101] = {'0', };
  int sum = 0;
  cin >> numOfAtt;


  for(int i =0;i<numOfAtt;i++)
  {
      cin >> number[i];
      //cout << number[i] << ' ';
      sum += number[i]-'0';
  }

  cout << sum;
}
