#include <iostream>

#include <thread>

#include <mutex>

// using namespace std;

void thread1Fun()
{
    std :: cout << "Executing thread1...." << std :: endl;
}

void thread2Fun()
{
    std :: cout << "Executing thread2....." << std :: endl;
}

int main()
{
    std :: thread t1(thread1Fun);
    std :: thread t2(thread2Fun);

    std :: cout << "The main function ends...." << std :: endl;

    return 0;
}