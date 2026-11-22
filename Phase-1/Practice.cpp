#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string a; 
        int b;
        string fullName;

        cin >> a;
        cin >> b;
        cin >> fullName;

        cout << fullName << " " << a << " " << b << "\n";
    }

    return 0;
}


/*
Give Input:
2
John
10
John Smith
20
Alex

and Observe:

First Loop:
- cin >> a reads "John".
- cin >> b reads 10.
- cin >> fullName reads only "John" (stops at the space).
- "Smith" remains unread in the input buffer.

Second Loop:
- cin >> a reads "Smith" from the previous loop's remaining input.
- cin >> b reads 20 from the new input.
- cin >> fullName reads "Alex" from the new input.

Key Concept:
The input buffer is shared across loop iterations.
Unread input from one iteration can be consumed by the next.
cin >> extracts whitespace-separated tokens, not entire lines.
*/