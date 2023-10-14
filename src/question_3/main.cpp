#include "question3.h"
#include <iostream>

using std:: cin; using std:: cout;

double c;
char again = 'y';


int main()
{
        do
        {
            cout << "Enter the celsius temperature to be converted to farenheit " << "\n";
            cin >> c;
            cout << "The converted temp is: " << getFarenheit(c);
            cout << "Would you like to continue? " << "\n" << "Press y or Y";
            cin >> again;
        } while (again == 'y' || again == 'Y');
        
        

    return 0;
}