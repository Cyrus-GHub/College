#include <stdio.h>

int main()
{
    struct Phone
    {
        char Model[50];
        int Year;
        char SOC[50];
        char dispalay[100];
    } P1, P2, P3, P4;

    struct Phone P1 = {"Pixel 5", 2020, "Snapdragon 765G", "6 inch 90Hz OLED"};
    struct Phone P2 = {"Pixel 4a 5G", 2020, "Snapdragon 765G", "6.2 inch 60Hz OLED"};
    struct Phone P3 = {"Pixel 3a", 2019, "Snapdragon 670", "5.6 inch 60Hz OLED"};
    struct Phone P4 = {"LG G6", 2017, "Snapdragon 820", "5.8 inch 60Hz LCD"};

    return 0;
}