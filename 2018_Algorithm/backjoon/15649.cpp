// // 15649 번 문제
// // N & M
// // 2020 FOSCAR Algorithm
// // 2020 . 01 .10
//
// #include <cstdio>
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <string.h>
// #include <stdlib.h>
//
// using namespace std;
//
// int main()
// {
//   // def variables
//   int N, M;
//
//   // get input num of test case
//   cin >> N >> M;
//
//   // memory alloc & set
//   int arr[8] = {1,2,3,4,5,6,7,8};
//   string temp = "";
//   string temp_before;
//   //cout << "temp.size() : " << temp.size() << endl;
//
//   do {
// 		for (int i = 0; i < M; ++i)
//     {
// 			//printf("%d ", arr[i]);
//       if(temp.size() == 0)
//         temp = to_string(arr[i]);
//       else
//         temp.push_back('0'+arr[i]);
//     }
// 		//printf("\n");
//
//     if(!temp.compare(temp_before))
//     {
//       //cout << "temp :" << temp << endl;
//       //cout << "temp_before : " << temp_before << endl;
//     }
//     else
//     {
//       temp_before = "";
//       for(int i = 0; i < temp.size(); i++)
//       {
//         printf("%c",temp[i]);
//         if(i != temp.size()-1)
//         {
//           printf(" ");
//         }
//       }
//       cout << endl;
//     }
//
//     //cout << "TEMP BEFORE : " << temp_before << endl;
//     //cout << "TEMP : "<<temp << endl;
//     temp_before = temp;
//     temp = "";
// 	} while (next_permutation(arr, arr + N));
// }


#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int permutation(vector<int>* vecInt, int r)
{
    // vector<int>::iterator it;

    reverse(vecInt->begin() + r, vecInt->end());

    // for(it = vecInt->begin(); it != vecInt->end(); it++)
    // {
    //   cout << *it << ' ';
    // }
    // cout << endl;

    // return 0;
    return next_permutation(vecInt->begin(), vecInt->end());
}


int main()
{
        vector<int>             vecInt ;
        vector<int>::iterator   vecIntIter ;

        int n;
        int r;

        cin >> n >> r;

        for(int ii = 1; ii <= n; ii++)
                vecInt.push_back(ii) ;

        while(1)
        {
                for(int ii = 0; ii < r; ii++)
                        printf("%d ", vecInt[ii]) ;
                printf("\n") ;

                if(!permutation(&vecInt, r))
                  break ;
        }

        //return 1 ;
}
