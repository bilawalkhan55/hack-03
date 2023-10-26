#include <stdio.h>

int main()
{
    float total_GB, curr_day, Gb_used;

       printf("Enter the total GB in the plan per 30 day period: ");
    scanf("%f", &total_GB);

   
   
    if (total_GB <= 0)
    {
        printf("Total GB must be greater than 0. Please enter a valid value.\n");
        return 1;
    }

    printf("Enter the current day in the 30 day period (1-30): ");
    scanf("%f", &curr_day);

   
   
    if (total_GB <= 0)
    {
        printf("Total GB must be greater than 0. Please enter a valid value.\n");
        return 1;
    }


    printf("Enter the current day in the 30 day period (1-30): ");
    scanf("%f", &curr_day);

   
    if (Gb_used < 0)
    {
        printf("Total GB used must be non-negative. Please enter a valid value.\n");
        return 1;
    } 
   
   
    int days_used = curr_day - 1;
    int days_remaining = 30 - days_used;
    float average_daily_use = Gb_used / days_used;

    printf("%d days used, %d days remaining\n", days_used, days_remaining);
    printf("Average daily use: %.3f GB/day\n", average_daily_use);

    if (average_daily_use <= total_GB / 30.0)
   
    {
        printf("You are UNDER your average daily use (%.3f GB/day).\n", total_GB / 30.0);
        printf("You can use up to %.3f GB/day to stay within your data plan.\n", total_GB / 30.0);
    }
    else
    {
        printf("You are EXCEEDING your average daily use (%.3f GB/day).\n", total_GB / 30.0);
        float excess_usage = average_daily_use - (total_GB / 30.0);
        float total_excess = excess_usage * days_remaining;
        printf("Continuing this high usage, you'll exceed your data plan by %.3f GB.\n", total_excess);
        printf("To stay below your data plan, use no more than %.3f GB/day.\n", total_GB / 30.0);
    }

    return 0;
}