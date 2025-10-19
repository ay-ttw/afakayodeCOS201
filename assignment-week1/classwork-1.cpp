#include <iostream>
using namespace std;
int main(){

    int lucky_number1 = 0.0;
    int lucky_number2 = 0.0;
   


    
    cout << "Please state your two numbers" << endl;
    cin >> lucky_number1;
    cin >> lucky_number2;

    cout << "Your lucky numbers are " << lucky_number1 <<  " and " << lucky_number2 << endl ;

    cout << "The product of your lucky numbers is " << lucky_number1 * lucky_number2 << endl;
    cout << "The sum of your lucky numbers is " << lucky_number1 + lucky_number2 << endl;
    cout << "The difference between your lucky numbers is " << lucky_number1 - lucky_number2 << endl;
}