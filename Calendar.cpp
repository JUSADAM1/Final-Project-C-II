#include "stdafx.h"
#include "Calendar.h"
#include <iostream>
#include "String"

using namespace std;


Calendar::Calendar()
{
}


Calendar::~Calendar()
{
}
/*
 * A Function that returns the index of the day of the date.
 * day/month/year
 *
 *Index     Day
 * 0        Sunday
 * 1        Monday
 * 2        Tuesday
 * 3        Wednesday
 * 4        Thursday
 * 5        Friday
 * 6        Saturday
 * */
int dayNumber(int day, int month, int year){
    static int t[] ={0, 3, 2, 5,
                     0, 3, 5, 1,
                     4, 6, 2, 4};

    year -= month < 3;
    return (year + year/4 - year/100 +
            year/400 + t[month - 1] + day) % 7;

}

/*
 * A function that returns the name of the month with a given month by number
 *month Number     Name
 * ------------------------------
 * 0                January
 * 1                February
 * 2                March
 * 3                April
 * 4                May
 * 5                June
 * 6                July
 * 7                August
 * 8                September
 * 9                October
 * 10               November
 * 11               December
 * ----------------------------------
*/

string getMonthName(int monthNumber){
    string months[] = {"January", "February", "March", "April", "June",
                        "July", "Auguat", "September", "October", "November",
                        "December"};

    return (months[monthNumber]);
}

/*
 * A Function to return the number of days in a month
 * -------------------------------------------------------
 * Months Number    Name    Number of days
 * -------------------------------------------------------
 *    0             January     31
 *    1             February    28(Non-leap)/29(Leap)
 *    2             March       31
 *    3             April       30
 *    4             May         31
 *    5             June        30
 *    6             July        31
 *    7             August      31
 *    8             September   30
 *    9             October     31
 *    10            November    30
 *    11            December    31
 * */

int numberOfDays (int monthNumber, int year){

    //January
    if (MonthNumber == 0)
        return (31);

    //February
    if (monthNumber == 1)
    {
        //If the year is a leap then February is 29 day but if not it is 28 days
        if (year % 400 == 0 ||(year % 4 == 0 && year 100 != 0))
            return (29);

    }
    //March
    if (monthNumber == 2)
        return (31);

    //April
    if (monthNumber == 3)
        return(30);

    //May
    if (monthNumber == 4)
        return (31);

    //June
    if (monthNumber == 5)
        return (30);

    //July
    if (monthNumber == 6)
        return (31);

    //August
    if (monthNumber == 7)
        return (31);

    //September
    if (monthNumber == 8)
        return (30);

    //October
    if (monthNumber == 9)
        return (31);

    //November
    if (monthNumber == 10)
        return (30);

    //December
    if (monthNumber == 11)
        return (31);

}

void printCalendar(int year){
    printf("         Calendar - %d\n\n", year);
    int days;

    //index of the days from 0 to 6
    int current = dayNumber(1, 1, year);

    // i ==> Iterate through all the months
    // j ==> Iterate through all the days of the month - i

    for (int i = 0; i < 12; i++){

        days = numberOfDays(i, year);
        printf("\n --------------%s----------\n", getMonthName(i).c_str());

        //print the columns
        printf("  Sun  Mon  Tues  Weds  Thu  Fri  Sat\n");

        //Print appropriate spaces
        int k;
        for (k = 0; k < current; k++)
            printf("       ");

        for (int j = 1; j <= days; j++){
            printf("%5d", j);

            if (++k > 6)
            {
                k = 0;
                printf"\n";
            }
        }
        if(k)
            printf("\n");

        current = k;

    }
    return;
}

int main(){
    int year = 2019;
    printCalendar(year);

    return 0;
}