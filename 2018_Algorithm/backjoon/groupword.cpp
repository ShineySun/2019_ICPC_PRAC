#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

bool checker(string ans)
{
  //bool check = true;
  bool alp[26] = {false,};

  for(int i = 0;i<ans.size();i++)
  {
    if(alp[ans[i]-'a'])
      return false;
    else
    {
      char temp = ans[i];
      alp[ans[i]-'a'] = true;

      while(1)
      {
        if(temp != ans[++i]){
          i -= 1;
          break;
        }
      }
    }
  }
  return true;
}

int main()
{
  string ans;
  int testCase;
  int count = 0;

  scanf("%d",&testCase);

  for(int t = 0;t<testCase;t++)
  {
      cin >> ans;
      if(checker(ans))
        count++;
  }

    printf("%d\n",count);

    return 0;
}
