#include <iostream>
using namespace std;

int main()
{
    string name, student_ID, IC_number;
    int age, unit, product_code, coupon_ID, products;
    double discount = 0.0;
    double discount_senior = 0.0;
    double subtotal = 0.0;
    double discountS = 0.0;
    double price = 0.0;
    double grand_total = 0.0;
    char student;
    
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your IC number: ";
    cin >> IC_number;
    cout << "Enter your age: ";
    cin >> age;
    if (age > 7 && age <= 25)
    {
        cout << "Are you a student? (Y/N): ";
        cin >> student;
    }
    else
    {
        student = 'N';
    }
    
    if (student == 'Y' || student == 'y')
    {
        cout << "Please enter a Student ID to verify: ";
        cin >> student_ID;
    }
    else if (student == 'N' || student == 'n')
    {
        cout << "Proceeding as regular customer." << endl;
    }
    else
    {
        cout << "Invalid input!" << endl;
        return 0;
    }
    if (age >= 60)
    {
        switch (product_code)
        {
            case 1:
                discount_senior = 350 * 0.05 * unit;
                break;
            case 2:
                discount_senior = 200 * 0.05 * unit;
                break;
            case 3:
                discount_senior = 500 * 0.08 *unit;
                break;
            case 4:
                discount_senior = 250 * 0.05 * unit;
                break;
            case 5:
                discount_senior = 800 * 0.06 * unit;
                break;
            case 6:
                discount_senior = 600 * 0.07 * unit;
                break;
        }
    }
    cout << "\n ---- Start Shopping ----" <<endl;
    do
    {
    cout << " -----------------------------------------------" << endl;
    cout << "current Subtotal: RM " << price <<endl;
    cout << "Please enter the product code (1 - 6) or press 0 to checkout: ";
    cin >> product_code;
    if (product_code == 0)
    {
        break;
    }
    if (product_code < 1 || product_code > 6)
    {
        cout << "Invalid Product Code!" << endl;
        continue;
    }

    {
        switch(product_code)
        {
        case 1:
            cout << "How many SmartWatch Pros do you want to buy? ";
            cin >> unit;
            price += 350 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 350 * 0.10 * unit; 
                }
            }
            break;
        case 2:
            cout << "How many Wireless Earbuds do you want to buy? ";
            cin >> unit;
            price += 200 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 200 * 0.12 * unit; 
                }
            }
            break;
        case 3:
            cout << "How many Smart Home Kits do you want to buy? ";
            cin >> unit;
            price += 500 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 500 * 0.15 * unit; 
                }
            }
            break;
         case 4:
            cout << "How many Gaming Keyboards do you want to buy? ";
            cin >> unit;
            price += 250 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 250 * 0.08 * unit; 
                }
            }
            break;
         case 5:
            cout << "How many 4k Action Camera do you want to buy? ";
            cin >> unit;
            price += 800 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 800 * 0.10 * unit; 
                }
            }
            break;
         case 6:
            cout << "How many Portable Projector do you want to buy? ";
            cin >> unit;
            price += 600 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 600 * 0.12 * unit; 
                }
            }
            break;
        }
    }
} while(true);
discount = discountS + discount_senior;
grand_total = price - discountS - discount_senior;


  cout << "\n================= SALES RECEIPT =================" << endl;
    cout << "Customer Name: " << name << endl;
    cout << "IC Number:     " << IC_number << endl;
    cout << "Age:           " << age << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Subtotal:      $ " << price << endl;
    cout << "Discount:      - $ " << discountS << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "GRAND TOTAL:   $ " << grand_total << endl;
    cout << "=================================================" << endl;
}
