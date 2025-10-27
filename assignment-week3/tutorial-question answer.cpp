#include <iostream>
#include <string>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main(){
    // variable initialization
    string name, coursename, lodgename;
    double reg, days, regfee, lodgeno, lodgfee,student, lodgecost,total,totalm, promo = 0;
    int r;
    bool isPau;

// Name and student check
    cout << "Please state your full name"<<"\n";
    getline(cin,name);

    cout << "Are you a student of PAU? (1 or 0)"<<"\n" <<"1.) Yes" << "\n" << "2.) No"<<"\n";
    cin >> isPau;


 // Course selection description   
    cout << "Please state the number of the course you are interested in enrolling in (1-5)" << "\n";
    cout << "1.) Photography (₦10,000 for 3days)"<<"\n";
    cout << "2.) Painting (₦8,000 for 5days)"<<"\n";
    cout << "3.) Fish farming (₦15,000 for 7days)"<<"\n";
    cout << "4.) Baking (₦13,000 for 5days)"<<"\n";
    cout << "5.) Public speaking (₦5,000 for 2days)"<<"\n";
    cin >> reg;

    if (reg == 1) { coursename = "Photography"; days = 3; regfee = 10000; }
    else if (reg == 2) { coursename = "Painting"; days = 5; regfee = 8000; }
    else if (reg == 3) { coursename = "Fish Farming"; days = 7; regfee = 15000; }
    else if (reg == 4) { coursename = "Baking"; days = 5; regfee = 13000; }
    else if (reg == 5) { coursename = "Public Speaking"; days = 2; regfee = 5000; }
    else { cout << "Invalid course choice!"; return 0; }


    cout << "Please state the number of the Camp house you are interested in staying in (1-5)" << "\n";
    cout << "1.) Camp House A (₦10,000 per day)"<<"\n";
    cout << "2.) Camp House B (₦2,500 per day)"<<"\n";
    cout << "3.) Camp House C (₦5,000 per day)"<<"\n";
    cout << "4.) Camp House D (₦13,000 per day)"<<"\n";
    cout << "5.) Camp House E (₦5,000 per day)"<<"\n";
    cin >> lodgeno;

    if (lodgeno == 1) { lodgename = "Camp House A"; lodgfee = 10000; }
    else if (lodgeno== 2) { lodgename = "Camp House B"; lodgfee = 2500; }
    else if (lodgeno == 3) { lodgename = "Camp House C"; lodgfee = 5000; }
    else if (lodgeno == 4) { lodgename = "Camp House D"; lodgfee = 13000; }
    else if (lodgeno == 5) { lodgename = "Camp House E"; lodgfee = 5000; }
    else { cout << "Invalid lodge choice!"; return 0; }

lodgecost = lodgfee * days;


if (isPau && (lodgeno == 1 || lodgeno == 2.0))
{
    lodgecost = (95.0/100.0) * (lodgecost);
}

if( days > 5 || regfee > 12000)
{
 regfee = (97.0/100.0) * regfee;
}

total  = regfee + lodgecost;

cout << "Your total is ₦"<< total <<"\n";


// Step 1: Generate one integer between 0 and 100 (inclusive)
srand(time(0)); // Seed the random number generator
r = rand() % 100 + 1;
if (r == 7 || r == 77)
{
cout << "Raffle number: " << r <<"\n";
totalm = total - promo;
cout << "Your raffle number was " << r <<" making you eligible for a ₦500 promo  on your total cost making your new total ₦" << totalm<<"\n";

}

    cout << "\n-------------------------------------------\n";
    cout << "Name: " << name << "   (PAU student: " << (isPau ? "Yes" : "No") << ")\n";
    cout << "Course: " << coursename << "   Days: " << days << "\n";
    cout << "Registration: ₦" << regfee << "\n";
    cout << "Lodging: " << lodgeno << "   ₦" << lodgfee << " × " << days << " = ₦" << lodgecost << "\n";
    cout << "Random draw: " << r << "   Promo applied: ₦" << promo << "\n";
    cout << "TOTAL: ₦" << total << "\n";
    cout << "-------------------------------------------\n";

    return 0;
}