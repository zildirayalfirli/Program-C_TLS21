/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int uang;
    
    cout << "TEMPAT NUGAS SEKITAR POGUNG" << endl;
    cout << "---------------------------" << endl;
    cout << "budget" << endl;
    cout << "1. 10.000-15.000" << endl;
    cout << "2. 15.000-25.000" << endl;
    cout << "3. 25.000-35.000" << endl;
    cout << "\nBerapa budget anda???: ";
    cin >> uang;
    
    

    switch(uang)
    {
        case 1: cout <<"silahkan datang ke ngopi-ngopi dan kafe djawa"; break;
        case 2: cout <<"silahkan datang ke antologi dan blackbone"; break;
        case 3: cout <<"silahkan datang ke relasi dan lantai bumi"; break;
        default: cout <<"silahkan isi kode budget dengan benar ";
        
    }

return 0;
    
}
