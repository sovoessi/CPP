#include <iostream>
#include <string>

using namespace std;


int main(){

    string quote ("");
    string author ("");

    cout << "What is the quote? ";
    getline(cin, quote);
    cout << "Who said it? ";
    getline(cin, author);

    cout << author << " says, " << "\""
        << quote << "\"";

    return 0;
}