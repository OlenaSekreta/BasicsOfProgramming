#include <iostream>
using namespace std;
void main()
    {
        cout << "Enter digits:\n";
        int digit;
        cin >> digit;
        int i = 0;
        int digitT = digit;
        int rest = 1;

        while (digitT >= 1 && rest <= 1)
        {
            rest = digitT % 10;
            digitT = digitT / 10;
            i = i + 1;
        }
        int two = 1;
        int sum = 0;
        digitT = digit;
        if (rest > 1)
        {
            cout << "It's not binary!\n";
        }
        else
        {

            while (i > 0)
            {
                rest = digitT % 10;
                digitT = digitT / 10;
                sum = sum + rest * two;
                two = two * 2;
                i = i - 1;
            }
            cout << "Digits: \n"
                << "2-p: " << digit << endl
                << "10-p: " << sum << endl;
        }
      
    }
