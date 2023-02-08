#include "src/gen_number.h"
#include "src/post_process.h"
#include "src/print_menu.h"

using namespace std;

int main() {
  int num;
    int choice;

    num = generateNum(); 

    cout << "The two digit number is: " << num << endl;

    print_menu();
    cin >> choice;

    while (choice != 9)
    {
        switch(choice)
        {
        case 1:
            num = doubleNum(num);
            cout << num << " is not prime." << endl;
            num = addTen(num);
            break;
        case 2:
            num = reverseDigit(num);
            if (isNumPrime(num))
                cout << num << " is prime." << endl;
            else
                cout <<num << " is not prime." << endl;
            num = addTen(num);
            break;
        case 3:
            int exp;
            cout << "Enter power (2, 3, or 4): ";
            cin >> exp;
            cout << "\n";

            num = raisePow2_3_4(num, exp);
            if (isNumPrime(num))
                cout << num << " is prime." << endl;
            else
                cout <<num << " is not prime." << endl;
            num = addTen(num);
            break;
        case 4:
            num = sumDigits(num);
            if (isNumPrime(num))
                cout << num << " is prime." << endl;
            else
                cout <<num << " is not prime." << endl;
            num = addTen(num);
            break;
        case 5:
            num = raiseFirstDigitPowSecondDigit(num);
            if (isNumPrime(num))
                cout << num << " is prime." << endl;
            else
                cout <<num << " is not prime." << endl;
            num = addTen(num);
            break;
        case 6:
            num = raiseFirstAndSecondDigitPowThirdDigit(num);
            if (isNumPrime(num))
                cout << num << " is prime." << endl;
            else
                cout <<num << " is not prime." << endl;
            num = addTen(num);
            break;
        default:
            cout << "Invalid choice." << endl;
        }

        print_menu();
        cin >> choice;
        cout << endl;
    }

	return 0;
}

