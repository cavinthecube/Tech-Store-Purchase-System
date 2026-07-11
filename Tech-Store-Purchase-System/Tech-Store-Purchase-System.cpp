#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string name;
    string lastName;
    double prices[8];
    int selectedItems[10];
    int quantities[10];
    int numItems;
    prices[0] = 150.00;
    prices[1] = 250.00;
    prices[2] = 100.00;
    prices[3] = 500.00;
    prices[4] = 750.00;
    prices[5] = 1200.00;
    prices[6] = 1000.00;
    prices[7] = 300.00;
    double subtotal = 0.0;
    double discount = 0.0;
    double finaltotal = 0.0;

    cout << "Enter first name: ";
    cin >> name;
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "Tech Store Catalogue:" << endl;
    cout << "1. Wireless Mouse - R150.00" << endl;
    cout << "2. Bluetooth Speaker - R250.00" << endl;
    cout << "3. USB Flash Drive - R100.00" << endl;
    cout << "4. Gaming Keyboard - R500.00" << endl;
    cout << "5. Noise-Cancelling Headphones - R750.00" << endl;
    cout << "6. Smartwatch - R1200.00" << endl;
    cout << "7. External Hard Drive - R1000.00" << endl;
    cout << "8. Portable Charger - R300.00" << endl;
    cout << "How many different items would you like to purchase (up to 10)? ";
    cin >> numItems;

    if (numItems < 1 || numItems > 10)
    {
        cout << "Invalid number! Please enter between 1 and 10." << endl;
        return 1;
    }
    for (int i = 0; i < numItems; i++)
    {
        cout << "Enter item number (1-8): ";
        cin >> selectedItems[i];
        cout << "Enter quantity: ";
        cin >> quantities[i];
    }

    for (int i = 0; i < numItems; i++)
    {
        int itemIndex = selectedItems[i] - 1;
        subtotal += prices[itemIndex] * quantities[i];
    }
    if (subtotal > 2000.00)
    {
        discount = subtotal * 0.15;
        finaltotal = subtotal - discount;
    }
    else
    {
        discount = 0.0;
        finaltotal = subtotal;
    }
    cout << fixed << setprecision(2);
    cout << "Subtotal: R" << subtotal << endl;
    cout << "Discount: R" << discount << endl;
    cout << "Final Total: R" << finaltotal << endl;
    return 0;
}