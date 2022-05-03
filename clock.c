#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void) {
  int year, month, day, hour, min, seconds;
  time_t t;
  struct tm date_time;
  
  while(1) {
    t = time(NULL);
    date_time = *localtime(&t);

    year = date_time.tm_year + 1900;
    month = date_time.tm_mon + 1;
    day = date_time.tm_mday;
    hour = date_time.tm_hour;
    min = date_time.tm_min;
    seconds = date_time.tm_sec;

    printf("Date time: %02d/%02d/%02d %02d:%02d:%02d\n", day, month, year, hour, min, seconds);
    sleep(1);
    system("clear");
  }

  return 0;
}
