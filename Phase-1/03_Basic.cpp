#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    string fullName;

    cin >> age;
    cin.ignore();

    getline(cin, fullName);

    cout << age << " " << fullName;

    return 0;
}