#include <iostream>
#include <string>

using namespace std;

// Function prototypes
string ConcatRemove(string, string, int); // I'm just copying the function from the other question (could be added as a library as well)
string UnitTest1();
string UnitTest2();
string UnitTest3();

int main()
{

    cout << "Result UNIT TEST1: " << UnitTest1() << ".\n";
    cout << "Result UNIT TEST2: " << UnitTest2() << ".\n";
    cout << "Result UNIT TEST3: " << UnitTest3() << ".\n";

    return 0;
}

string UnitTest1()
{

    // Test inputs
    string s = "abcd";
    string t = "abfghi";
    int k = 6;

    // Expected result
    string expectedResult = "yes";

    // Test result
    string testResult = ConcatRemove(s, t, k);

    if (expectedResult == testResult)
        return "test passed";
    else
        return "test failed";
}

string UnitTest2()
{

    // Test inputs
    string s = "abcd";
    string t = "abfghi";
    int k = 5;

    // Expected result
    string expectedResult = "no";

    // Test result
    string testResult = ConcatRemove(s, t, k);

    if (expectedResult == testResult)
        return "test passed";
    else
        return "test failed";
}

string UnitTest3()
{

    // Test inputs
    string s = "abcd";
    string t = "efgh";
    int k = 80;

    // Expected result
    string expectedResult = "yes";

    // Test result
    string testResult = ConcatRemove(s, t, k);

    if (expectedResult == testResult)
        return "test passed";
    else
        return "test failed";
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