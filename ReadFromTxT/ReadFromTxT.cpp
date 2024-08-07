#include <iostream>
#include <fstream>


int main()
{
    std::string readL;
    std::string find;
    std::cout << "Please, input a word you wonna find: " << std::endl;
    std::cin >> readL;
    std::ifstream texts;
    texts.open("C:\\tutorial-data\\texts.txt");
    int count = 0;
    while (!texts.eof())
    {
        texts >> find;
        if (readL == find)
        {
            count += 1;
        }
    }
    if (count == 0)
    {
        std::cout << "There is no numbers you searching for" << std::endl;
    }
    else
    {
        std::cout << "This is " << count << " number(s) you looking." << std::endl;
    }
}

