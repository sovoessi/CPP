#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]){
    float amount_from = 0.0f;
    float exchange_rate = 0.0f;
    float amount_to = 0.0f;
    
    cout << "How many euros are you exchanging? ";
    cin >> amount_from;

    cout << "What is the exchange rate? ";
    cin >> exchange_rate;

    amount_to = amount_from * exchange_rate / 100;

    cout <<  fixed << setprecision(2) 
            << amount_from << " euros at an exchange rate of "
            << exchange_rate << " is "
            << amount_to << " U.S.dollars.";

    return 0;
}