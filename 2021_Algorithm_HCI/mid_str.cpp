// 가운데 글자 가져오기
// 2021. 1. 14
// KMU HCI LAB ALGORITHM STUDY
// PROGRAMMERS LEVEL 1

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int str_len = s.size();
    string ans = "";

    if(str_len%2 == 0){
        ans = s.substr(str_len/2-1, 2);
    }
    else{
        ans = s.at(str_len/2);
        }
    return ans;
}
