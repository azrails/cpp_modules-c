#include <iostream>

int main(int argc, char **argv)
{
    int j = 0;

    if (argc == 1)
        std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
