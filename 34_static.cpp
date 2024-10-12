#include <iostream>
using namespace std;

int product()
{

    static int c = 0;
    c = c + 1;
    return c;
}
int main()
{

    cout << "The product of a and b is " << product() << endl;
    cout << "The product of a and b is " << product() << endl;
    cout << "The product of a and b is " << product() << endl;

    return 0;
}

/*
Output : 
The product of a and b is 1
The product of a and b is 2
The product of a and b is 3

*/