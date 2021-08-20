#include <iostream>
#include <string>

using namespace std;

/* -- Brief description of the solution:
*       Initially, compare both strings starting from the first characters of them, until find a difference. This index is where
*       we need to start removing from the s string and also where we should start moving from t string to s string.
*       From this information, we extract what is called perfectK, which is the value of the exact number of moves needed to make the
*       conversion, without using removals on empty strings to spend the available moves.
*       Finally, the code compares the moves needed and the perfectK and return yes or no based on this conditions.
*
*       ***--- Important to note: ---***
*       There is a scenario that it's not clear in the problem description if we should take into account:
*       -> Even though the string is not empty, we can do multiple removals/concats if (k - perfectK)%2 == 0) to spend the additional moves.
*       In this case, we would be removing and adding the same character to the string just to spend the additional moves (even though they were
*       already the same).
*       The question examples are incomplete, but I've just considered the empty string scenario, as was described in the problem.
*       To tako it into account (together with the empty string case), we could just add this condition in the last else: ((k - perfectK)%2 == 0).
*/

// Function prototype
string ConcatRemove(string, string, int);

int main()
{
    string s, t;
    int k;

    // Reading inputs
    cin >> s;
    cin >> t;
    cin >> k;

    // Function call
    cout << "\n"
         << ConcatRemove(s, t, k);

    return 0;
}

string ConcatRemove(string s, string t, int k)
{

    // Index indicating where s and t start to be different.
    int index = 101;

    // Number of removals needed for string s
    int sRemovals = 0;

    // Number of concatenations needed from t to sRemovals
    int numConcats = 0;

    // The exact k (minimum number of operations) needed to perform the conversion
    int perfectK = 0;

    // If s and t are the same, no moves are needed, and k >= 1, so the result is "no"
    if (s == t)
        return "no";

    // Looking for the first difference between s and t
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
        {
            index = i;
            break;
        }
    }

    // Number of removals needed to string s
    sRemovals = s.length() - index;

    // Now, calculating how many characters need to be added from t to s
    numConcats = t.length() - index;

    perfectK = sRemovals + numConcats;

    if (k < (perfectK))
    {
        return "no";
    }
    else if (k == (perfectK))
    {
        return "yes";
    }
    else
    { // This else is for the case of additional movements available, checking only for empty string to spend the additional moves.
        if (!index)
        {
            return "yes";
        }
        return "no";
    }
}
