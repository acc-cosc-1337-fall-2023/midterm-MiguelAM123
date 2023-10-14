#include "question1.h"
#include <iostream>

using std:: cin; using std:: cout;


int pointsEarned;
int widgetsSold;

int getEarnedPoints(int widgetsSold)
{
    validEntry(widgetsSold);
   
    if (widgetsSold >= 1 && widgetsSold <= 5)
        {
            return pointsEarned = widgetsSold * 1;
        }

    else if (widgetsSold >= 6 && widgetsSold <= 10)
        {
            return pointsEarned = widgetsSold * 5;
        }
    
    else if (widgetsSold >= 11 && widgetsSold <= 15)
        {
            return pointsEarned = widgetsSold * 10;
        }

    else if (widgetsSold >= 16)
        {
            return pointsEarned = widgetsSold * 15;
        }    
    return 0;
}

int validEntry(int num)
{
    do
    {
        if (num < 0)
        {
            cout << "Please enter a number greater than 0 " << "\n";
            cin >> widgetsSold;
        }
    } while (widgetsSold < 0);
    
    return widgetsSold;
}

