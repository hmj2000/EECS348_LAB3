#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12

float*  read_data_from(char *file-name)
    {
        float* month_sales_data = (float*)malloc(sizeof(float) * months);
        FILE *fp = fopen(file_bname, "r*");
        for(int i = 0; i < MONTHS; ++i)
            {
                fscanf(fp, "%f\n", &month_sales_data[i]);
            }
        return month_sales_data;
    }

void print_data(const char *months, const float*sales)
    {
        printf("Month Sales\n");
        for(int i = 0; i < MONTHS; ++i)
            {
                printf("%30s %10f\n", months[i], sales[i];)
            }
    }

int main()
    {
        float* sales = read_data_from("Sales.txt");
        conts char *months[] = {"January", "February", "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};
        print_data(months, sales);
        return 0;
    }