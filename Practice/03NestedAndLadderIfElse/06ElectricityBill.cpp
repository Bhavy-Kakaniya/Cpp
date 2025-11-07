// Input electricity unit charge and calculate the total electricity bill according to the given condition:
// - For ƒrst 50 units Rs. 0.50/unit
// - For next 100 units Rs. 0.75/unit
// - For next 100 units Rs. 1.20/unit
// - For unit above 250 Rs. 1.50/unit
// - An additional surcharge of 20% is added to the bill
#include <iostream>
using namespace std;

int main()
{
    float units, amount, totalBill, surcharge;
    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 50)
    {
        amount = units * 0.50;
    }
    else if (units <= 150)
    {
        amount = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250)
    {
        amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else
    {
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Add 20% surcharge
    surcharge = amount * 0.20;
    totalBill = amount + surcharge;
    cout << "\nElectricity Bill Details:\n";
    cout << "Energy Charge      : Rs. " << amount << endl;
    cout << "Surcharge (20%)    : Rs. " << surcharge << endl;
    cout << "Total Bill Amount  : Rs. " << totalBill << endl;

    return 0;
}
