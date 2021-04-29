#include <iostream>
#include <string>

using namespace std;

int main()
{

    char str[20] = "hhw22";

    int len = strlen(str);
    if (len < 2) return 0;
    int tail = 1;
    for (int i = 1; i < len; ++i) {
        int j;
        for (j = 0; j < tail; ++j) {
            if (str[i] == str[j]) {
                if (isdigit(str[i])) {
                    break;

                }
            }
        }
        if (j == tail) {
            str[tail] = str[i];
            ++tail;
        }
    }

    str[tail] = 0;


    cout << str;
    return 0;

}