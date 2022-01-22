#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string arrangeString(string str);

int main()
{

    cout << arrangeString("ACCBA10D2EW30") << endl;

    return 0;
}

string arrangeString(string str)
{
    int loop = str.size(), number = 0, counter = 0;
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char numbersChar[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    string Result = "";
    for (int i = 0; i < loop; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (str[i] == numbersChar[j])
            {
                number += numbers[j];
                counter++;
                break;
            }
        }
        if (counter == 0)
        {
            Result += str[i];
        }
        counter = 0;
    }
    sort(Result.begin(), Result.end());
    if (number != 0)
    {
        Result += to_string(number);
    }
    return Result;
}