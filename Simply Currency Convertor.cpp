#include <iostream>
#include <string>

using namespace std;

int main() {
    double dollars;
    double euros;
    double sterling_pounds;
    string currency1;
    string currency2;
    cout << "Hello! Welcome to..." << endl << "$The Currency Shop$!" << endl
        << "What currency would you like to exchange?" << endl
        << "Dollars, Euros or Pounds?" << endl;
    cin >> currency1;
    if (currency1 == "Dollars") {
        cout << "How many dollars would you like to exchange?" << endl;
        cin >> dollars;
        cout << "In which currency do you want to exchange?" << endl;
        cin >> currency2;
        if (currency2 == "Euros") {
            euros = 0.92 * dollars;
            cout << "Here you go!" << endl << euros;
        }
        else if (currency2 == "Pounds") {
            sterling_pounds = 1.26 * dollars;
            cout << "Here you go!" << endl << sterling_pounds;
        }
    }
    if (currency1 == "Euros") {
        cout << "How many euros would you like to exchange?" << endl;
        cin >> euros;
        cout << "In which currency do you want to exchange?" << endl;
        cin >> currency2;
        if (currency2 == "Dollars") {
            dollars = 1.08 * euros;
            cout << "Here you go!" << endl << dollars;
        }
        else if (currency2 == "Pounds") {
            sterling_pounds = 0.86 * euros;
            cout << "Here you go!" << endl << sterling_pounds;
        }
    }

    if (currency1 == "Pounds") {
        cout << "How many pounds would you like to exchange?" << endl;
        cin >> sterling_pounds;
        cout << "In which currency do you want to exchange?" << endl;
        cin >> currency2;
        if (currency2 == "Dollars") {
            dollars = 1.26 * sterling_pounds;
            cout << "Here you go!" << endl << dollars;
        }
        else if (currency2 == "Euros") {
            euros = 1.17 * sterling_pounds;
            cout << "Here you go!" << endl << euros;
        }
    }
    return 0;
}
