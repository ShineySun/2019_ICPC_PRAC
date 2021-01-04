#include <iostream>
#include <string>

using namespace std;

int main()
{
      string answer;

      while(true)
      {
          getline(cin,answer);
          if(answer == "") break;
          cout << answer << endl;
      }

}
