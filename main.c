#include <stdio.h>

int main() {
    printf("Hello, World!");
    int a = 10;
    // %d int formating 
    printf("%d", a);
    // example 1
    int year, month, day;
    printf("Enter Your BirthDay.");
    printf("\nEnter Year: ");
    // & for memory of variable 
    scanf("%d", &year);
    printf("Enter Month: ");
    scanf("%d", &month);
    printf("Enter Day: ");
    scanf("%d", &day);
    printf("Your Birthday is: %d/%d/%d", year, month, day);
    
    // example 2
    // %f float formating
    float pi = 3.14;
    float radius;
    printf("\nEnter Radius of Circle: ");
    scanf("%f", &radius);
    float area = pi * (radius * radius);
    // printf("Area of Circle is: %.2f", area); for  two decimal places
    // %.4g for 4 number of significant digits
    // you can use %f for float and %lf for double to print values  
    printf("Area of Circle is: %f", area);
    float circumference = (pi * radius) * 2;
    printf("\nCircumference of Circle is: %lf", circumference);

    // char for caracter and ascii value
    // \0 is null character
    char character, character2;
    character = 'A';
    character2 = 66;
    // %c for character formating
    printf("\nCharacter: %c", character);
    printf("\nCharacter2: %c", character2);

    // we use const keyword to define constant values
    const int constantValue = 100; // constant value
    printf("\nConstant Value: %d", constantValue);

    // simple value is literal value
    int abc = 5; 
    abc = 10; 
    printf("\nValue: %d, %c, %d", abc, 'A', 5); // A is a literal value

    // sign and unsigned character
    signed char signedChar = -128; // signed char can hold negative values 
    unsigned char unsignedChar = 255; // unsigned char can only hold positive values

    // signed and unsigned int
    signed int signedInt = -2147483648; // signed int can hold negative values  
    unsigned int unsignedInt = 4294967295; // unsigned int can only hold positive values

    // long and short int
    long int longInt = 9223372036854775807; // long int can hold larger values (default)
    short int shortInt = 32767; // short int can hold smaller values 
    // long long int can hold even larger values
    long long int longLongInt = 9223372036854775807; // long long int can hold very large values
    // %ld for long int, %hd for short int, %lld for long long int (but you can also use %d for all of them)
    printf("long: %ld, short: %hd, long long: %lld", longInt, shortInt, longLongInt);
    // sizeof operator returns the size of a variable in bytes
    // %zu is used for size_t type (but you can also use %d)
    printf("\nSize of signed char: %zu bytes", sizeof(signedInt)); 
    // unsigned long long int
    // unsigned long long int can hold very large positive values
    // %llu for unsigned long long int (but you can also use %d)
    unsigned long long int unsignedLongLongInt = 18446744073709551615;
    printf("\nSize of unsigned long long int: %llu bytes", unsignedLongLongInt);
}