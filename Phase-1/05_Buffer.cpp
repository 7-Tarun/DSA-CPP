#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a; 
        int b;
        string fullName;

        cin >> a;
        // cin.ignore();
        cin >> b;
        cin.ignore();
        getline(cin, fullName);

        cout << fullName << " " << a << " " << b << "\n";
    }

    return 0;
}

// cin >> automatically leading whitespace (spaces, tabs, newlines) skip karta hai.
// isliye usse cin.ignore() ki jarurat nahi.