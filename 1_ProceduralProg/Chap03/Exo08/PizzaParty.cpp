#include <iostream>


using namespace std;

int main(void){

    int amount_people {0};
    int amount_pizzas {0};
    int slices_per_pizza {0};
    int leftovers {0};

    cout << "How many people? ";
    cin >> amount_people;

    cout << "How many pizzas do you have? ";
    cin >> amount_pizzas;

    cout << "How many slices per pizza do you have? ";
    cin >> slices_per_pizza;

    cout << amount_people << " people with "
        << amount_pizzas << " pizzas" << endl;

    leftovers = amount_pizzas * slices_per_pizza % amount_people;

    cout << "Each person gets " << amount_pizzas * slices_per_pizza / amount_people
            <<  " pieces of pizza." << endl;
    
    cout << "There are "<< leftovers << " leftover pieces.";

    return 0;
}