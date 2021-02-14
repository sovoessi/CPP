#include <iostream>
#include <ctime>

int getActualYear();

using namespace std;


int main(){

    int currentAge {0};
    int retireAge {0};

    int diffAge{0};

    cout << "What is your current age? ";
    cin >> currentAge;

    cout << "At what age would you like to retire? ";
    cin >> retireAge;

    diffAge = retireAge - currentAge;

    cout << "You have " << diffAge << " years left until you can retire." << endl;
    cout << "It's " << getActualYear() << ", so you can retire in " 
            << getActualYear() + diffAge <<  "." << endl;
    return 0;
}

int getActualYear(){
    time_t t = time(nullptr);
    tm *const pTInfo = localtime(&t);
    return 1900 + pTInfo->tm_year;
}