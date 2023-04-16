    # include <iostream>
    using namespace std;

    int add(int a , int b){
        int c = a + b;  
        return c;
    }

    int main(){
        // cout << "Hello World" << endl;
        // cout << "Next Line";
        // int a,b,c;
        // short sa = 9;
        // coun >> sa;
        //camel CaseNotaion
        // int MarksInMath = 83;
        // cout << "The MArks Of Student In math Is :  "<<MarksInMath;
        // short a;
        // int b;
        // long c;
        // long long d; 
        // float const score = 7656.33;
        // double score2 = 55.44;
        // long double score3 = 444.44;
        // score = 66.4;
        // cout >> "The Score is :  "<<score;
        // int a , b;
        // cout << "Enter First Number">> endl;
        // cin >> a;

        // cout << "Enter Second Number">> endl;
        // cin >> b;

        // cout << "a + b is :  " << a + b<<endl;
        // cout << "a - b  is : " << a - b<<endl;
        // cout << "a *  b is :  " << a * b<<endl;
        // cout << "a /  b is :  " << a / b<<endl;

        // int age;
        // cout << "Enter Your Age"<<endl;
        // cin >> age;
        // if ( age >= 18)
        // {
        //     cout << "You Are Eligible";
        // }else if (age > 150)
        // {
        //     cout << "Its An Invalid Age !"
        // }
        
        // else{
        //     cout << "You Are Not Eligible";
        // }
        
        
        int a , b;
        cout << "Enter First Number"<<endl;
        cin >> a;

        cout << "Enter Second Number"<< endl;
        cin >> b;

        cout << "The Sum Of A & B is :  " <<add(a,b);

        return 0;
    }
