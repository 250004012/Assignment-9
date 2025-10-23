#include <iostream>
#include <string>
using namespace std;


struct SalesRecord {
    string month;
    float amount;
};

int main() {
    const int MONTHS = 12;
    SalesRecord sales[MONTHS];

  
    cout << "Enter sales data for 12 months:\n";
    for (int i = 0; i < MONTHS; i++) {
        cout << "\n Enter month name: ";
        cin >> sales[i].month;
        cout << "Enter sales amount for " << sales[i].month << ": ₹";
        cin >> sales[i].amount;
    }

    
    float maxAmount = sales[0].amount;
    float minAmount = sales[0].amount;
    string maxMonth = sales[0].month;
    string minMonth = sales[0].month;

    
    for (int i = 1; i < MONTHS; i++) {
        if (sales[i].amount > maxAmount) {
            maxAmount = sales[i].amount;
            maxMonth = sales[i].month;
        }
        if (sales[i].amount < minAmount) {
            minAmount = sales[i].amount;
            minMonth = sales[i].month;
        }
    }

    
    cout << "\n=== Sales Summary ===\n";
    cout << "Month with Maximum Sales: " << maxMonth << " (₹" << maxAmount << ")\n";
    cout << "Month with Minimum Sales: " << minMonth << " (₹" << minAmount << ")\n";

    return 0;
}

