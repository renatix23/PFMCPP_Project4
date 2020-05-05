/*
 Project 4 - Part 2 / 9
 Video: Chapter 3 Part 6

 Create a branch named Part2

New/This/Pointers/References conclusion

    Build/Run often with this task to make sure you're not breaking the code with each step.
    I recommend committing after you get each step working so you can revert to a working version easily if needed.
 
 0) in the blank space below, declare/define an empty struct named 'A' on a single Line. 
     on the lines below it, write a struct named 'HeapA' that correctly shows how to own an instance of 'A' 
         on the heap without leaking, without using smart pointers. 
 */











 /*
 1) Edit your 3 structs so that they own a heap-allocated primitive type without using smart pointers  
         IntType should own a heap-allocated int, for example.
 
 2) give it a constructor that takes the appropriate primitive
    this argument will initialize the owned primitive's value.
         i.e. if you're owning an int on the heap, your ctor argument will initialize that heap-allocated int's value.
 
 3) modify those add/subtract/divide/multiply member functions from chapter 2 on it
         a) make them modify the owned numeric type
         b) set them up so they can be chained together.
             i.e.
             DoubleType dt(3.5);
             dt.add(3.0).multiply(-2.5).divide(7.2); //an example of chaining
 
 4) write add/subtract/divide/multiply member functions for each type that take your 3 UDTs
        These are in addition to your member functions that take primitives
        for example, IntType::divide(const DoubleType& dt);
        These functions should return the result of calling the function that takes the primitive.
     
 
 5) print out the results with some creative couts 
    i.e.
         FloatType ft(0.1f);
         IntType it(3);
         std::cout << "adding 3 and subtracting 'it' from 'ft' results in the following value: " << *ft.add(2.f).subtract( it ).value << std::endl;  //note the dereference of the `value` member of `ft`
 
 6) Don't let your heap-allocated owned type leak!
 
 7) click the [run] button.  Clear up any errors or warnings as best you can.
 
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

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

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
