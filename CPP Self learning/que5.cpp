#include <iostream>
using namespace std;

// Own implementation of strlen()
int strlen(const char *str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

// Own implementation of strcpy()
void strcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    // Copy null character also
    dest[i] = '\0';
}

int main()
{
    char str[100];
    char copy[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Length = " << strlen(str) << endl;

    strcpy(copy, str);

    cout << "Copied string = " << copy << endl;

    return 0;
}