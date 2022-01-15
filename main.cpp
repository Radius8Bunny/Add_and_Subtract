#include <iostream>

using namespace std;

// 0 for subtract, 1 for add

int first_number;
int second_number;
int operation;

int main(int argc, char* argv[])
{
    cout << "what is the first number: " << endl;
    cin >> first_number;
    cout << "what is the second number: " << endl;
    cin >> second_number;
    cout << "what is the operation: " << endl;
    cin >> operation;

    if (operation == 0){
        cout << first_number - second_number << endl;
    }

    if (operation == 1){
        cout << first_number + second_number << endl;
    }
}
