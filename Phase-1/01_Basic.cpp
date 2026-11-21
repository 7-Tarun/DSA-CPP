// Boiler Plate:-

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello World!" << "\n";

    int a = 100000;
    int b = 100000;
    long long c = a * b;       // GALAT! a * b pehle int me calculate hoke overflow ho jayega
    long long d = 1LL * a * b; // SAHI! 1LL multiplication ko long long me promote kar deta hai
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    return 0;
}

// • Headers (#include): Normally har tool ke liye alag header lagta hai (<iostream>, <vector>, etc.). Par DSA aur OAs me shortcut ke liye #include <bits/stdc++.h> use kar—ye ek line me saare standard C++ headers load kar deta hai (MinGW GCC me chalega).

// • using namespace std;: Iske bina har baar std::cout, std::cin, std::string likhna padega. DSA aur OAs me ise use karna completely fine hai.

// • "\n" vs endl: endl output buffer ko flush karta hai, jisse code slow ho jata hai. Speed ke liye hamesha "\n" use kar.