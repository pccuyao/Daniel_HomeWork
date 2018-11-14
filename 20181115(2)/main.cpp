#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    cout << "key any you want" <<endl;
    char ch;
    string str;
    for(;;) //star to scan
    {
        if(str.size()<10) // if string size
        {
            ch=getch(); // get char
            if(ch == 8) // if char is (Backspace, ASII 8)
                {
                    str.erase(str.end() -1); // erase it
                }
                    else
                {
                        str = str + ch; // add it
                }
            cout << "<" << str.size() << ">" << str << endl; // print it
        }
            else
        {
            cout << endl << "over!" << endl; //end it
            return 0;
        }
    }

    return 0;
}
