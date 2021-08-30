#include "prot.hpp"

int get_type(std::string &v)
{
    if (v == "nanf" || v == "+inff" || v == "-inff" || 
        (v.find('.') != std::string::npos && (v.size() - 1 == 'f')))
        return 1;
    else if (v == "nan" || v == "+inf" || v == "-inf" || 
            v.find('.') != std::string::npos)
        return 2;
    else if (v.size() == 1 && !isdigit(v[0]))
        return 3;
    return 0;
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "No arguments for conversation." << std::endl;
        return 0;
    }
    std::string v(av[1]);
    int type = get_type(v);

    std::stringstream strm;
    int prec = 1;
    if (type == 1)
    {
        float value;
        prec = v.substr(v.find('.') + 1).size();
        strm << v.substr(0, v.size() - 1);
        strm >> value;
        p_char(value);
        p_int(value);
        p_float(value, prec);
        p_double(value, prec);
    }
    else if (type == 2)
    {
        double value;
        prec = v.substr(v.find('.') + 1).size();
        strm << v.substr(0, v.size() - 1);
        strm >> value;
        p_char(value);
        p_int(value);
        p_float(value, prec);
        p_double(value, prec);
    }
    else if (type == 3)
    {
        char value;
        strm << v;
        strm >> value;
        p_char(value);
        p_int(value);
        p_float(value, prec);
        p_double(value, prec);
    }
    else{
        int value;
        strm << v;
        strm >> value;
        p_char(value);
        p_int(value);
        p_float(value, prec);
        p_double(value, prec);
    }
    return 0;
}