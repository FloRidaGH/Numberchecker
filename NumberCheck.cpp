#include <iostream>
#include <limits>

using namespace std;

int getPositiveInteger() {
    int number;
    
    while (true) {
        cout << "Введите положительное целое число: ";
        cin >> number;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка: введено не целое число. Пожалуйста, попробуйте снова." << endl;
        }
        
        else if (number <= 0) {
            cout << "Ошибка: число должно быть положительным. Пожалуйста, попробуйте снова." << endl;
        }
        else {
            return number;
        }
    }
}

int main() {
    int userInput = getPositiveInteger();
    
    cout << "Вы ввели положительное число: " << userInput << endl;

    return 0;
}
