/*
2018 11 4 Sunday
Foscar algorithm practice
*/

#include <iostream>

using namespace std;

// int pentagon(int n)
// {
//   if(n == 1) return 5;
//   else
//   {
//     return (n+1)*2 + (n-1) + pentagon(n-1);
//   }
// }

int main() {
    long long N, sol;
    cin >> N;

    sol = 1 + 4 * N + 3 * N * (N - 1) / 2;
    sol %= 45678;

    cout << sol << endl;

    return 0;
}
