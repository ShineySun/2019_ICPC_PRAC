#include <iostream>

using namespace std;

int main()
{
  int n;
  int star,blank;
  cin >> n;
  blank = 0;
  star = n;

  while(star!=0)
  {
      for(int j=0;j<blank;j++)
      {
        cout << ' ';
      }
      for(int k=0;k<star;k++)
      {
          cout <<'*';
      }
      blank++;
      star--;
      cout << endl;
  }
  return 0;
}
