#include <iostream>

using namespace std;

int main()
{

    for (int i = 1; i <= 100; i++)
    {

        //multiple of 3 and 5 simultaneously means that it's multiple of 15
        if (i % 15 == 0)
        {
            cout << "FooBaa";
        }
        else if (i % 3 == 0)
        {
            cout << "Foo";
        }
        else if (i % 5 == 0)
        {
            cout << "Baa";
        }
        else
        {
            cout << i;
        }

        cout << "\n";
    }

    return 0;
}