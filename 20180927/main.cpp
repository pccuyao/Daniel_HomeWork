#include <iostream>

using namespace std;

int main()
{
    // float (A)
    float Apple,Inpu_Apple;
    Apple = 6.56;
    cout << "Question 1 : Please type a float" << endl;
    cin >> Inpu_Apple;
    cout << "You Type : >" << Inpu_Apple << "< And Question is >" << Apple << "< So:" << endl << endl;
    if(Inpu_Apple == Apple)
        cout << "It's same!" << endl;
    else
        cout << "It's not same !" << endl << endl;
    // float (char)

    char banana,Inpu_banana;
    cout << "Question 2 : Please type a char" << endl;
    banana >> 'Daniel';
    cin >> Inpu_banana;
    return 0;
}
