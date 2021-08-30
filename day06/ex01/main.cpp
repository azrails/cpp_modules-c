#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


struct Data
{
    std::string s1;
    int x;
    std::string s2;
};

void p_serialize(void *dat)
{
    std::cout << "----------SERIALIZE DATA-----------" << std::endl;
    std::cout << "ser num: " << *reinterpret_cast<int *>(static_cast<char *>(dat) + 8) << std::endl;
    char *data = static_cast<char *>(dat);
    std::cout << "data string 1: ";
    for (int i = 0; i < 8; i++)
        std::cout << data[i];
    std::cout << std::endl;
    std::cout << "data string 2: ";
    for (int i = 12; i < 20; i++)
        std::cout << data[i]; 
    std::cout << std::endl;   
}

void *serialize(void)
{
    srand(time(NULL));
    std::string alp = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *data = new char[sizeof(std::string) * 2 + sizeof(int)];


    for(int i = 0 ; i < 8; i++){
        data[i] = alp[rand() % 59];
    }
    *reinterpret_cast<int *>(data + 8) = rand() % 9;
    for(int i = 12; i < 20; i++)
        data[i] = alp[rand() % 69];
    return reinterpret_cast<void *>(data); 
}

Data *deserialize(void *raw)
{
    Data *data = new Data;
    data->s1 = std::string(static_cast<char *>(raw), 8);
    data->s2 = std::string(static_cast<char *>(raw) + 12, 8);
    data->x = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
    return data;
}

int main(void)
{
    void *raw = serialize();
    p_serialize(raw);
    Data *data = deserialize(raw);

    std::cout << std::endl << "+++++++DESERIALIZE DATA+++++++" << std::endl;
    std::cout << "data string 1: " << data->s1 << std::endl;
    std::cout << "data number: " << data->x << std::endl;
    std::cout << "data string 2: " << data->s2 << std::endl;
    return 0;
}