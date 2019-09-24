#include <iostream>
#include <cmath>
using namespace std;
// 시간 초과 알고리즘 -> 에라토스테네스의 체로 대체 풀이
/*
bool get_prime(int n)
{
  if(n==1) return false;
  for(int i = 2;i<n;i++)
  {
    if(n%i == 0)
      return false;
  }
  return true;
}

int main()
{
  int M,N;
  cin >> M >> N;

  for(int i = M;i<= N;i++)
  {
    if(get_prime(i))
      cout << i << endl;
  }
  return 0;
}
*/
/*int main(void){
    int M,N;

    cin >> M >> N;

    //최대치 크기만큼 동적할당
    bool * arr = new bool[N+1];


    //배열을 true로 초기화합니다
    for(int i=0; i<N+1; i++){
        arr[i] = true;
    }


    int j;

    for(int i=2; i<N+1; i++){

        if(arr[i]){ //true이면

            if((unsigned int)pow(i, 2) > 1000001){
                //제곱이 범위를 넘으면 for문
                break;
            }else{

                for( j = (int)pow(i, 2) ; j < N+1 ;){
                    arr[j] = false;
                    j = j+i;
                }
            }

        }
    }  //에라토스테네스의 체

    if(M == 1) M++;



    for(int i=M; i<=N; i++){
        if(arr[i] && i>= M)    cout << i << endl;
    }

    delete []arr;
    return 0;
}*/
int main()
{
  int M, N;
  int cnt = 0, p = 0, total = 0;

  cin >> M >> N;

  int *arr = new int[N - M + 1];
  for (int i = M; i <= N; i++)
  {
      arr[p] = i;
      p++;
  }
    p = 0;
  for (int i = 2; i <= sqrt(N); i++)
  {
       for (int j = 0; j < N - M + 1; j++)
      {
        if(arr[j]==-1)
        {
          continue;
        }
        if (arr[j] % i == 0 && arr[j] != i)//그 배열이 소수아니면
        {
          arr[j] = -1;
        }
      }
    }
  for (int i = 0; i < N - M + 1; i++)
  {
    if (arr[i] == 1)
    continue;
    if (arr[i] != -1)
      cout << arr[i] << '\n';
    }
}
