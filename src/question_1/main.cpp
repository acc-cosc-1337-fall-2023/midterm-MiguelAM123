#include "question1.h"
#include <iostream>

using std:: cout; using std:: cin;

int widgetsSold;
int pointsEarned;
char again;

int main()
{
        
        do
        {
        cout << "Enter a number of widgets sold " << "\n";
        cin >> widgetsSold;

        pointsEarned = getEarnedPoints(widgetsSold);

        cout << "Points Earned: " << pointsEarned << "\n"; 

        cout << "Would you like to enter another number? ";
        cin >> again;       
        } while (again == 'n' || again == 'N');
        
        
     



}