#include <QCoreApplication>
#include <iostream>
#include <windows.h>
#include <vector>
#include <QMetaMethod>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    qDebug() << "Підрахунок інтервалів між однаковими символами \n";

    vector<char> abc = {'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U', 'T', 'Z', 'Y', 'X', 'W', 'O', 'T',
                        'Z', 'Y', 'Q', 'V', 'U', 'T', 'S', 'X', 'W', 'V', 'N', 'Z', 'Y', 'X', 'P', 'U', 'T',
                        'Z', 'R', 'W', 'V', 'U', 'M', 'Y', 'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U',
                        'T', 'S', 'X', 'W', 'V', 'N', 'Z', 'Y', 'X', 'P', 'U', 'T', 'Z', 'R', 'W', 'V', 'U',
                        'M', 'Y', 'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U', 'T', 'S', 'X', 'W', 'V', 'N',
                        'Z', 'Y', 'X', 'P', 'U', 'T', 'Z'};
    qDebug() << "Вхідний масив символів:\n";
    for (int i = 0; i < abc.size(); i++)
    {
        if (i % 15 == 0)
        {
            cout << endl;
        }
        cout << abc[i] << " ";
    }
    //cout << abc.size();
    char h;
    qDebug() << "\n" << "Введіть один із зазначених вище символів:\n";
    cin >> h;
    int x = 0;
    vector<int> intr;
    for (int j = 0; j < abc.size(); j++)
    {
        if ( *(abc.begin()+j) == h )
        {
            cout << x << " ";
            x = 0;
        }
        else
        {
            x=x+1;
        }

    }


    return a.exec();
}
