# include <iostream>
using namespace std;

int main(){

int x = 5;
cout << "the value of x is "<< x << endl;
int y = 50;
cout << "the value of y is " << y << endl;

// use temp var to swap

int temp = x;
x=y;
y = temp;
cout <<  "the swapped values of x and y respectively are " << x << " and " << y << endl ;

}