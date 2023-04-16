#include <iostream>
using namespace std;

class Employ
{
public:
    string name;
    int salary;
};

int main()
{
    Employ har;
    har.name = "Kashan";
    har.salary = 34200;

    cout << "The Name Of Our First Employ is  " << har.name
         << endl
         << "The Salary Of Our First Employ is  " << har.salary << endl;

    return 0;
}