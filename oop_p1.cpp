// Here's an updated version of your program with fixed pricing and bill generation:

#include <iostream>
#include <string>
using namespace std;

// Food class
class Food {
public:
    void displayMenu() {
        string name;
        cout << "----------Tops Tech. Fast Food----------" << endl;
        cout << "Please Enter Your Name: ";
        cin >> name;
        cout << "Hello " << name << endl;
        cout << endl;
        cout << "What would you like to order?" << endl;
        cout << endl;
        cout << "--------Menu-------- " << endl;
        cout << "1) Pizzas" << endl;
        cout << "2) Burgers" << endl;
        cout << "3) Sandwich" << endl;
        cout << "4) Rolls" << endl;
        cout << "5) Biryani" << endl;
    }

    // Function to get sub menu
    void getMenu() {
        int number;
        cout << "Please Enter Your choice: ";
        cin >> number;
        switch (number) {
            case 1:
                cout << "Pizzas" << endl;
                cout << "1 Margherita pizza rs: 100" << endl;
                cout << "2 Veg pizza rs: 150" << endl;
                cout << "3 Salad pizza rs: 200" << endl;
                break;
            case 2:
                cout << "Burgers" << endl;
                cout << "1 Classic burger rs: 100" << endl;
                cout << "2 Cheese burger rs: 150" << endl;
                cout << "3 Greek burger rs: 200" << endl;
                break;
            case 3:
                cout << "Sandwich" << endl;
                cout << "1 Club Sandwich rs: 100" << endl;
                cout << "2 Veg crispy Sandwich rs: 150" << endl;
                cout << "3 Extreme veg Sandwich rs: 200" << endl;
                break;
            case 4:
                cout << "Rolls" << endl;
                cout << "1 Franchise Rolls rs: 100" << endl;
                cout << "2 Spring Rolls rs: 150" << endl;
                cout << "3 Veg Rolls rs: 200" << endl;
                break;
            case 5:
                cout << "Biryani" << endl;
                cout << "1 Veg biryani rs: 100" << endl;
                cout << "2 Dam biryani rs: 150" << endl;
                cout << "3 Basmati rice biryani rs: 200" << endl;
                break;
            default:
                cout << "Invalid number you entered" << endl;
                break;
        }
    }

    // Function to generate bill
    void generateBill() {
        char cont = 'y';
        float total = 0;
        while (cont == 'y' || cont == 'Y') {
            int choice;
            int quantity;
            int price = 0;
            getMenu();
            cout << "Please Enter which one you like to have? " << endl;
            cin >> choice;
            switch (choice) {
                case 1:
                    price = 100;
                    break;
                case 2:
                    price = 150;
                    break;
                case 3:
                    price = 200;
                    break;
                default:
                    cout << "You entered invalid choice";
            }
            cout << "Please Enter Quantity: ";
            cin >> quantity;
            total += price * quantity;
            cout << endl;
            cout << "-----------------Your Order-----------------" << endl;
            cout << "Your Total Bill Is: " << total << endl;
            cout << "Your Order Will be delivered in 40 minutes \n" << endl;
            cout << "Thank you For Ordering From Tops Tech Fast Food " << endl;
            cout << "Would you like to order anything else? Y / N: ";
            cin >> cont;
        }
    }
};

int main() 
{
    Food m;
    m.displayMenu();
    m.generateBill();
    return 0;
}


