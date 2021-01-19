// 가운데 글자 가져오기
// 2021. 1. 19
// KMU HCI LAB ALGORITHM STUDY
// PROGRAMMERS LEVEL 1
// https://github.com/ShineySun/Algorithm_KMU

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    long long min_num = min(a,b);
    long long max_num = max(a,b);

    for(int i = min_num; i <= max_num; i++)
    {
        answer += i;
    }

    return answer;
}
