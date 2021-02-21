#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int item1, qty1, item2, qty2, item3, qty3;
    const float TAX = 0.055;

    cout << "Enter the price of item 1: ";
    cin >> item1;
    cout << "Enter the quantity of item 1: ";
    cin >> qty1;

    cout << "Enter the price of item 2: ";
    cin >> item2;
    cout << "Enter the quantity of item 2: ";
    cin >> qty2;

    cout << "Enter the price of item 3: ";
    cin >> item3;
    cout << "Enter the quantity of item 3: ";
    cin >> qty3;

    int subtotal = (item1 * qty1) + (item2 * qty2) + (item3 * qty3) ;
    float paid_tax = subtotal * TAX;

    cout << "Subtotal: $"<< fixed << setprecision(2) <<(float) subtotal  << endl;
    cout << "Tax: $" << paid_tax << endl;
    cout << "Total: $" << subtotal + paid_tax << endl;

    return 0;
}
