#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12  // 定義一年有 12 個月份
#define YEARS 5    // 定義有 5 年的降雨資料

int main()
{
    // 初始化 2011-2015 年的降雨資料（單位：英吋）
    float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    int year = 0, month = 0;   // 變數 year 表示年份索引，month 表示月份索引
    float subtot = 0.0, total = 0.0;  // subtot 存每年的總降雨量，total 存所有年份的總降雨量

    // 顯示標題
    printf("YEAR\t\tRAINFALL  (inches)\n");

    // 計算每年的總降雨量
    for (year = 0, total = 0; year < YEARS; year++)
    {
        subtot = 0;  // 初始化該年的降雨總量

        // 計算該年的降雨總量
        for (month = 0; month < MONTHS; month++)
        {
            subtot += rain[year][month];
        }

        // 印出該年的總降雨量
        printf("%5d \t%15.1f\n", 2010 + year, subtot);

        // 加總所有年份的降雨量
        total += subtot;
    }

    // 計算並顯示每年的平均降雨量
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);

    // 顯示標題
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    // 計算每個月份的平均降雨量
    for (month = 0; month < MONTHS; month++)
    {
        subtot = 0;  // 初始化該月的總降雨量

        // 累加 5 年內該月份的降雨量
        for (year = 0; year < YEARS; year++)
        {
            subtot += rain[year][month];
        }

        // 計算並印出該月份的平均降雨量
        printf("%4.1f ", subtot / YEARS);
    }

    printf("\n"); // 換行

    return 0;
}
