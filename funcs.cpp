#include <iostream>

//function 1: adding
int sum( int a, int b )
{ 
    int c = a + b;
    return c; 
}

//function 2: printing
void print( std::string s )
{
    std::cout << s << std::endl;
}

//function 3: squaring
double square( double x )
{
    return x * x;
}

//function 4: joining strings
std::string join( std::string a, std::string b )
{
    return a + " " + b;
}

//function 5: printing Hello World
void print_hello()
{
    std::cout << "Hello World" << std::endl;
}

//MAIN
int main()
{   //function 1: adding
    std::cout << "5 + 3 equals " << sum(5,3) << std::endl;
    //function 2: printing
    print("This has been printed");
    //function 3: squaring
    std::cout << "The square of 3.5 is " << square(3.5) << std::endl;
    //function 4: joining strings
    std::cout << join("Doctor", "Who") << std::endl;
    //function 5: printing Hello World
    print_hello();
    //combined function 2 and 4: you can pass the return value from one function as the argument
    //of another, e.g.
    print( join("Hello", join("from", "C++")) );

    return 0;
}
