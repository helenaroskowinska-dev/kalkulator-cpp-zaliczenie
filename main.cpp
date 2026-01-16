#include <iostream>

using namespace std;

int main() {
    double liczba1, liczba2; // Deklaracja zmiennych

    // Pobieranie danych od użytkownika
    cout << "Podaj pierwszą liczbę (odjemna): ";
    cin >> liczba1;

    cout << "Podaj drugą liczbę (odjemnik): ";
    cin >> liczba2;

    // Wykonanie odejmowania
    double wynik = liczba1 - liczba2;

    // Wyświetlenie wyniku
    cout << "Wynik odejmowania: " << wynik << endl;

    return 0;
}