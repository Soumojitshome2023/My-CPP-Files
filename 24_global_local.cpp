#include <iostream>
using namespace std;

int c = 45; // global c

int main()
{

    int c = 6; // local c

    cout << "The local c is " << c << endl;

    cout << "The global c is " << ::c;

    return 0;
}
