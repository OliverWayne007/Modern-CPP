#include <bits/stdc++.h>
// #include <string_view>

using namespace std;

static int num_of_heap_memory_allocations = 0;

void* operator new (size_t size)
{
    cout << "Allocated size: " << size << endl;
    num_of_heap_memory_allocations++;
    cout << "Number of heap memory allocations: " << num_of_heap_memory_allocations << endl;
    return malloc(size);
}

int main()
{
    string str1 { "My name is Oliver Queen" };

    // string_view str2 { str1 };

    cout << "str1: " << str1 << endl;

    // cout << "str2: " << str2 << endl;
    
    return 0;
}