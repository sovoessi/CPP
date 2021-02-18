#include <iostream>
#include <cmath>
using namespace std;

int main(void){

    float length = 0.0F;
    float width = 0.0F;
    double area = 0.0;
    double paint = 0;
    const int CONVERSION_RATE = 350;

    
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    area = length * width;

    paint = ceil(area / CONVERSION_RATE);

    cout <<"You will need to purchase "<< paint 
    << " gallons of\npaint to cover " << area << " square feet";


    return 0;
}