#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>


using namespace std;

#define M_PI 3.14159265358979323846


void Task_1(double a, double b, double c) 
{
    double discriminant = b * b - 4 * a * c;
    double root1, root2;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two distinct roots: " << root1 << " and " << root2 << endl;
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "One real root: " << root1 << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Two complex roots: " << realPart << " + " << imaginaryPart << "i and "
            << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

double Task_2(double side1, double side2, double angleInDegrees) 
{
    
    double angleInRadians = angleInDegrees * M_PI / 180.0;
    double thirdSide = sqrt(side1 * side1 + side2 * side2 - 2 * side1 * side2 * cos(angleInRadians));

    return thirdSide;
}

double Task_3(double x1, double y1, double x2, double y2) 
{
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}

void Task_4(int count) 
{
    srand(static_cast<unsigned int>(time(0)));

    cout << "Random numbers: ";
    for (int i = 0; i < count; ++i) 
    {
        cout << rand() % 100 + 1 << " ";
    }
    cout << endl;
}

void Task_5() 
{
    char buffer[100]; 
    cout << "Enter a string: ";
    cin.getline(buffer, sizeof(buffer)); 

    int integerValue = atoi(buffer);
    cout << "Integer value: " << integerValue << endl;

    long longValue = atol(buffer);
    cout << "Long value: " << longValue << endl;

    double doubleValue = atof(buffer);
    cout << "Double value: " << doubleValue << endl;
}

char tolowerR(char ch) 
{
    if (ch >= 'A' && ch <= 'Z') 
    {
        return ch + ('a' - 'A');
    }
    else 
    {
        return ch;
    }
}

char toupperR(char ch) 
{
    if (ch >= 'a' && ch <= 'z') 
    {
        return ch - ('a' - 'A');
    }
    else 
    {
        return ch;
    }
}

bool isalphaR(char ch) 
{
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool islowerR(char ch) 
{
    return (ch >= 'a' && ch <= 'z');
}

bool isupperR(char ch) 
{
    return (ch >= 'A' && ch <= 'Z');
}

bool isalnumR(char ch) 
{
    return isalphaR(ch) || (ch >= '0' && ch <= '9');
}

void Task_8() 
{
    char city[50] = "";
    char district[50] = "";
    char street[50] = "";
    char house[10] = "";
    char apartment[10] = "";

    cout << "Enter city: ";
    cin.getline(city, sizeof(city));
    cout << "Enter district: ";
    cin.getline(district, sizeof(district));
    cout << "Enter street: ";
    cin.getline(street, sizeof(street));
    cout << "Enter house number: ";
    cin.getline(house, sizeof(house));
    cout << "Enter apartment number: ";
    cin.getline(apartment, sizeof(apartment));

    char fullAddress[200] = "";
    strcat_s(fullAddress, city);
    strcat_s(fullAddress, ", ");
    strcat_s(fullAddress, district);
    strcat_s(fullAddress, ", ");
    strcat_s(fullAddress, street);
    strcat_s(fullAddress, ", ");
    strcat_s(fullAddress, house);
    strcat_s(fullAddress, ", ");
    strcat_s(fullAddress, apartment);

    cout << "Full address: " << fullAddress << endl;
    cout << "Length of city: " << strlen(city) << " characters" << endl;
    cout << "Length of district: " << strlen(district) << " characters" << endl;
    cout << "Length of full address: " << strlen(fullAddress) << " characters" << endl;

    int comparisonResult = strcmp(city, district);

    if (comparisonResult > 0) 
    {
        cout << "City is greater than district." << endl;
    }
    else if (comparisonResult < 0) 
    {
        cout << "City is smaller than district." << endl;
    }
    else 
    {
        cout << "City is equal to district." << endl;
    }
}

unsigned long Task_9(int side1, int side2) 
{
    return 2 * (static_cast<unsigned long>(side1) + static_cast<unsigned long>(side2));
}

unsigned long Task_10(int side1, int side2) 
{
    return 2 * (static_cast<unsigned long>(side1) + static_cast<unsigned long>(side2));
}

int myFunc(int x) 
{
    return 4 * x;
}

double divide(double dividend, double divisor)
{
    if (divisor == 0) 
    {
        return -1; 
    }
    else 
    {
        return dividend / divisor;
    }
}

bool Task_14() 
{
    char input;
    cout << "Enter a character: ";
    cin >> input;

    if (input == 'Y' || input == 'y' || input == 'd' || input == 'D') { return true;}
    else {return false;}
}

inline int Task_15(char ch) 
{
    return static_cast<int>(ch);
}

void Task_16(int num) 
{
    num *= 2;
    cout << "Inside function: Doubled number is: " << num << endl;
}

void Task_17(int& num) 
{
    num *= 2;
    cout << "Inside function: Doubled number is: " << num << endl;
}

int Task_18(int a, int b = 0) 
{
    return a + b;
}

bool isEqual(int a, int b) 
{
    return a == b;
}

bool isEqual(double a, double b) 
{
    return a == b;
}

bool isEqual(char a, char b) 
{
    return a == b;
}

int main()
{
    //task_1
    {
        cout << "Task_1\n";
        double a, b, c;
        cout << "Enter coefficients a, b, and c: ";
        cin >> a >> b >> c;
        Task_1(a, b, c);
    }

    //Task_2

    {
        cout << "Task_2\n";
        double side1, side2, angleInDegrees;
        cout << "Enter the first side of the triangle: ";
        cin >> side1;
        cout << "Enter the second side of the triangle: ";
        cin >> side2;
        cout << "Enter the angle between the sides in degrees: ";
        cin >> angleInDegrees;

        double thirdSide = Task_2(side1, side2, angleInDegrees);
        cout << "The length of the third side of the triangle is: " << thirdSide << endl;
    }

    //Task_3

    {
        cout << "Task_3\n";
        double x1, y1, x2, y2;
        cout << "Enter the coordinates of the first point (x1 y1): ";
        cin >> x1 >> y1;
        cout << "Enter the coordinates of the second point (x2 y2): ";
        cin >> x2 >> y2;
        double distance = Task_3(x1, y1, x2, y2);
        cout << "The distance between the two points is: " << distance << endl;
    }

    //Task_5

    {
        cout << "Task_5\n";
        int numberOfRandomNumbers;
        cout << "Enter the number of random numbers to generate: ";
        cin >> numberOfRandomNumbers;
        Task_4(numberOfRandomNumbers);
    }

    //Task_6

    //Task_6();

    //Task_7

    {
        cout << "Task 7:\n";
        char ch;
        cout << "Enter a character: ";
        cin >> ch;
        cout << "tolowerR: " << tolowerR(ch) << endl;
        cout << "toupperR: " << toupperR(ch) << endl;
        cout << "isalphaR: " << isalphaR(ch) << endl;
        cout << "islowerR: " << islowerR(ch) << endl;
        cout << "isupperR: " << isupperR(ch) << endl;
        cout << "isalnumR: " << isalnumR(ch) << endl;
    }
    
    //Task_8

    {
        cout << "Task_8\n";
        Task_8();
    }

    //Task_9

    {
        cout << "Task 9:\n";
        int a, b;
        cout << "Enter the first side: ";
        cin >> a;
        cout << "Enter the second side: ";
        cin >> b;
        unsigned long result = Task_9(a, b);
        cout << "Perimeter of the rectangle is: " << result << endl;
    }

    //Task_10

    {
        cout << "Task 10:\n";
        int a, b;
        cout << "Enter the first side: ";
        cin >> a;
        cout << "Enter the second side: ";
        cin >> b;
        unsigned long result = Task_10(a, b);
        cout << "Perimeter of the rectangle is: " << result << endl;
    }
    
    //Task_11

    {
        cout << "Task_11\n";
        int x, y;
        cout << "Enter a number: ";
        cin >> x;
        y = myFunc(x);
        cout << "Result: " << y << endl;
    }
    
    //Task_12

    {
        cout << "Task_12\n";
        int dividend, divisor;
        cout << "Enter dividend: ";
        cin >> dividend;
        cout << "Enter divisor: ";
        cin >> divisor;

        double result = divide(dividend, divisor);

        if (result == -1)
        {
            cout << "Division by zero is not allowed." << endl;
        }
        else
        {
            cout << "Result of division: " << result << endl;
        }

    }
    
    //Task 13

    //task 14

    {
        cout << "Task_14\n";

        if (Task_14())
        {
            cout << "True: User entered 'Y', 'y', 'd', or 'D'." << endl;
        }
        else
        {
            cout << "False: User did not enter 'Y', 'y', 'd', or 'D'." << endl;
        }

    }
   
    // Task_15

    {
        cout << "Task_15\n";
        char inputChar;
        cout << "Enter a character: ";
        cin >> inputChar;

        int asciiValue = Task_15(inputChar);
        cout << "ASCII value of '" << inputChar << "' is: " << asciiValue << endl;

    }
   
    //Task_16

    {
        cout << "Task_16\n";
        int number;
        cout << "Enter a number: ";
        cin >> number;

        Task_16(number);

        cout << "Outside function: Original number is: " << number << endl;
    }
   
    //Task 17

    {
        cout << "Task_17\n";
        int number;
        cout << "Enter a number: ";
        cin >> number;

        Task_17(number);

        cout << "Outside function: Original number is: " << number << endl;
    }
    
    //Task_18
   
    {
        cout << "Task_18\n";
        int num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number (or press Enter to use the default value 0): ";
        string input;

        cin.ignore();
        getline(cin, input);

        if (!input.empty())
        {
            num2 = stoi(input);
        }
        else
        {
            num2 = 0;
        }
        int sum = Task_18(num1, num2);
        cout << "Sum: " << sum << endl;
    }

    //Task 19

    {
        cout << "Task_19\n";
        int num1 = 5, num2 = 5;
        double dbl1 = 3.14, dbl2 = 3.14;
        char char1 = 'A', char2 = 'a';

        cout << "num1 = " << num1 << " " << "num2 = " << num2 << " "
            << "dbl1 = " << dbl1 << " " << "dbl2 = " << dbl2 << " "
            << "char1 = " << char1 << " " << "char2 = " << char2 << "\n";

        if (isEqual(num1, num2))
        {
            cout << "Integers are equal." << endl;
        }
        else
        {
            cout << "Integers are not equal." << endl;
        }

        if (isEqual(dbl1, dbl2))
        {
            cout << "Doubles are equal." << endl;
        }
        else
        {
            cout << "Doubles are not equal." << endl;
        }

        if (isEqual(char1, char2))
        {
            cout << "Characters are equal." << endl;
        }
        else
        {
            cout << "Characters are not equal." << endl;
        }
    }
    

    return 0;
}