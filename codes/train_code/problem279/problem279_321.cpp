// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int i = 0;
    int cnt = 0;
    while (i < (int)s.size() - 1) {

        if (s[i] == '0' && s[i+1] == '1') {
            cnt += 2;
            //s = s.substr(0, i) + s.substr(i + 2, s.size() - (i + 2));
           s= s.erase(i, 2);
            if(i!=0)i--;
        }
        else if (s[i] == '1' && s[i+1] == '0') {
            cnt += 2;
           // s = s.substr(0, i) + s.substr(i + 2, s.size() - (i + 2));
           s= s.erase(i, 2);
            if(i!=0)i--;
        }
        else {
            i++;
        }

     /*   cout << s << endl;
        cout << s.size()<<i << endl;
        */
    }
    cout << cnt << endl;
    return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
