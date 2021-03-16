/* link:- https://www.w3resource.com/cpp-exercises/for-loop/index.php
12. Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).

Sum of the Series and the limit will be given by the user
Input the value for nth term: 5
1*1 = 1
2*2 = 4
3*3 = 9
4*4 = 16
5*5 = 25
The sum of the above series is: 55*/

#include <iostream>
using namespace std;

int main()
{
    int n, m = 0, s = 0;
    cout << "Please enter the number:-";

    cin >> n;
    for (int a = 1; a <= n; a++) //initialising from 1 and incrimenting upto the given number
    {
        m = (a * a);                               // multiplying the numbers
        cout << a << "*" << a << "=" << m << "\n"; // printing accordingly followed by "\n"
        s = s + m;                                 // sum of the whole series
    }
    cout << "The sum of the above series is:- " << s; // Print out the Sum of the series
    return 0;
}