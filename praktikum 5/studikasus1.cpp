

#include <iostream>
#include <iomanip>

using namespace std;

void calculateSquare(int number)
{

    number += number;
}

int main()
{

    int num = 10;

    calculateSquare(num);

    cout << "Kuadrat dari " << num << " adalah " << num << endl;

    return 0;
}