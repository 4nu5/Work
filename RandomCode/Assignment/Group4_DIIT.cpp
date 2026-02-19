#include <iostream>     // <-- FOR INPUT/ OUTPUT
#include <string>       // <-- FOR STRINGS
using namespace std;    // <-- TO AVOID USING STD::

int main()
{   //VARIABLE DECLARATION
    string name, student_ID, coupon_ID, IC_number;      // STRING IS USED TO OUTPUT EXACTLY WHAT WAS PUT IN
    int age, unit, product_code;
    int counter = 0, index = 0;
    int N_counter = 0, N_index = 0;
    double coupon = 0.0;                //    
    double discount = 0.0;              //     
    double discount_senior = 0.0;       //   THE REASON FOR THE 0.0 
    double subtotal = 0.0;              //   IS TO AVOID GARBAGE VALUES
    double discountS = 0.0;             //   IN THE OUTPUT SECTION
    double price = 0.0;                 //    
    double grand_total = 0.0;           //
    char student, senior, Coupon;       /* <-- THE CHAR IS FOR TRUE OR FALSE STATEMENTS*/
    

    //   INPUTS
    //     |
    //     V                     
    do                                          /*THIS FUCTION IS TO MAKE SURE THE NAME ENTERED HAS PROPER CHARACTERS*/
    {
        cout << "Please enter your name: ";
        getline(cin, name);                     // GETLINE IS USED TO OUTPUT WHITE SPACES
    while (name[N_index] != '\0')               //BASIC LOOP TO COUNT THE STRING
    {
            N_counter++;
            N_index++;
        
        if ((name[N_index] >= 'A' && name[N_index] <= 'Z'))
        {
            break;
        }
        else if ((name[N_index] >= 'a' && name[N_index] <= 'z'))
        {
            break;
        }
        else if (name[N_index] == ' ')
        {
            break;
        }
        else
        {
            cout << "INVALID CHARACTER IN THE NAME, PLEASE REENTER NAME" << endl;
            N_counter = 0;
            N_index = 0;
            break;
         }
    }
    } while (N_counter == 0);            /*FUNCTION ENDS*/
    
    do                                      /*THIS FUNCTION IS TO ENSURE THE IC NUMBER IS 12 DIGITS*/
    {
    cout << "Enter your IC number: ";       
    cin >> IC_number;
    while (IC_number[index] != '\0')            //BASIC LOOP TO COUNT THE STRING
    {
        if ((IC_number[index] >= '0' && IC_number[index] <= '9'))
        {
            counter++;
            index++; 
        }
        else
        {
                cout << "ENTER VALID IC NUMBER" << endl;
                counter = 0;
                index = 0;
                break;   
        }
    }
    if (index != 12)
        {
            cout << "ENTER VALID IC NUMBER" << endl;
            counter = 0;
            index = 0;
        }
    } while (counter != 12);                         /*FUNCTION ENDS*/
    do                                   /*THIS FUNCTION IS TO ENSURE THE AGE ENTERED IS VALID*/
    {
        cout << "Enter your age: ";
        cin >> age;
        if (age >= 1 || age < 125)
        {
            continue;
        }
       else
        {
            cout << "Invalid AGE" << endl;
        }
    } while (age <= 1 || age > 125);             /*FUNCTION ENDS*/
           
            //PROCESS
            //   |
            //   V
    if (age > 7 && age <= 25)                    /* THIS FUNCTION IS TO DECLARE THAT THE USER IS A STUDENT*/
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
        cout << "Proceeding..." << endl;
    }
    else
    {
        cout << "Invalid input!" << endl;
        return 0;                                               /*FUNCTION ENDS*/
    }
    if (age > 59)                 /* THIS FUNCTION IS TO DECLARE THE PERSON IS A SENIOR*/
    {
        senior = 'Y';
    }
    else
    {
        senior = 'N';             /*FUNCTION ENDS*/
    }
    cout << "\n\t\t ---- Start Shopping ----\n" <<endl;                             /*DISPLAY*/
    do      /*LOOP START*/
    {
    cout << "*--------------------------------------------------- *"  << endl;      /*DISPLAY*/
    cout << "| |-------------------------------------------------| |" << endl;          
    cout << "| |   PRODUCT LIST     |       |Price|       | Code | |" << endl;
    cout << "| |--------------------|-------|-----|-------|------| |" << endl;
    cout << "| |  SmartWatch Pros   | ----- |RM350| ----- |  (1) | |" << endl;
    cout << "| |  Wireless Earbuds  | ----- |RM200| ----- |  (2) | |" << endl; 
    cout << "| |  Smart Home Kits   | ----- |RM500| ----- |  (3) | |" << endl;
    cout << "| |  Gaming Keyboard   | ----- |RM250| ----- |  (4) | |" << endl;
    cout << "| |  4k Action Camera  | ----- |RM800| ----- |  (5) | |" << endl;
    cout << "| | Portable Projector | ----- |RM600| ----- |  (6) | |" << endl;
    cout << "| |-------------------------------------------------| |" << endl;
    cout << "*--------------------------------------------------- *" << endl;       /*DISPLAY ENDS*/
    cout << "current Subtotal: RM " << price <<endl;    // TALLY FOR ALL THE PRODUCTS BEFORE DISCOUNTS
    cout << "Please enter the product code (1 - 6) or press 0 to checkout: "; // USER INPUTS THE PRODUCT THE WANT TO BUY
    cin >> product_code;
    if (product_code == 0) //THIS FUNCTION IS TO BRING THE USER TO CHECOUT AND BREAK THE LOOP
    {
        break;
    }
    if (product_code < 1 || product_code > 6) //FOR INVALID PRODUCT CODE
    {
        cout << "Invalid Product Code!" << endl;
        continue;
    }

    {
        switch(product_code)    /* START OF THE MAIN CALCULATION FUCTION */
        {
        case 1: // FOR SMARTWATCH PROS
            cout << "How many SmartWatch Pros do you want to buy? ";   // PROMPTS THE USER FOR THE AMOUNT OF UNITS
            cin >> unit;
            cout << "Do You Have A Coupon for this product? (Y/N):  "; // ASKS THE USER IF THEY HAVE A DISCOUNT CODE
            cin >> Coupon;
            price += 350 * unit; // CALCULATES SUBTOTAL
            {
                if (student == 'Y' || student == 'y') // APPLIES & CALCULATES STUDENT DISCOUNT
                {
                   discountS += 350 * 0.15 * unit; 
                }
                else if (senior == 'Y') // APLLIES & CALCULATES SENIOR DISCOUNT
                {
                    discount_senior += 350 * 0.05 * unit;
                }
            }
            {
                if (Coupon == 'Y' || Coupon == 'y') // APPLIES & CALCULATES VALID COUPONS
                {
                    cout << "Please Enter A Valid Coupon: ";
                    cin >> coupon_ID;
                    if (coupon_ID == "SMARTPRO10") // THE NAME OF THE COUPON TO VERIFY
                    {
                        coupon = 350 * 0.10 * unit;
                    }
                    else 
                    {
                        cout << "Invalid Coupon!" << endl;
                    }
                }
                else 
                {
                    cout << "No Coupon Applied" << endl; // IF THERE IS NO COUPON
                }
            }
            break;
        case 2: // FOR WIRELESS EARBUDS
            cout << "How many Wireless Earbuds do you want to buy? ";  /* REFER TO CASE 1 FOR INFORMATION ON THE GIVEN FUNCTIONS */
            cin >> unit;
            cout << "Do You Have A Coupon for this product? (Y/N):  ";
            cin >> Coupon;
            price += 200 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 200 * 0.10 * unit; 
                }
                else if (senior == 'Y')
                {
                    discount_senior += 200 * 0.05 * unit;
                }
                if (Coupon == 'Y' || Coupon == 'y')
                {
                    cout << "Please Enter A Valid Coupon: ";
                    cin >> coupon_ID;
                    if (coupon_ID == "EARBUDS12")
                    {
                        coupon = 200 * 0.12 * unit;
                    }
                    else
                    {
                        cout << "Invalid Coupon!" << endl;
                    }
                }
                else
                {
                    cout << "No Coupon Applied" << endl;
                }
            }
            break;
        case 3: // FOR SMART HOME KITS
            cout << "How many Smart Home Kits do you want to buy? "; /* REFER TO CASE 1 FOR INFORMATION ON THE GIVEN FUNCTIONS */
            cin >> unit;
            cout << "Do You Have A Coupon for this product? (Y/N):  ";
            cin >> Coupon;
            price += 500 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 500 * 0.12 * unit; 
                }
                else if (senior == 'Y')
                {
                    discount_senior += 500 * 0.08 * unit;
                }
                if (Coupon == 'Y' || Coupon == 'y')
                {
                    cout << "Please Enter A Valid Coupon: ";
                    cin >> coupon_ID;
                    if (coupon_ID == "SMARTKIT15")
                    {
                        coupon = 500 * 0.15 * unit;
                    }
                    else
                    {
                        cout << "Invalid Coupon!" << endl;
                    }
                }
                else
                {
                    cout << "No Coupon Applied" << endl;
                }
            }
            break;
         case 4: //FOR GAMING KEYBOARDS
            cout << "How many Gaming Keyboards do you want to buy? ";  /* REFER TO CASE 1 FOR INFORMATION ON THE GIVEN FUNCTIONS */
            cin >> unit;
            cout << "Do You Have A Coupon for this product? (Y/N):  ";
            cin >> Coupon;
            price += 250 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 250 * 0.10 * unit; 
                }
                else if (senior == 'Y')
                {
                    discount_senior += 250 * 0.05 * unit;
                }
                if (Coupon == 'Y' || Coupon == 'y')
                {
                    cout << "Please Enter A Valid Coupon: ";
                    cin >> coupon_ID;
                    if (coupon_ID == "KEYBOARD8")
                    {
                        coupon = 250 * 0.08 * unit;
                    }
                    else
                    {
                        cout << "Invalid Coupon!" << endl;
                    }
                }
                else
                {
                    cout << "No Coupon Applied" << endl;
                }
            }
            break;
         case 5: // FOR 4K ACTION CAMERA
            cout << "How many 4k Action Camera do you want to buy? ";  /* REFER TO CASE 1 FOR INFORMATION ON THE GIVEN FUNCTIONS */
            cin >> unit;
            cout << "Do You Have A Coupon for this product? (Y/N):  ";
            cin >> Coupon;
            price += 800 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 800 * 0.08 * unit; 
                }
                else if (senior == 'Y')
                {
                    discount_senior += 800 * 0.06 * unit;
                }
                if (Coupon == 'Y' || Coupon == 'y')
                {
                    cout << "Please Enter A Valid Coupon: ";
                    cin >> coupon_ID;
                    if (coupon_ID == "CAMERA10")
                    {
                        coupon = 800 * 0.10 * unit;
                    }
                    else
                    {
                        cout << "Invalid Coupon!" << endl;
                    }
                }
                else
                {
                    cout << "No Coupon Applied" << endl;
                }
            }
            break;
         case 6: // FOR PORTABLE PROJECTOR
            cout << "How many Portable Projector do you want to buy? "; /* REFER TO CASE 1 FOR INFORMATION ON THE GIVEN FUNCTIONS */
            cin >> unit;
            cout << "Do You Have A Coupon for this product? (Y/N):  ";
            cin >> Coupon;
            price += 600 * unit;
            {
                if (student == 'Y' || student == 'y')
                {
                   discountS += 600 * 0.10 * unit; 
                }
                else if (senior == 'Y')
                {
                    discount_senior += 600 * 0.07 * unit;
                }
                if (Coupon == 'Y' || Coupon == 'y')
                {
                    cout << "Please Enter A Valid Coupon: ";
                    cin >> coupon_ID;
                    if (coupon_ID == "PROJECTOR12")
                    {
                        coupon = 600 * 0.12 * unit;
                    }
                    else
                    {
                        cout << "Invalid Coupon!" << endl;
                    }
                }
                else
                {
                    cout << "No Coupon Applied" << endl;
                }
            }
            break; 
        }
    }
} while(true);  /* END OF THE MAIN CALCULATION FUCTION */

discount = discountS + discount_senior; // TO CALCULATE TOTAL DISCOUNTS
grand_total = price - discountS - discount_senior - coupon; // TO CALCULATE GRAND TOTAL
                                //OUTPUT
                                //  |
                                //  V
  cout << "\n================= FINAL TOTAL =================" << endl;      /* DISPLAY FOR TOTAL*/
    cout << "Customer Name: " << name << endl;
    cout << "IC Number:     " << IC_number << endl;
    cout << "Age:           " << age << endl;
    if (student == 'Y' || student == 'y')
    {
        cout <<             "Student ID: " << student_ID << endl; 
    }
    cout << "-------------------------------------------------" << endl;
    cout << "Subtotal:        RM " << price << endl;
    cout << "Discount:      - RM " << discount << endl;
    cout << "Coupon :       - RM " << coupon << endl; 
    cout << "-------------------------------------------------" << endl;
    cout << "GRAND TOTAL:   RM " << grand_total << endl;
    cout << "=================================================" << endl;    /* DISPLAY FOR TOTAL*/
}
