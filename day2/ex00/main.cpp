#include <iostream>
#include "Pony.hpp"


void ponyOnTheHeap(void)
{
    Pony *pony_on_heap = new Pony;
    
    std::cout << "this is pony on heap" << std::endl;
    pony_on_heap->PonyInfo();
    delete pony_on_heap;
    std::cout << "Pony on heap was deleted" << std::endl;
}

void ponyOnTheStack(void)
{
    Pony pony_on_stack("darksir", 3);
    
    std::cout << "this is pony on stack" << std::endl;
    pony_on_stack.PonyInfo();
}

int main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}