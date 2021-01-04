#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(string &str1,string &str2)
{
  if(str1.size() == str2.size()) // 사이즈 같을때
  {
    return str1 < str2;
  }
  return str1.size() < str2.size();
}

int main()
{
  int n;
  vector<string> sol;

  cin >> n;
  string temp;

  for(int i=0;i<n;i++)
  {
    cin >> temp;
    sol.push_back(temp);
  }

  vector<string>::iterator it;
  vector<string>::iterator next_it;

  sort(sol.begin(),sol.end(),comp);

  for(it = sol.begin(); it != sol.end() ; it++)
  {
    next_it = it+1;
    if(*next_it == *it){
      //cout << "같네.." << endl;
      continue;
    }
    cout << *it << endl;
  }


}
