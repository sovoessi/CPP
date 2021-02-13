#include <iostream>
#include <string>

using namespace std;


int main(int argc, char * argv[]){

    string input = "";
    cout << "What is the input string? ";
    cin >> input;
    int len = input.length();
    cout << input << " has " << len << " characters.";
}