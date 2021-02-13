#include <iostream>
#include <iomanip>

inline float calculate_tip(float, float);
inline float calculate_total(float, float);
void display_amount(float);

using namespace std;

int main(){

    float billAmount {};
    float tipRate {};

    float tip {};
    float total {};

    cout << "What is the bill amount?: "; cin >> billAmount;
    cout << "What is the tip rate? (Enter 10 for 10%): "; cin >> tipRate;

    tip = calculate_tip(billAmount, tipRate);
    total = calculate_total(billAmount, tip);

    cout << "Tip: $";
    display_amount(tip);
    
    cout << "Total: $";
    display_amount(total);

    return 0;
}


float calculate_tip(float billAmount, float tipRate){
    return billAmount * tipRate /100;    
}

float calculate_total(float billAmount, float tip){
    return billAmount + tip;
}

void display_amount(float amount){
     cout << setiosflags(ios::fixed)             //fixed (not exponential)
            << setiosflags(ios::showpoint)      //always show decimal point
            << setprecision(2)                  //two decimal places
            << setw(4)                           //field width 4
            << amount
            << endl;
}