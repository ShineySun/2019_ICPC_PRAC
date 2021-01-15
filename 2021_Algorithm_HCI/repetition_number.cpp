// 가운데 글자 가져오기
// 2021. 1. 14
// KMU HCI LAB ALGORITHM STUDY
// PROGRAMMERS LEVEL 1
// https://github.com/ShineySun/Algorithm_KMU

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int start_num = arr[0];
    answer.push_back(start_num);

    for(int i = 0; i < arr.size()-1; i++)
    {
        if(start_num != arr[i+1]){
            start_num = arr[i+1];
            answer.push_back(start_num);
        }
    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    //cout << "Hello Cpp" << endl;

    return answer;
}
