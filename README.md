Task 4. Refactor task 3 using do while statement.
#include<iostream>
using namespace std;
int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k;
do {
cout << "Enter integer nr. " << i << ": ";
cin >> number;
sum_k += number; i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: " << sum_k;
return 0;
}
4.1 Run the program, create a screenshot of the full screen with the console window on top, and
insert a screenshot into the report file with the corresponding caption.
Test the program with zero as the k variable value.
4.2 Use if statement to modify the program so that it works correctly if the user inputs zero as
the k value.
Run the program, enter 0 when prompted for k. Create a screenshot of the full screen with the
console window on top, and insert a screenshot into the report file with the corresponding caption.
Insert a listing of your program into the report file.
Test the program with a random character as the integer number variable value.
4.3 Use if statement to modify the program so that it outputs a warning if the user input is not an
integer. After the warning the program should prompt for the integer again. Consult tutorial at
learncpp on cin.fail, cin.ignore and cin.clear. Inspect the sample program at hackerearth to
learn how to modify the loop. Consult W3schools tutorial on break and continue if needed.
Please note, that while it’s always a good idea to sanitize user input, we will not focus on that
during our future practical tasks to save time.
Run the program, enter 3 for the k, and a random string of characters when prompted for the second
integer (once). Create a screenshot of the full screen with the console window on top, and insert a
screenshot into the report file with the corresponding caption. Insert a listing of your program into
the report file
