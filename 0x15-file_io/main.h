#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>

void positive_or_negative(int i);
int largest_number(int, int, int);
void print_remaining_days(int, int, int);
int convert_day(int month, int day);

#endif /* MAIN_H */

