#include<stdio.h>

enum TrafficLight{
    RED, YELLOW, GREEN
};

int main()
{
    enum TrafficLight signal;

    signal = GREEN;

    switch (signal)
    {
    case RED:
        printf("Stop"); 
        break;

    case YELLOW:
        printf("Proceed with caution");
        break;

    case GREEN:
        printf("Go");
        break;         
    
    default:
        break;
    }

    return 0;
}
