#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Division by zero is not possible";
    } else {
        cout << "Division = " << (float)a / b;
    }

    return 0;
}


WITH EXCEPTION HANDLING:

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw b;
        }
        cout << "Division = " << (float)a / b;
    }
    catch (int x) {
        cout << "Exception: Division by zero is not allowed!";
    }

    return 0;
}