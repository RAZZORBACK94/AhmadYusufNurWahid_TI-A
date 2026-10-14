#include <iostream>
#include <iomanip>

using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
    int number;
    number = 123450;
    cout << "Jumlah digit: " << countDigits(number) << endl;

    // diawali 0, dianggap sebagai bilangan oktal, sehingga 012345 = 5349
    number = 012345;
    cout << "Jumlah digit: " << countDigits(number) << endl;
}