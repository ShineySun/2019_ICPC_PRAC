#include <iostream>

using namespace std;

int main()
{
  int cycle = 0;
  int input;
  int compare;
  int result;

  cin >> input;
  compare = input;

  //cout << input/10 << ' ' << input%10 << endl;
  while(1)
  {
    cycle++;

    result = (input%10)*10 + ((input/10 + input%10)%10);
    input = result;
    //cout << "input : " << input << " compare : " << compare << endl;
    if(result == compare)
      break;
  }
  cout << cycle << endl;
}
