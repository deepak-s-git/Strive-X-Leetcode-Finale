#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << "Value of a is " << a << endl 
         << "Value of b is " << b << endl;
    
    return 0;
}


// 🧠 Explanation
// #include<bits/stdc++.h> →
// This is a non-standard but commonly used header (especially in competitive programming).
// It includes all standard C++ libraries at once — like iostream, vector, string, algorithm, etc.
// ⚠️ It’s not recommended in production code, but fine for learning or coding contests.

// using namespace std; →
// This means you can use names from the std namespace without writing std:: every time.
// So instead of std::cout, you can directly write cout.

// cin >> a >> b; →
// Takes two integers as input from the user.

// cout << ...; →
// Prints output with both variables displayed on separate lines.