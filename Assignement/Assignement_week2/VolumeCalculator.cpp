#include <iostream>
using namespace std;

int main()
{
    int value ;
    cout << "|=========================================|\n";
    cout << "|=========== Volume Calculator ===========|\n";
    cout << "|=========================================|\n";
    cout << "Please Enter A Value On KiloByte : \n";
    cin >> value;
    cout << "Your Value Is : " << value << "\n";
    
    //؛;؛;؛; Calculat Byte ؛;؛;؛;//
    
    int Byte = value * 1024;
    cout << "Is Equal : " << Byte << " Byte\n";
    
    //؛;؛;؛; Calculat Byte ؛;؛;؛;//

    int bit = Byte * 1024;
    cout << "Is Equal : " << bit << " bit \n";
    return 0;
}