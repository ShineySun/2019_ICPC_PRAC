// 직사각형에서 좌표 값 사용 문제
// 입력 x y w h   1<= x <= w-1, 1<= y <= h-1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x,y,w,h;
  int x_min, y_min;

  cin >> x >> y >> w >> h;

  if(abs(x-w) < x)
    x_min = abs(x-w);
  else
    x_min = x;

  if(abs(y-h)< y)
    y_min = abs(y-h);
  else
    y_min = y;

  if(x_min < y_min)
    cout << x_min << endl;
  else
    cout << y_min << endl;

  return 0;


}
