#include <iostream>
using namespace std;

int main()
{



int A[7];
int j, k, c, temp;

    cout <<" Masukan nilai pada elemen array : " <<endl;
    for (c=0; c<7; c++)

    {
        cout <<"A[" << c << "] = ";
        cin >> A [c];
    }
    cout << "\nNilai element array sebelum diurutkan : " << endl;
    for ( c=0; c<7; c++)
    {
        cout << "A [" << c << "] = " << A[c] << endl;

    }
    int jmaks, U=6;
    for (j=0; j<6; j++)
    {
        jmaks =0;
        for (k=1; k<=U; k++)
        {
            if (A[k] > A [jmaks])
            {
                jmaks =k;
            }
        }
        temp = A[U];
        A[U] = A[jmaks];
        A [jmaks] = temp;
        U--;
    }

    cout <<"\nNilai Elemen setelah diurutkan : " << endl;
    for (c=0; c<7; c++)
    {
        cout << "A [" << c << "] = " << A[c] << endl;
    }
    return 0;
}


