#include <iostream>

using namespace std;

int main()
{
    int num,i,j,e;
    cout << "insert number 4" << endl;
    cin >> num;

    if(num==4)
    {
           for(j=1;j<=num;j++) //主迴圈
           {
               for(i=j;i<num;i++) //製造空格
               {
                   cout<< " ";
               }
               for(e=j;e>0;e--) //製造數字
                {
                    cout << e ;
                }
                cout << endl;
          }
    }
    return 0;
}
