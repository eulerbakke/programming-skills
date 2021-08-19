#include <iostream>
#include <string>

using namespace std;

int main()
{

    // String to be evaluated
    string s;

    // Reading a string from the user
    cin >> s;

    // Length of the string
    int length = 0;

    // Loop until reach the null character, indicating the end of the string.
    while (s[length])
    {
        length++;
    }

    // Show de length
    cout << "Length: " << length;

    return 0;
}