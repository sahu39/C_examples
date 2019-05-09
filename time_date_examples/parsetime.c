/******struct tm *localtime(const time_t *timer)************************************************/
/*********struct tm *localtime(const time_t *clock);********************************************/
/******size_t strftime(char *s, size_t max, const char *format, const struct tm *tm);***********/
/********char *strptime(const char *s, const char *format, struct tm *tm);**********************/
/*******struct tm*******************************************************************************/
 //struct tm {
 //  int tm_sec;         /* seconds,  range 0 to 59          */
 //  int tm_min;         /* minutes, range 0 to 59           */
 //  int tm_hour;        /* hours, range 0 to 23             */
 //  int tm_mday;        /* day of the month, range 1 to 31  */
 //  int tm_mon;         /* month, range 0 to 11             */
 //  int tm_year;        /* The number of years since 1900   */
 //  int tm_wday;        /* day of the week, range 0 to 6    */
 //  int tm_yday;        /* day in the year, range 0 to 365  */
 //  int tm_isdst;       /* daylight saving time             */  
 //  };
#define _XOPEN_SOURCE 700
#include <time.h>
#include <stdio.h>
 
int main()
{
    char temp[100]; 
    time_t current_time = time(NULL);
    struct tm *tm = 
    strftime(temp, sizeof(temp), "%c %Z %z", tm);
//    strftime(temp, sizeof(temp), "%Z", tm);
/*    strftime(temp, sizeof(temp), "%c", tm);
    strftime(temp, sizeof(temp), "%c", tm);
    strftime(temp, sizeof(temp), "%c", tm);*/
    printf("\nCurrent Date and Time:\n");
    printf("\n%s\n\n", temp);
    return 0;
}
/***********output***************************************************************************/
//Current Date and Time:

//Thu May  9 19:20:25 2019 IST +0530
/************output*************************************************************************/
