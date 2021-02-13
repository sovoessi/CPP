#include <iostream>
#include <string>

using namespace std;

int main(){

    string noun, verb, adjective, adverb;

    cout << "Enter a noun: ";
    getline(cin, noun);
    
    cout << "Enter a verb: ";
    getline(cin, verb);

    cout << "Enter an adjective: ";
    getline(cin, adjective);

    cout << "Enter an adverb: ";
    getline(cin, adverb);

    cout << "Do you " << verb << " your " << adjective
        << " " << noun <<  " " << adverb << "? That's hilarious!";

    return 0;
}