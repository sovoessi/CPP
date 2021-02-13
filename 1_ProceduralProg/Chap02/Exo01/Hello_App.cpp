#include <iostream>

using namespace std;


int main(){
    const int MAX = 80;
    char input[MAX];

    cout << "What is your name? ";

    cin.getline(input, MAX);

    cout << "Hello, " 
            << input 
            << " nice to meet you!";

    return 0;
}