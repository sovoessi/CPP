#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char * argv[]){

    float room_length {0.0f};
    float room_width  {0.0f};
    float area {0.0};
    const double CONVERSION_FACTOR = 0.09290304;

    cout << "What is the length of the room in feet? ";
    cin >> room_length;

    cout << "What is the width of the room in feet? ";
    cin >> room_width;

    cout << "You entered dimensions of "<< room_length 
            << " feet by " << room_width << " feet.";
        
    area = room_length * room_width;

    cout << "The area is " << endl;
    cout << area << " square feet" << endl;
    cout << fixed << setprecision(3) << area * CONVERSION_FACTOR;
    cout << " square meters";

    return 0;

}