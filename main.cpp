#include <iostream>

using namespace std;

int main() {
    string input;
    cin >> input;

    if (input == "char")
    {
        cout << sizeof(char) << endl;
    } else if (input == "int")
    {
        cout << sizeof(int) << endl;
    } else if (input == "double")
    {
        cout << sizeof(double) << endl;
    } else if (input == "short")
    {
        cout << sizeof(short) << endl;
    } else if (input == "float")
    {
        cout << sizeof(float) << endl;
    } else if (input == "long")
    {
        cout << sizeof(long) << endl;
    }
    
    

    return 0;
}