/*
 * ITP1_6_C.cpp
 *
 *  Created on: 2016/05/18
 *      Author: suna
 */

#include <iostream>

using namespace std;

int main(void)
{
	int kensu;	//??¶??°
	static char SPACE = ' ';
	static int number_of_rooms_floor = 10; //1????????¢??????????????¨?±???°
	static int kaisu = 3;					//??¬???????????°
	static int munesu = 4;					//??¬???????£???°
	static int min_nyukyosha = 0;			//1??¨?±?????????????????°??????°
	int nyukyosha[munesu][kaisu][number_of_rooms_floor]; //??\?±??????°

	int input_mune;  		//??\?????????????£???????
	int input_kaisu; 		//??\???????????????
	int input_room;  		//??\??????????????¨?±???????
	int input_nyukyosha; 	//??\??????????????\?±??????°

	//??\?±??????°????????????
	for(int i = 0; i < munesu; i++)
	{
		for(int j = 0; j < kaisu; j++)
		{
			for(int k = 0; k < number_of_rooms_floor; k++)
			{
				nyukyosha[i][j][k] = min_nyukyosha;
			}
		}
	}

	//??¶??°??\???
	cin >> kensu;

	//??\?±??????°??\???
	for(int i = 0; i < kensu; i++)
	{
		cin >> input_mune >> input_kaisu >> input_room >> input_nyukyosha;
		nyukyosha[input_mune-1][input_kaisu-1][input_room-1] += input_nyukyosha;
	}

	//??????
	for(int i = 0; i < munesu; i++)
	{
		if(i != 0)
		{
			cout << "####################" << endl;
		}

		for(int j = 0; j < kaisu; j++)
		{
			for(int k = 0; k < number_of_rooms_floor; k++)
			{
				cout << SPACE << nyukyosha [i][j][k];
			}
			cout << endl;
		}
	}
	return 0;
}