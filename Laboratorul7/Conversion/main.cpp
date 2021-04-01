#include<stdio.h>

float operator"" _Kelvin(unsigned long long int x)
{
    return float(x) - 273.15;
}

float operator"" _Fahrenheit(unsigned long long int x)
{
    return (float(x) - 32)/1.8;
}
int main() {
    
    float a = 300_Kelvin;

    float b = 120_Fahrenheit;

    printf("300K to %.2f C\n", a);

    printf("120F to %.2f C\n", b);

    return 0;

}