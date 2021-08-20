    
Initially, compare both strings starting from the first characters of them, until find a difference. This index is where
we need to start removing from the s string and also where we should start moving from t string to s string.
From this information, we extract what is called perfectK, which is the value of the exact number of moves needed to make the
conversion, without using removals on empty strings to spend the available moves.
Finally, the code compares the moves needed and the perfectK and return yes or no based on this conditions.

***--- Important to note: ---***
There is a scenario that it's not clear in the problem description if we should take into account:
-> Even though the string is not empty, we can do multiple removals/concats if (k - perfectK)%2 == 0) to spend the additional moves.
In this case, we would be removing and adding the same character to the string just to spend the additional moves (even though they were
already the same).
The question examples are incomplete, but I've just considered the empty string scenario, as was described in the problem.
To tako it into account (together with the empty string case), we could just add this condition in the last else: ((k - perfectK)%2 == 0).


Link to code in gdbonline: https://onlinegdb.com/KY9wnT2Por

Author: Euler Bakke