#include <iostream>
using namespace std;

struct Car {
    string Stamp;
    int Mileage;
    string Engine;
    bool AutomationOrMechanics;
};




int main()
{
    setlocale(LC_ALL, "ru");
    int vibor;
    const int size = 5;
    Car Cars[size] = {
        { "BMW", 10000, "petrol" , true},
        { "BMW", 350000, "petrol" , false},
        { "Tesla", 100000, "electric" , true},
        { "Audi", 90000, "diesel" , true},
        { "Toyota", 190000, "petrol" , false},
    };
    cout << "Выбюерите по какому критерию выбираете машину" << endl;
    cout << "1. Марка" << endl;
    cout << "2. Пробег" << endl;
    cout << "3. Тип двигателя " << endl;
    cout << "4. Автомат либо механика" << endl;
    cin >> vibor;

    switch (vibor)
    {
    case 1:
        cout << "Введите марку: ";
        string brname;
        cin >> brname;
        for (int i = 0; i < size; i++)
        {
            if (Cars[i].Stamp == "BMW")
            {
                cout << Cars[i].Stamp << " ";
            }
        }
        break;
    }
}


