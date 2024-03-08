#include <iostream>
#include <string>

class Dice
{
/*=======================================*/
/*                Public                 */
/*=======================================*/
public:
	/*-----------------------------------*/
	/*           ???????????¢??°              */
	/*-----------------------------------*/

	/* ????????????????????????????????????          */
	/* ????????????????????? 1,2,3,4,5,6 ????????? */
	Dice()
	{
		init(1, 2, 3, 4, 5, 6);
	}
	
	/* ?????°??§?????????????????????????????§??????????????????????????? */
	Dice(int top, int south, int east, int west, int north, int bottom)
	{
		init(top, south, east, west, north, bottom);
	}
	
	/* ?????????????????? */
	~Dice()
	{
	}
	

	/* ?????´???????????????????????? */
	void roll_north(void)
	{
		rotate(TOP, NORTH, BOTTOM, SOUTH);
		return;
	}

	/* ?????´???????????????????????? */
	void roll_south(void)
	{
		rotate(TOP, SOUTH, BOTTOM, NORTH);
		return;
	}
	
	/* ??±??´???????????????????????? */
	void roll_east(void)
	{
		rotate(TOP, EAST, BOTTOM, WEST);
		return;
	}
	
	/* ?\???´???????????????????????? */
	void roll_west(void)
	{
		rotate(TOP, WEST, BOTTOM, EAST);
		return;
	}

	/* ?????´???????????????????????? */
	void roll_right(void)
	{
		rotate(NORTH, EAST, SOUTH, WEST);
		return;
	}

	/* ?????´???????????????????????? */
	void roll_left(void)
	{
		rotate(NORTH, WEST, SOUTH, EAST);
		return;
	}

	/* ?????¢????????????????????? */
	int get_top(void)
	{
		return num[TOP];
	}
	
	int get_south(void)
	{
		return num[SOUTH];
	}

	int get_east(void)
	{
		return num[EAST];
	}

	void roll_top_to(int value)
	{
		if(value == num[TOP])
		{
			/* ??????????????? */
		}
		else if(value == num[SOUTH])
		{
			roll_north();
		}
		else if(value == num[EAST])
		{
			roll_west();
		}
		else if(value == num[WEST])
		{
			roll_east();
		}
		else if(value == num[NORTH])
		{
			roll_south();
		}
		else if(value == num[BOTTOM])
		{
			roll_north();
			roll_north();
		}
		else
		{
			/* ??????????????? */
		}
		
		return;
	}

	/* ???????????°???????????? */
	void print(void)
	{
		std::cout << "t=" << num[TOP]    << std::endl;
		std::cout << "s=" << num[SOUTH]  << std::endl;
		std::cout << "e=" << num[EAST]   << std::endl;
		std::cout << "w=" << num[WEST]   << std::endl;
		std::cout << "n=" << num[NORTH]  << std::endl;
		std::cout << "b=" << num[BOTTOM] << std::endl;
		return;
	}
/*=======================================*/
/*                Private                */
/*=======================================*/
private:
	/*-----------------------------------*/
	/*           ?????°??????                */
	/*-----------------------------------*/
	/* ????????¢???????????? */
	enum Face
	{
		TOP = 0,		/* ?????¢ */
		SOUTH,			/* ?????¢ */
		EAST,			/* ??±??¢ */
		WEST,			/* ?\???¢ */
		NORTH,			/* ?????¢ */
		BOTTOM,			/* ?????¢ */
		NUM_OF_FACES	/* ??¢??° */
	};

	/*-----------------------------------*/
	/*           ???????????¢??°              */
	/*-----------------------------------*/
	/* ??????????????????????????????(?????¢) */
	Dice(const Dice &);
	
	/* ??£??\????????? (?????¢) */
	void operator=(const Dice &);

	/* ????????????????????? */
	void init(int top, int south, int east, int west, int north, int bottom)
	{
		num[TOP]    = top;
		num[SOUTH]  = south;
		num[EAST]   = east;
		num[WEST]   = west;
		num[NORTH]  = north;
		num[BOTTOM] = bottom;
		return;
	}

	/*     num[a]=A,num[b]=B,num[c]=C,num[d]=D */
	/* --> num[a]=D,num[b]=A,num[c]=B,num[d]=C */
	/* ?????????????????????????????????????????§?????????      */
	void rotate(Face a, Face b, Face c, Face d)
	{
		int temp = num[d];
		num[d]   = num[c];
		num[c]   = num[b];
		num[b]   = num[a];
		num[a]   = temp;
		return;
	}

	/*-----------------------------------*/
	/*           ??????????????°              */
	/*-----------------------------------*/
	int num[NUM_OF_FACES];	/* ????????? */
};

/*--------------------------------------------------------------------------*/
void ITP1_11_A_main(void)
{
	int top, south, east, west, north, bottom;
	std::string commands;
	
	std::cin >> top >> south >> east >> west >> north >> bottom;
	std::cin >> commands;
	
	Dice dice(top, south, east, west, north, bottom);

	int command_length = commands.length();
	for(int i = 0; i < command_length; ++i)
	{
		switch(commands[i])
		{
			case 'N':
				dice.roll_north();
				break;
			case 'S':
				dice.roll_south();
				break;
			case 'E':
				dice.roll_east();
				break;
			case 'W':
				dice.roll_west();
				break;
			default:
				/* ????????\??????????????????????????? */
				break;
		}
	}

	std::cout << dice.get_top() << std::endl;
	
	return;
}

void ITP1_11_B_main(void)
{
	int top, south, east, west, north, bottom;
	int num_of_questions;
	
	std::cin >> top >> south >> east >> west >> north >> bottom;
	std::cin >> num_of_questions;
	
	Dice dice(top, south, east, west, north, bottom);

	for(int i = 0; i < num_of_questions; ++i)
	{
		int q_top, q_south;
		
		std::cin >> q_top >> q_south;
		
		dice.roll_top_to(q_top);
		while(dice.get_south() != q_south)
		{
			dice.roll_right();
		}
		
		std::cout << dice.get_east() << std::endl;
	}
	return;
}

/*--------------------------------------------------------------------------*/
void roll(Dice& dice, std::string& cmd)
{
	if(cmd == "North")
	{
		dice.roll_north();
	}
	else if(cmd == "East")
	{
		dice.roll_east();
	}
	else if(cmd == "South")
	{
		dice.roll_south();
	}
	else if(cmd == "West")
	{
		dice.roll_west();
	}
	else if(cmd == "Right")
	{
		dice.roll_right();
	}
	else if(cmd == "Left")
	{
		dice.roll_left();
	}
	else
	{
		/* ??????????????? */
	}
	
	return;
}

void Volume5_0502_main(void)
{
	for(;;)
	{
		int n;
		std::cin >> n;
		if(n == 0)
		{
			break;
		}
		
		Dice dice;
		int sum = dice.get_top();

		for(int i = 0; i < n; ++i)
		{
			std::string command;
			std::cin >> command;
			
			roll(dice, command);
			
			sum += dice.get_top();
		}
		
		std::cout << sum << std::endl;
	}
	
	return;
}
/*--------------------------------------------------------------------------*/

int main(void)
{
//	ITP1_11_A_main();
	ITP1_11_B_main();
//	Volume5_0502_main();

	return 0;
}