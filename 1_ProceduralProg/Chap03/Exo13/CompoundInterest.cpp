#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void){
    float principal_amount = 0.0f;
    float interest_rate = 0.0f;
    unsigned short years_number = 0;
    unsigned short compounded_times = 0;
    float investment_amount = 0.0f;

    cout << "What is the principal amount? ";
    cin >> principal_amount;

    cout << "What is the rate? ";
    cin >> interest_rate;
    interest_rate /=100;

    cout << "What is the number of years? ";
    cin >> years_number;

    cout << "What is the number of times the interest is compounded per year? ";
    cin >> compounded_times;

    investment_amount = principal_amount * pow(
        1 + interest_rate/compounded_times, compounded_times * years_number);
    
   cout << "$" << principal_amount << " invested at " 
        << interest_rate*100 << "% for " << years_number <<" years \ncompounded "
        << compounded_times << " times per year is $" << investment_amount;


    return 0;
}