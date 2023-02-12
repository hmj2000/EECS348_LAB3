#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12

float*  read_data_from(char *file-name)// Reads in file
    {
        float *month_sales_data = (float*)malloc(sizeof(float) * months);
        FILE *fp = fopen(file_bname, "r*");
        for(int i = 0; i < MONTHS; ++i)
            {
                fscanf(fp, "%f\n", &month_sales_data[i]);
            }
        return month_sales_data;
    }

void print_data(const char *months, const float *sales)//Prints Month Sales Data
    {
        printf("Month Sales\n");
        for(int i = 0; i < MONTHS; ++i)
            {
                printf("%30s %10f\n", months[i], sales[i];)
            }
    }

void sales_summary(const char *months, const float*sales)//Sales Summary
    {
        double min_sales;// Type double variable for minimum sales amount
        char min_sales_month;// Type char varaibale for month of minimum sales amount
        double max_sales;// Type double variable for maximum sales amount
        char max_sales_month;// Type char varaibale for month of maximum sales amount
        double avg_sales;// Type double variable for average sales amount
    
        return min_sales, min_sales_month, max_sales, max_sales_month, avg_sales
        
    }

float* return_max_sales(const char *months, const float*sales)
    {
        double *max = 0;
        char *month_max;
        for(int i = 0; i < MONTHS; ++i)
            
            {
                if (sales[i] > max)
                {
                    max = sales[i];
                    month_max = months[i];
                }
            }
    
        return max, month_max
    }


float* return_min_sales(const char *months, const float*sales, float*max)
    {
        double *min = max;
        char *month_min;
        for(int i = 0; i < MONTHS; ++i)
            
            {
                if (sales[i] < min)
                {
                    min = sales[i];
                    month_min = months[i];
                }
            }
    
        return min, month_min
    }

float* return_avg_sales(const float*sales)
    {
        double *avg = 0;
        for(int i = 0; i < MONTHS; ++i)
            {
                avg = avg + sales[i];
            }
        avg = avg / MONTHS;
        return avg
    }

void six_month_moving_average_report()//Six Month Moving Average Report
    {
        // Type double variable for sales amount for Janurary to June
        // Type double variable for sales amount for February to July
        // Type double variable for sales amount for March to August
        // Type double variable for sales amount for April to September
        // Type double variable for sales amount for May to October
        // Type double variable for sales amount for June to November
        // Type double variable for sales amount for July to December
    }

void sales_report()//Sales Report (Highest to Lowest)
    {
        // Temp array to order sales based on amount from highest to lowest
        // Temp array to order months based on amount from highest to lowest
        // Loop to compare amounts and order them based on amount (highest to lowest) and have a correlating month array
    }

int main()
    {
        float* sales = read_data_from("Sales.txt");
        conts char *months[] = {"January", "February", "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};
        print_data(months, sales);
        return 0;
    }
