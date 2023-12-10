#include <iostream>
using namespace std;
int main() {
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum = ";
    cin >> k;
     while (cin.fail()) {
        cout << "Invalid input. Enter the amount of integers to sum = ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cin >> k; 
    }
    do {
        cout << "Enter integer nr. " << i << ": ";
        cin >> number;
        if (cin.fail()) {
            cout << "Invalid input. Please enter integer nr." << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
        else {
            sum_k += number;
            i++;
        }
    } while (i <= k);
    cout << "The total sum of " << k << " integers is: " << sum_k;
    return 0;
}
