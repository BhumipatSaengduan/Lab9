#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double loan, rateperY, payperY;

    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rateperY;
    cout << "Enter amount you can pay per year: ";
    cin >> payperY;

    cout << setw(13) << left << "EndOfYear#";
    cout << setw(13) << left << "PrevBalance";
    cout << setw(13) << left << "Interest";
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    cout << fixed << setprecision(2);

    double newBalance = loan;

    for (int year = 1; newBalance > 0; year++) {
        double prevBalance = newBalance;
        double interest = prevBalance * (rateperY / 100);
        double total = prevBalance + interest;
        double payment = (total > payperY) ? payperY : total;

        newBalance = total - payment;

        cout << setw(13) << left << year;
        cout << setw(13) << left << prevBalance;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << newBalance;  
        cout << "\n";
    }
    return 0;
}