/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPS                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaiyan <tsaiyan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:37:37 by tsaiyan           #+#    #+#             */
/*   Updated: 2021/07/21 21:58:59 by tsaiyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define RED	"\033[31m"
# define GREEN	"\033[32m"
# define RESET	"\033[37m"
# define STND 	"\033[33m"

#include "Logic.hpp"


// playerChoice : read player's choice from STDIN

e_type playerChoice(void) {
	string str;
	int enter = 0;

	cout << STND << "Make a choice!" << endl;
	cout << "1 - rock." << endl;
	cout << "2 - paper." << endl;
	cout << "3 - scissors." << endl;
	cout << "4 - exit." << RESET << endl << endl;

	getline(cin, str);
	enter = atoi(str.c_str());
	switch (enter) {
		case 1:
			return (rock);
		case 2:
			return (paper);
		case 3:
			return (scissors);
		case 4:
			exit(0);
		default:
			break;
	}
	return (tNothing);
}

/* MAIN */

int main () {
	Logic	game;
	e_type	player;
	e_type	computer;

	srand(static_cast<unsigned int>(time(0)));
	while (1) {
		player = playerChoice();
		computer = static_cast<e_type>(rand() % 3);
		
		switch (game.battle(player, computer)) {
			case win:
				cout << GREEN << "YOU WIN!\n" << RESET << endl;
				break;
			case lose:
				cout << RED << "YOU LOSE!\n" << RESET << endl;
				break;
			case draw:
				cout << RESET << "DRAW!\n" << RESET << endl;
			case nothing:
				break;
		};
	}
}
