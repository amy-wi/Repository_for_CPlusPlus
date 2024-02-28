#include <iostream>

//MAIN ONLY
int main()
{
    //input what integer you want to test the conditions on
    int i = 55;
    
    //if your input integer is less or equal to than 10, then the output will print a statement to say so
    if (i <= 10)
    {
        std::cout << "i is less than or equal to 10" << std::endl;
    }
    //if your input integer is more than or equal to 100, then the output will print a statement to say so
    else if (i >= 100)
    {
        std::cout << "i is more than or equal to 100" << std::endl;
    }
    //if your input integer is between 10 and 100 (non inclusive), then the output will print a statement to say so
    else
    {
        std::cout << "i is somewhere between 10 and 100" << std::endl;
    }

    return 0;
}
