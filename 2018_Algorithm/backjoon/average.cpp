// 국민대학교 14학번 김선필

 #include <iostream>
 #include <cmath>
 using namespace std;

 int main()
 {
   int testCase;
   cin >> testCase;

   for(int i =0; i<testCase;i++)
   {
     double student[1001],avg;
     int numOfStu;
     double sum=0;
     int count = 0;

     cin >> numOfStu;
     //cout << numOfStu;
     for(int j=0;j<numOfStu;j++)
     {
        cin >> student[j];
        sum += student[j];
     }
     //cout << endl;
     //cout << endl << sum << endl;;
     avg = sum/numOfStu;
     //cout << avg <<endl;
     //cout << avg << endl;
     for(int k=0;k<numOfStu;k++)
     {
       if(student[k] > avg)
        {
          count++;
          //cout << student[k] << "에서 count up" << endl;
        }
     }
     //cout << count << endl;
     cout<<fixed;
     cout.precision(3);
     cout << (double)count/numOfStu*100 << '%' << endl;
   }

   return 0;
 }
