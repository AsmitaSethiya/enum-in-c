#include<stdio.h>

enum monthName{
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main()
{
    enum monthName month;

    month = DEC;

    switch (month)
    {
    case JAN:
       printf("January");
        break;

    case FEB:
        printf("February");   
        break;

    case MAR:
        printf("March");
        break;

    case APR:
        printf("April");
        break;

    case MAY:
        printf("May");
        break;

    case JUN:
        printf("June");
        break;

    case JUL:
        printf("July");
        break;

    case AUG:
        printf("August");
        break;

    case SEP:
        printf("September");
        break;

    case OCT:
        printf("October");
        break;

    case NOV:
        printf("November");
        break;

    case DEC:
        printf("December");
        break;                                         
    
    default:
        break;
    }
    return 0;
}
