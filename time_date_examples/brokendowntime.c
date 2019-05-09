/******struct tm *localtime(const time_t *timer)************************************************/
/*********struct tm *localtime(const time_t *clock);********************************************/
/******size_t strftime(char *s, size_t max, const char *format, const struct tm *tm);***********/
/********char *strptime(const char *s, const char *format, struct tm *tm);**********************/
/*******struct tm*******************************************************************************/
 //struct tm {
 // //  int tm_sec;         /* seconds,  range 0 to 59          */
 //  //  int tm_min;         /* minutes, range 0 to 59           */
 //   //  int tm_hour;        /* hours, range 0 to 23             */
 //    //  int tm_mday;        /* day of the month, range 1 to 31  */
 //     //  int tm_mon;         /* month, range 0 to 11             */
 //      //  int tm_year;        /* The number of years since 1900   */
 //       //  int tm_wday;        /* day of the week, range 0 to 6    */
 //        //  int tm_yday;        /* day in the year, range 0 to 365  */
 //         //  int tm_isdst;       /* daylight saving time             */  
 //          //  };
 //
#include <stdio.h> 
#include <time.h>       
 
int main(void) {
        
    time_t rawtime = time(NULL);
            
    if (rawtime == -1) {
                        
        printf("The time() function failed\n");
        return 1;
    }
                
    struct tm *ptm = localtime(&rawtime);
                    
    if (ptm == NULL) {
                                
        printf("The localtime() function failed\n");
        return 1;
    }
                        
    printf("The time is: %02d:%02d:%02d\n", ptm->tm_hour, ptm->tm_min, ptm->tm_sec);

    return 0;
}

