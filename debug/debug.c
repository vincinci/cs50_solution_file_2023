// Become familiar wih C syntax
// Learn to debug buggy code

#include <cs50.h>

int main(void)
{

    // Ask for your name and where live
    string name = get_string("What is your name? %s")
    string location = get_string("Where do you live? %s")

    // Say hello
    print("Hello", name, location)
}
