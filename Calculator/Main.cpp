#include <iostream>

using namespace std;

int main(void) {
    char op;
    float num1;
    float num2;
    while (true) {
     num1 = 0;
      num2 = 0;
        cout << "This is a simple calculator Enter:\n+ = Addtion\n - = subtartion\n * = mutication\n / = devition\n E = Ends the program" << endl;
        cout << "Enter one of the opratotrs: ";
        cin >> op;
        cout << endl << "Enter First Number ";
        cin >> num1;
        cout << endl << "Enter Sencend Number ";
        cin >> num2;
        
        if (op == '+'){
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            }
        else if (op == '-'){
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        }
        else if (op == '*'){
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        else if (op == '/'){
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        else if (op == 'E'){
            break;
        }
        else{
            cout << "Something went wrong please enter again"
        ;}

        }
    return 0;
}