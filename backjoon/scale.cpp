#include <iostream>

using namespace std;

int main()
{
    int scale[8];

    int result = 0;

    for(int i=0;i<8;i++)
    {
        cin >> scale[i];

        if(scale[i] == i+1)
          result++;

        else if(scale[i] == 8-i)
          result--;
      }

      //cout << result <<endl;
      if(result == 8)
      {
        cout << "ascending";
      }
      else if(result==-8)
      {
        cout << "descending";
      }
      else
      {
        cout <<"mixed";
      }

}
/*
int input;
char scale[8];

for(int i=0;i<8;i++)
{
  cin >> input;
  scale[i] = (input+'0');
}
string answer(scale);
//cout << answer << endl;
if(answer.compare("12345678") == 0)
{
  cout << "ascending";
}
else if(answer.compare("87654321") == 0)
{
  cout << "descending";
}
else
{
  cout << "mixed";
}
return 0;
*/
