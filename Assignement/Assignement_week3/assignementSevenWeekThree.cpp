#include <iostream>
using namespace std;

int main()
{
   int a =  1;
   int b = 13;
   int c = 17;
   int d = 70;

   /* 
   ==== Output Needed ====
   "EWS"
   */
   cout << "======= Solution =======\n";
   cout <<"=====[" << char(d-a) << char(c+d) << char(b+d) << "]=====";
   return 0;
}