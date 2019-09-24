#include <iostream>

using namespace std;


int check_number(int n)
{
  int sum = n;

  while(1)
  {
    if(n==0)
      break;
    sum += n%10;
    n /= 10;
  }
  return sum;
}

int main()
{
  bool output[10001] = {false,};
  int input = 10001;

  for(int i = 1;i<input; i++)
  {
    int index = check_number(i);

    if(index <= input)
    {
      output[index] = true;
    }
  }
//  cout << "무한 루프?" << endl;

  for(int j =1; j<input;j++)
  {
    if(output[j] == false)
      cout << j << endl;
  }
  //cout << "무한 루프?" << endl;
  return 0;

}
