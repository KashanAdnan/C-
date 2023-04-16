# include <iostream>
using namespace std;

int add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int a, b;
    cout << "Enter First Number" << endl;
    cin >> a;

    cout << "Enter Second Number" << endl;
    cin >> b;

    cout << "The Sum Of A & B is :  " << add(a, b);

    return 0;
}