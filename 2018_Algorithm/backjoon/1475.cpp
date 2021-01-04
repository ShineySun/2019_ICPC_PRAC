#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool desc(int a,int b)
{
  return a > b;
}

int main()
{
  string number;
  int list[10] = {0,};

  cin >> number;

  for(int i =0;i < number.size();i++)
  {
    if(number[i] == '6' || number[i] == '9')
    {
      list[6]++;
    }
    else
    {
      list[number[i]-'0']++;
    }
  }

  list[6] = list[6]/2 + list[6]%2;

  sort(list,list+10,desc);

  cout << list[0] << endl;
  /*for(int i =0;i<10;i++)
  {
    cout << list[i] << " | " ;
  }
  cout << endl;
 */
  return 0;
}
