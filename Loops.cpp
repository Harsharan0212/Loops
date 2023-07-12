// Harsharan Singh Gill  102106096  2EC5  PL2
#include <iostream>
using namespace std;

int main() 
{
    int i;

    // For loop without initialization and without increment
    for (; i <= 5;) 
    {
        cout << "For loop without initialization and without increment: " << i <<endl;
        i++;
    }

    // For loop without initialization
    for (; i <= 10; i++) 
    {
        cout << "For loop without initialization: " << i <<endl;
    }

    // For loop without increment
    for (i = 10;;) 
    {
        cout << "For loop without increment: " << i <<endl;
        if (i <= 0)
            break;
        i--;
    }

    // For loop with initialization, condition, and increment
    for (i = 0; i <= 5; i++) 
    {
        cout << "For loop with initialization, condition, and increment: " << i <<endl;
    }

    // While loop
    i = 0;
    while (i <= 5) 
    {
        cout << "While loop: " << i <<endl;
        i++;
    }

    // Do-while loop
    i = 0;
    do 
    {
        cout << "Do-while loop: " << i <<endl;
        i++;
    } while (i <= 5);

    return 0;
}
