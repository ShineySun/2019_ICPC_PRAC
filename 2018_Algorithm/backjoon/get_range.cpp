#include <iostream>

using namespace std;

int main()
{
  int testCase;
  cin >> testCase;

  for(int i = 0; i< testCase;i++)
  {
    int x1,y1,x2,y2,r1,r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    int dis1 = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    int dis2 = (r1 + r2)*(r1+r2);
    int dis3 = (r1 - r2)*(r1-r2);

    if (dis1 == 0) {
      if (dis3 == 0) cout << "-1" << endl;
      else cout << "0" << endl;
    }
    else if (dis1 == dis2 || dis1 == dis3)  // 접할때 외접 내접
      cout << "1" << endl;
    else if (dis3 < dis1 && dis1 < dis2)
      cout << "2" <<endl;
    else
      cout << "0" << endl;
}
  return 0;
}
