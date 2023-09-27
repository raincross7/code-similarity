#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
	
	int battle_num;	// ???????????°
	string taro_card;	// ????????????????????¢??????????????????
	string hanako_card;	// ??±?????????????????¢??????????????????
	int taro_score = 0;	
	int hanako_score = 0;

	// ??\???
	cin >> battle_num;

	for (size_t i = 0; i < battle_num; i++)
	{
		cin >> taro_card;
		cin >> hanako_card;

		// ??????
		if (taro_card > hanako_card)
		{
			taro_score += 3;
		}
		else if (taro_card < hanako_card) {
			hanako_score += 3;
		}
		else
		{
			taro_score += 1;
			hanako_score += 1;
		}
	}
	cout << taro_score << " " << hanako_score << endl;
	return 0;
}