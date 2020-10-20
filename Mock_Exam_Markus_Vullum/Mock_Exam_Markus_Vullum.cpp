#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <stdio.h>
#include <windows.h>
 
int passcode;
int task;
int result;


int main()
{
	std::cout << "Please use ... to move around and log in\n";
	std::cout << "Passscode is ...\n";
	std::cout << " | * | 2 | 3 |\n";
	std::cout << " | 4 | 5 | 6 |\n";
	std::cout << " | 7 | 8 | 9 |\n";
	
	system("pause");
	system("cls");

	std::cout << "Menu bar; please selct one of the following numbers: \n";
	std::cout << "1. Dice roll\n";
	std::cout << "2. Health bar\n";
	std::cout << "3. Pack man grid\n";
	std::cout << "4. Pack man w. dots\n";
	std::cout << "5. Quit\n";
	std::cin >> task;

	//########################
	//#                      #
	//#       TASK 1         #
	//#                      #
	//########################

	if (task == 1) {
		system("cls");

		int main(int argc, const char* argv[]); {
			int roll, i, roll_times = 2000;
			int dice[6] = { 0 };
			srand(unsigned(time(NULL)));
			for (i = 0; i < roll_times; i++)
			{
				roll = rand() % 6;
				dice[roll]++;
			}
			for (int k = 1; k <= 6; k++)
			{
				std::cout << k << " Rolled: " << dice[k - 1] << " times." << std::endl;
			}

		}
	
	}

	//########################
	//#                      #
	//#       TASK 2         #
	//#                      #
	//########################

	else if (task == 2) {
		system("cls");

	}

	//########################
	//#                      #
	//#       TASK 3         #
	//#                      #
	//########################
	else if (task == 3) {
		system("cls");

		char tmp_map[20][40];

		char map[20][40] =
		{
		 "#######################################",
		 "#                 ##                  #",
		 "#    ##  ###      ##       ###  ##    #",
		 "#        ###      ##       ###        #",
		 "#                                     #",
		 "#    #######               #######    #",
		 "#                ###                  #",
		 "#####     #                #      #####",
		 "#####     ####          ####      #####",
		 "#         #                #          #",
		 "#         #       ##       #          #",
		 "#         #     ######     #          #",
		 "#####                             #####",
		 "#####        ###########          #####",
		 "#            ###########              #",
		 "#     #          ###            #     #",
		 "#     ####       ###        #####     #",
		 "#                                     #",
		 "#######################################"
		};
		void ShowMap();
		{
			for (int i = 0; i < 20; i++)
			{
				printf("%s\n", map[i]);
			}
		}
	}

	//########################
	//#                      #
	//#       TASK 4         #
	//#                      #
	//########################
	else if (task == 4) {
		system("cls");
		char tmp_map[20][40];

		char map[20][40] =
		{
		 "#######################################",
		 "#                 ##                  #",
		 "#    ##  ###      ##       ###  ##    #",
		 "#        ###      ##       ###        #",
		 "#                                     #",
		 "#    #######               #######    #",
		 "#                ###                  #",
		 "#####     #                #      #####",
		 "#####     ####          ####      #####",
		 "#         #                #          #",
		 "#         #       ##       #          #",
		 "#         #     ######     #          #",
		 "#####                             #####",
		 "#####        ###########          #####",
		 "#            ###########              #",
		 "#     #          ###            #     #",
		 "#     ####       ###        #####     #",
		 "#                                     #",
		 "#######################################"
		};
		void ShowMap();
		{
			for (int i = 0; i < 20; i++)
			{
				printf("%s\n", map[i]);
			}
		}

	}

	//########################
	//#                      #
	//#       TASK 5         #
	//#                      #
	//########################
	else if (task == 5) {
		system("cls");

	}

	return 0;
}