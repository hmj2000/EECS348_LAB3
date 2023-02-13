#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12

float*  read_data_from(char *file-name) // Reads in file
    {
        float *month_sales_data = (float*)malloc(sizeof(float) *months);
        FILE *fp = fopen(file_bname, "r*");
        for(int i = 0; i < MONTHS; ++i)
            {
                fscanf(fp, "%f\n", &month_sales_data[i]);
            }
        return month_sales_data;
    }

void print_data(const char *months, const float *sales) //Prints Month Sales Data
    {
        printf("Month Sales\n");
        for(int i = 0; i < MONTHS; ++i)
            {
                printf("%30s %10f\n", months[i], sales[i]);
            }
    }

float return_max_sales(char *months[], float sales[], float *max_sales)
    {
        float max = 0;
        char *month_max;
        float temp = 0;
    
        for(int i = 0; i < MONTHS; ++i)
            {
                temp = sales[i];
                if (temp > max)
                {
                    max = temp;
                    month_max = months[i];
                }
            }
        printf("Maximum sales: $%.2f \t", max);
        printf("(%s) \n", month_max);
        *max_sales = max;
    }

void return_min_sales(char *months[], float sales[], float *max_sales)
    {
        float min = *max_sales;
        char *month_min;
        float temp = 0;
    
        for(int i = 0; i < MONTHS; ++i)
            {
                temp = sales[i];
                if (temp < min)
                {
                    min = temp;
                    month_min = months[i];
                }
            }
        printf("Minimum sales: $%.2f \t", min);
        printf("(%s) \n", month_min);
        
    }

void return_avg_sales(float sales[])
    {
        float temp = 0;
        float avg = 0;
    
        for(int i = 0; i < MONTHS; ++i)
            {
                temp = sales[i];
                avg = avg + temp;
            }
    
        avg = avg / 12;
        printf("Average sales: $%.2f \n", avg);
    }

void sales_summary(char *months[], float sales[]) //Sales Summary
    {
        float max_sales; // Type float variable for maximum sales amount
        return_max_sales(months, sales, &max_sales);
        return_min_sales(months, sales, &max_sales);
        return_avg_sales(sales); // Type float variable for average sales amount
        
    }

void six_month_moving_average_report(const float *sales) //Six Month Moving Average Report
    {
        float moving_average_1; // Type float variable for sales amount for Janurary to June
        moving_average_1 = six_month_moving_average (1, 6, sales);
        float moving_average_2; // Type float variable for sales amount for February to July
        moving_average_2 = six_month_moving_average (2, 7, sales);
        float moving_average_3; // Type float variable for sales amount for March to August
        moving_average_3 = six_month_moving_average (3, 8, sales);
        float moving_average_4; // Type float variable for sales amount for April to September
        moving_average_4 = six_month_moving_average (4, 9, sales);
        float moving_average_5; // Type float variable for sales amount for May to October
        moving_average_5 = six_month_moving_average (5, 10, sales);
        float moving_average_6; // Type float variable for sales amount for June to November
        moving_average_6 = six_month_moving_average (6, 11, sales);
        float moving_average_7; // Type float variable for sales amount for July to December
        moving_average_7 = six_month_moving_average (7, 12, sales);
    
        printf(" Janurary to June:%s \n", moving_average_1);
        printf(" February to July :%s \n", moving_average_2);
        printf(" March to August :%s \n", moving_average_3);
        printf(" April to September :%s \n", moving_average_4);
        printf(" May to October :%s \n", moving_average_5);
        printf(" June to November :%s \n", moving_average_6);
        printf(" July to December :%s \n", moving_average_7);
    }

float six_month_moving_average (int start_month, int end_month, const float *sales)
    {
        float avg = 0;
        for(int i = start_month - 1; i < end_month; ++i)
            {
                avg = avg + sales[i];
            }
        return avg
    }

void sales_report() //Sales Report (Highest to Lowest)
    {
        // Temp array to order sales based on amount from highest to lowest
        // Temp array to order months based on amount from highest to lowest
        // Loop to compare amounts and order them based on amount (highest to lowest) and have a correlating month array
    }

int main()
    {
        float *sales = read_data_from("Sales.txt");
        conts char *months[] = {"January", "February", "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};
        print_data(months, sales);
        return 0;
    }
