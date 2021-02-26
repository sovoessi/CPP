#include <iostream>

using namespace std;

int main(void){

    int numOfYears;
    float principal, rateOfInterest, investment;

    cout << "Enter the principal: ";
    cin >> principal;

    cout << "Enter the rate of interest: ";
    cin >> rateOfInterest;

    cout << "Enter the number of years: ";
    cin >> numOfYears;

    investment = principal * (1 + rateOfInterest/100 *numOfYears);

    cout << "After " << numOfYears 
        <<" years at " << rateOfInterest 
        << "%, the investment will be worth $"
        << investment;

    return 0;
}