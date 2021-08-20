#include <iostream>
#include <string>

using namespace std;

// Function prototype
string revString(string);

int main()
{

    string a;

    cin >> a;

    cout << revString(a);

    return 0;
}

/* ---- Function implementation for reverting a string ----
*   This implementation uses the XOR operator for swapping the character of the string.
*   XOR port: Inputs: A, B. Output: C
*   A   B   C
*   0   0   0
*   0   1   1
*   1   0   1
*   1   1   0
*/
string revString(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        s[start] = s[start] ^ s[end];
        s[end] = s[start] ^ s[end];   // s[end]: s[end] = [start] ^ s[end] ^ s[end] which results in s[end] = s[start] ^ 0, then s[end] = s[start] -> Swapped.
        s[start] = s[start] ^ s[end]; // s[start] = s[start] ^ s[start] ^ s[end] which results in: s[start] = 0 ^ s[end], then [start] = s[end] -> Swapped.

        start += 1;
        end -= 1;
    }

    return s;
}
