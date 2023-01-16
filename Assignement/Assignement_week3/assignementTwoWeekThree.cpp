#include <iostream>
using namespace std;

int main()
{
   float salary = 5000.98;
   int size = sizeof(salary);
   // 8 Bytes
   cout << sizeof(salary) << "\n";
   // 64 Bits
   cout << size * 8;
   return 0;
}