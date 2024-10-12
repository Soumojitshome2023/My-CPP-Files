#include <iostream>
using namespace std;

struct employee
{
    /* data */
    int eId;
    char favChar;
    int salary;
};

int main()
{
    struct employee soumojit;

    soumojit.eId = 1;
    soumojit.favChar = 'c';
    soumojit.salary = 120000000;

    cout << "The value is " << soumojit.eId << endl;
    cout << "The value is " << soumojit.favChar << endl;
    cout << "The value is " << soumojit.salary << endl;

    return 0;
}
