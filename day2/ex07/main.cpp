#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int errors(int z)
{
    std::string map[10] = {"ERROR: Wrong number of arguments", "ERROR: No file" ,
                            "ERROR: Empty string 1", "ERROR: Empty string 2", "ERROR: file not open"};

    std::cout << map[z] << std::endl;
    return -1;
}

int get_replace(const char *file, std::string &s1, std::string &s2)
{
    std::ifstream ifs(file);
    std::stringstream strm;
    std::string text;
    size_t p = 0;

    if (!(ifs.is_open()))
        return(errors(4));
    
    strm << ifs.rdbuf();
    text = strm.str();
    while((p = text.find(std::string(s1), p)) != std::string::npos)
        text.replace(p, s2.length(), s2);
    ifs.close();
    std::ofstream ofs((std::string(file) + ".replace").c_str());
    ofs << text;
    ofs.close();
    return 0;
}

int main(int ac, char **av)
{
    int res = 0;

    if (ac != 4)
        return (errors(0));
    std::string file = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];  
    if (s1.empty())
        return(errors(2));
    if (s2.empty())
        return (errors(3));
    if (file.empty())
        return(errors(1));
    if(get_replace((const char *)av[1] , s1, s2))
        return(-1);
    return 0;
}