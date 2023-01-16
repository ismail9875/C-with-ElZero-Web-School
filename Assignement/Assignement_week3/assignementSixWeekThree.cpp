#include <iostream>
using namespace std;

int main()
{
   int a =  69;
   int b = 108;
   int c = 122;
   int d = 101;
   int e = 114;
   int f = 111;

   /* Output Needed
   "Character Of This ASCII Value 69 Is E"
   "Character Of This ASCII Value 108 Is l"
   "Character Of This ASCII Value 122 Is z"
   "Character Of This ASCII Value 101 Is e"
   "Character Of This ASCII Value 114 Is r"
   "Character Of This ASCII Value 111 Is o"
   Output Needed In Last Line
   "Elzero"
   */
   cout << "Character Of This ASCII Value 69 Is : " << char(a);
   cout << "\nCharacter Of This ASCII Value 108 Is : " << char(b);
   cout << "\nCharacter Of This ASCII Value 122 Is : "<< char(c);
   cout << "\nCharacter Of This ASCII Value 101 Is : " << char(d);
   cout << "\nCharacter Of This ASCII Value 114 Is : " << char(e);
   cout << "\nCharacter  Of This ASCII Valus 111 Is : " << char(f);
   cout << "\n" << char(a) << char(b) << char(c) << char(d) << char(e) <<char(f);
   return 0;
}