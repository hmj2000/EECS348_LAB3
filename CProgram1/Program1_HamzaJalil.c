#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12

float*  read_data_from(char *file-name)// Reads in file
    {
        float* month_sales_data = (float*)malloc(sizeof(float) * months);
        FILE *fp = fopen(file_bname, "r*");
        for(int i = 0; i < MONTHS; ++i)
            {
                fscanf(fp, "%f\n", &month_sales_data[i]);
            }
        return month_sales_data;
    }

void print_data(const char *months, const float*sales)//Prints Month Sales Data
    {
        printf("Month Sales\n");
        for(int i = 0; i < MONTHS; ++i)
            {
                printf("%30s %10f\n", months[i], sales[i];)
            }
    }

void sales_summary()//Sales Summary
    {
        // Type double variable for minimum sales amount
        // Type double variable for maximum sales amount
        // Type double variable for average sales amount 
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