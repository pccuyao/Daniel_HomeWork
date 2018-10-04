#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    // 偵測
    char input;
    cout << "請輸入字母" << endl;
    cin >> input;
    int input_get = input;
    cout << "輸入的字母是:'" << input << "，'ASCII碼為:'" <<  input_get << "'。" << endl;
    input_get = input_get - 97;

    // 迴圈
    cout << "開始" << endl;
    for(int i = 0;i <= input_get ;i++){
        for(int x = 0;x <= i;x++){
            cout << char(i + 97);
        }
        cout << endl;
    }
    return 0;
}
