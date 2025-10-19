#include <iostream>
using namespace std;
int main(){

    double price;
    double tax = 0.06;
    cout <<"whats is your price? and tax percentage?"<< endl ;
    cin >> price;
    cout<<"your new price plus tax is "<< (price * (tax/100.0))+ price << endl;


}