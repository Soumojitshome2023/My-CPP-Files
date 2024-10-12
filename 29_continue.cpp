#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 8; i++)
    {

        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
