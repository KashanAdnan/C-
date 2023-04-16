#include <iostream>
using namespace std;

int main()
{

    // cout << "The Sum of A + B = "  << a + b << endl;
    // cout << "The Sum of A - B = "  << a - b << endl;
    // cout << "The Sum of A * B = "  << a * b << endl;
    // cout << "The Sum of A / B = "  <<   (float) a / b << endl;
    // cout << "The Sum of A % B = "  << a % b << endl;

    int age;
    cout << "Enter Your Age " << endl;
    cin >> age;

    // if(age >= 120 || age  < 1){
    //     cout << "Invalid Age" << endl;
    // }
    // else if (age >= 18)
    // {
    //     /* code */
    //     cout << "Your Can Vote" << endl;
    // }
    // else
    // {
    //     cout << "You Cannot Vote" << endl;
    // }

    switch (age)
    {
    case 12:
        cout << "You Are 12 Years Old"; break;
    case 13:
        cout << "You Are 13 Years Old" ;break;

    default:
        cout << "Your Are neither 12 nor 18 years old";
        break;
    }

    return 0;
}
