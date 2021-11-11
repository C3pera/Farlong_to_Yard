#include <iostream>
using namespace std;

int main()
{
    double furlong, yard;
    cout << "Введите количество фарлонгов: " << endl;
    cin >> furlong;
    yard = furlong * 220;
    cout << yard << " ярдов в данном количестве фарлонгов" << endl;
}