#include <bits/stdc++.h>
using namespace std;

void change(const int &x){
    // x += 100;    //Error modification not allowed
    cout << x << "\n";
}

int main(){

    int a = 10;

    change(a);
    cout << a;

    return 0;
}

// You allready know the concept of pass by value and pass by reference
// In C++: Const Reference (const &), This is a safer version of Pass-by-Reference in which function can access the original variable, but it cannot modify it.