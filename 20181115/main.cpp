#include <iostream>

using namespace std;

int main()
{
    int num,i,j,e;
    cout << "insert number 4" << endl;
    cin >> num;

    if(num==4)
    {
           for(j=1;j<=num;j++) //Main
           {
               for(i=j;i<num;i++) //Make space
               {
                   cout<< " ";
               }
               for(e=j;e>0;e--) //make number
                {
                    cout << e ;
                }
                cout << endl;
          }
    }
    return 0;
}
