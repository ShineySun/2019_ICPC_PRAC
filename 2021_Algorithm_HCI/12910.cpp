// 나누어 떨어지는 숫자 배열
// 2021. 1. 18
// KMU HCI LAB ALGORITHM STUDY
// PROGRAMMERS LEVEL 1
// https://github.com/ShineySun/Algorithm_KMU

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % divisor == 0)
        {
            answer.push_back(arr[i]);
        }

    }
    if(answer.size() == 0)
    {
        answer.push_back(-1);
    }
    sort(answer.begin(), answer.end());
    return answer;
}
