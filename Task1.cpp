//Користувач вводить натуральне число. Побудувати трикутник Флойда з відповідною кількістю рядків: 
#include<iostream>
using namespace std;
int main1()
{
    int i, j, k;
    cin >> i;
    for (j = 0; j <= i; ++j) {
        for (k = 1; k <= j; ++k) {
            cout << k;
        }
        cout << "\n";
    }
    return 0;
}