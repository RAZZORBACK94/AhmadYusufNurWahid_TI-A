

#include <iostream>
#include <iomanip>

using namespace std;

void recursion()
{

    cout << "Halo." << endl;

    recursion();
}

int main()
{

    recursion();

    return 0;
}