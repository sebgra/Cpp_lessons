#include <iostream>
#include <string.h>
using namespace std;

class MyString
{

private:
    char *buffer;

public:
    MyString(const char *initString)
    { // constructor

        buffer = NULL;
        if (initString != NULL)
        {
            buffer = new char[strlen(initString) + 1];
            strcpy(buffer, initString);
        }
    }

    ~MyString()
    { // destructor
        cout << "Invoking destructor, clearing up" << endl;

        if (buffer != NULL)
        {
            delete[] buffer;
        }
    }

    int GetLength()
    {
        return strlen(buffer);
    }

    const char *GetString()
    {
        return buffer;
    }
};

void UseLMyString(MyString str)
{
    cout << "String buffer in MyString is " << str.GetLength();
    cout << " characters long" << endl;
    return;
};

int main()
{

    MyString sayHello("Hello from String Class");
    UseLMyString(sayHello);
    return 0;
}
