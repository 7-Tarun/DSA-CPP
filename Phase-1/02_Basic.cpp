// Multiple Test Cases Pattern
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << n * n << endl;
    }

    return 0;
}

// Guess the output:
// int t = 5;

// while (t--){
//     cout << t << " ";
// }

// t-- pehle purani value condition mein use karta hai, phir decrement karta hai. Isliye loop ke andar updated value print hoti hai.