#include <iostream>
using namespace std;

int main ()
{
    cout << "OPERASI BILANGAN LOGIKA \n";

    cout << "\n Tabel kebenarab Operator AND \n";
    cout << "1 && 1 = " << (1 && 1) << endl;
    cout << "1 && 0 = " << (1 && 0) << endl;
    cout << "0 && 1 = " << (0 && 1) << endl;
    cout << "0 && 0 = " << (0 && 0) << endl;

    cout << "\n TAbel kebenaran Operator OR \n";
    cout << "1 || 1 = " << (1 || 1) << endl;
    cout << "1 || 0 = " << (1 || 0) << endl;
    cout << "0 || 1 = " << (0 || 1) << endl;
    cout << "0 || 0 = " << (0 || 0) << endl;

    cout << "\n TAbel kebenaran Operator NOT \n";
    cout << "!1 = " <<!1 << endl;
    cout << "!0 = " <<!0 << endl;

    return 0;

}
