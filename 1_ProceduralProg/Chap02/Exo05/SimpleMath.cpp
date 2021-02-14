#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(int argc, char *argv[]){

    long int fnum = 0LL, snum = 0LL;
    
    cout << "What is the first number? ";
    cin >> fnum;

    cout << "What is the second number? ";
    cin  >> snum;

    cout << fnum << " + " << snum
            << " = " << (fnum + snum) <<endl;
    
    cout << fnum << " - " << snum
            << " = " << (fnum - snum) <<endl; 
            
    cout << fnum << " * " << snum
            << " = " << (fnum * snum) <<endl; 
            
    cout << fnum << " / " << snum
            << " = " << (fnum / snum) <<endl;

    return 0;
}