
#include <iostream>
#include <string>

using namespace std;

int main() {
    string choice;
    int total = 0;
    bool ordering = true;

    while (ordering) {
        cout << "What would you like to order?\n";
        cout << "1. Burger Hub\n";
        cout << "2. Pizza Station\n";
        cin >> choice;

        if (choice == "1") {
            string burgerType, cheese;
            int burgerPrice = 0;

            cout << "Would you like chicken or beef?\n";
            cin >> burgerType;

            if (burgerType == "chicken") {
                burgerPrice += 350;
            } else if (burgerType == "beef") {
                burgerPrice += 400;
            }

            cout << "Would you like your burger with cheese (y/n)?\n";
            cin >> cheese;

            if (cheese == "y") {
                burgerPrice += 50;
            }

            total += burgerPrice;

            cout << "Make it a meal with fries and drink (y/n)?\n";
            cin >> choice;

            if (choice == "y") {
                total += 150;
            }

            cout << "Your total is: Rs. " << total << endl;
        } else if (choice == "2") {
            string size, crust, flavor;
            int pizzaPrice = 0;

            cout << "What size pizza would you like (small, medium, large)?\n";
            cin >> size;

            if (size == "small") {
                pizzaPrice += 500;
            } else if (size == "medium") {
                pizzaPrice += 800;
            } else if (size == "large") {
                pizzaPrice += 1000;
            }

            cout << "Would you like stuffed crust (y/n)?\n";
            cin >> crust;

            if (crust == "y") {
                pizzaPrice += 200;
            }

            cout << "What flavor would you like (Fajita or Pepperoni)?\n";
            cin >> flavor;

            if (flavor == "Fajita") {
                pizzaPrice += 100;
            } else if (flavor == "Pepperoni") {
                pizzaPrice += 150;
            }

            total += pizzaPrice;

            cout << "Make it a meal with fries and drink (y/n)?\n";
            cin >> choice;

            if (choice == "y") {
                total += 150;
            }

            cout << "Your total is: Rs. " << total << endl;
        }

        cout << "Would you like to place another order (y/n)?\n";
        cin >> choice;

        if (choice == "n") {
            ordering = false;
        } else {
            total = 0;
        }
    }

    return 0;
}


