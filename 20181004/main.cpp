#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    // 偵測
    char input; // 建立一個字串 input
    cout << "請輸入字母" << endl;
    cin >> input; // 讀取內容
    int input_get = input; // 轉換字串為整數
    cout << "輸入的字母是:'" << input << "，'編碼為:'" <<  input_get << "'。" << endl;
    input_get = input_get - 65; //減去基數A的值65，若是其他數請自行更改。


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
