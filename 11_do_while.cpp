#include <iostream>
using namespace std;
int main()
{
    int index = 0;

    // Syntax:
    // do
    // {
    //     C++ statements;
    // }while(condition);

    do
    {
        cout << "We are at index number " << index << endl;
        index = index + 1;
    } while (index < 5);

    return 0;
}