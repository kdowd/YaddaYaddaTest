#include <iostream>
#include <string>

using namespace std;

int main()
{
    string message = "Hello, World 2026 !!";
    cout << string(100, '#');
    cout << string(1000, '#');

    cout << message << "\t" << message.length() << endl;
    return 0;

}