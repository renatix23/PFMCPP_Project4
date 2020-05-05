/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1

 Purpose:  This project will take you through the process of writing a class that wraps a numeric type, beginning with writing simple member functions and ending with a fully templated class with lots of functionality. 
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.
 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );
 3) implement the appropriate action in the member function. 
         a) Be aware that floating point division by 0 is legal, but integer division by 0 will crash your program.  
         b) Handle this possible input when you write your divide() functions.
         c) you should warn the user if they're doing floating-point-division-by-zero but not prevent the division from happening
         d) you should warn AND prevent the division from happening if it is an integer-division-by-zero.
 
 4) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 5) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 6) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 7) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */
#include <iostream>

struct FloatType
{
    float add(float lhs, float rhs);
    float substract(float lhs, float rhs);
    float multiply(float lhs, float rhs );
    float divide(float lhs, float rhs );
};

float FloatType::add(float lhs, float rhs)
{
    return lhs + rhs;
}

float FloatType::substract(float lhs, float rhs)
{
    return lhs - rhs;
}

float FloatType::multiply(float lhs, float rhs)
{
    return lhs * rhs;
}

float FloatType::divide(float lhs, float rhs)
{
    if (rhs == 0.0f)
    {
        std::cout << "Warning! You are trying to divide a float type by zero!" << std::endl;
    }
    
    return lhs / rhs;
}


struct DoubleType
{
    double add(double lhs, double rhs);
    double substract(double lhs, double rhs);
    double multiply(double lhs, double rhs );
    double divide(double lhs, double rhs );
};

double DoubleType::add(double lhs, double rhs)
{
    return lhs + rhs;
}

double DoubleType::substract(double lhs, double rhs)
{
    return lhs - rhs;
}

double DoubleType::multiply(double lhs, double rhs)
{
    return lhs * rhs;
}

double DoubleType::divide(double lhs, double rhs)
{
    if (rhs == 0.0)
    {
        std::cout << "Warning! You are trying to divide a double type by zero!" << std::endl;
    }
    return lhs / rhs;
}


struct IntType
{
    int add(int lhs, int rhs);
    int substract(int lhs, int rhs);
    int multiply(int lhs, int rhs);
    int divide(int lhs, int rhs );
};

int IntType::add(int lhs, int rhs)
{
    return lhs + rhs;
}

int IntType::substract(int lhs, int rhs)
{
    return lhs - rhs;
}

int IntType::multiply(int lhs, int rhs)
{
    return lhs * rhs;
}

int IntType::divide(int lhs, int rhs)
{
    if (rhs == 0)
    {
        std::cout << "Warning! You are trying to divide an int type by zero!" << std::endl;
        return 0;
    }

    return lhs / rhs;
}


#include <iostream>
int main()
{
    FloatType ft;
    DoubleType dt;
    IntType it;

    auto resultFt = ft.add(7.5f, 234.3f);
    std::cout << "Result of ft.add(): " << resultFt << std::endl;

    resultFt = ft.substract(21.2f, 5.32f);
    std::cout << "Result of ft.substract(): " << resultFt << std::endl;

    resultFt = ft.multiply(313.3f, 412.2f);
    std::cout << "Result of ft.multiply(): " << resultFt << std::endl;

    resultFt = ft.divide(12.3f, 2.3f);
    std::cout << "Result of ft.divide(): " << resultFt << std::endl;


    auto resultDt = dt.add(213.5, 312.5);
    std::cout << "Result of dt.add(): " << resultDt << std::endl;

    resultDt = dt.substract(12.2, 6.2);
    std::cout << "Result of dt.substract(): " << resultDt << std::endl;

    resultDt = dt.multiply(6, 3);
    std::cout << "Result of dt.multiply(): " << resultDt << std::endl;

    resultDt = dt.divide(10.0, 2.0);
    std::cout << "Result of dt.divide(): " << resultDt << std::endl;


    auto resultIt = it.add(123, 42);
    std::cout << "Result of it.add(): " << resultIt << std::endl;

    resultIt = it.substract(20, 4);
    std::cout << "Result of it.substract(): " << resultIt << std::endl;

    resultIt = it.multiply(8, 3);
    std::cout << "Result of it.multiply(): " << resultIt << std::endl;

    resultIt = it.divide(20, 0);
    std::cout << "Result of it.divide(): " << resultIt << std::endl;


    std::cout << "good to go!" << std::endl;
}
