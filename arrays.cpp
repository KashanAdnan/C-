#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {1,2,5,7,8};
    // cout << arr[4];

    int marks [6];

for (int i = 1; i <  6; i++)
{
    cout << "Enter The Marks Of " << i << "th Student" << endl;
    cin >> marks[i];
}
for (int i = 1; i <  6; i++)
{
    cout << "Marks Of " << i << "th Student is " << marks[i] << endl;
}


    return 0;
}

