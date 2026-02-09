#include <iostream>

using namespace std;

int main() {
    int targetWeight;

    int w[5] = {5, 10, 20, 30, 40};
    int max_count = 3;

    cout << "Введите вес, который нужно уравновесить (граммы): ";
    cin >> targetWeight;
    // если пользователь ввел минусовое значние или буквы
    if (!cin || targetWeight <= 0) {
        cout << "Ошибка: Вы ввели не число" << endl;
        return 0;
    }

    bool found = false;
    // перебираем гири все 
    for (int x1 = 0; x1 <= max_count; x1++) {
        for (int x2 = 0; x2 <= max_count; x2++) {
            for (int x3 = 0; x3 <= max_count; x3++) {
                for (int x4 = 0; x4 <= max_count; x4++) {
                    for (int x5 = 0; x5 <= max_count; x5++) {
                        // считаем вес гирь
                        int sum = w[0]*x1 + w[1]*x2 + w[2]*x3 + w[3]*x4 + w[4]*x5;
                        // выводим
                        if (sum == targetWeight) {
                            cout << "\nМожно уравновесить чашу гирями:\n";
                            cout << w[0] << " г: " << x1 << endl;
                            cout << w[1] << " г: " << x2 << endl;
                            cout << w[2] << " г: " << x3 << endl;
                            cout << w[3] << " г: " << x4 << endl;
                            cout << w[4] << " г: " << x5 << endl;

                            found = true;
                            break;
                            // return 0;
                        }
                    }
                }
            }
        }
    }

    if (!found) {
        cout << "Уравновесить вес невозможно с данными гирями." << endl;
    }

    return 0;
}