/* Write a program of C++ to input basic salary and then calculate income tax as per given Condition.
_____________________________
|  Basic salary  | IncomeTax| 
|     <5000      |    0%    |
|  >=5000&<7000  |    3%    |
|  >=7000&<10000 |    4%    |
|     >=10000    |    5%    |
-----------------------------    */

#include <iostream>
using namespace std;

int main(){
    int s;

    cout << "enter your salary: ";
    cin >> s;

    if (s < 5000) {
        cout << "your income tax is 0%";
    }
    else if (s >= 5000 && s < 7000) 
    {
        cout << "your income tax is 3%";
    }
    else if (s >= 7000 && s < 10000) 
    {
        cout << "your income tax is 4%";
    }
    else 
    {
        cout << "your income tax is 5%";
    }
}