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

#include "Logic.hpp"

// choiceAlert : write computer choice

void Logic::choiceAlert(e_type computer) {
	switch (computer) {
		case paper:
			cout << "Computer choice: paper." << endl;
			break;
		case rock:
			cout << "Computer choice: rock." << endl;
			break;
		case scissors:
			cout << "Computer choice: scissors." << endl;
			break;
		default:
			break;
	}
};

// battle : logic

result Logic::battle(e_type player, e_type computer) {
	this->choiceAlert(computer);
	if (player == scissors) {
		cout << "Your choice: scissors." << endl << endl;
		switch (computer) {
			case scissors:
				return (draw);
			case rock:
				return (lose);
			case paper:
				return (win);
			case tNothing:
				break;
		}
	}
	if (player == paper) {
		cout << "Your choice: paper." << endl << endl;
		switch (computer) {
			case scissors:
				return (lose);
			case rock:
				return (win);
			case paper:
				return (draw);
			case tNothing:
				break;
		}
	}
	if (player == rock) {
		cout << "Your choice: rock." << endl << endl;
		switch (computer) {
			case scissors:
				return (win);
			case rock:
				return (draw);
			case paper:
				return (lose);
			case tNothing:
				break;
		}
	}
	return (nothing);
};
