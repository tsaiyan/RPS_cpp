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

#ifndef Logic_hpp
#define Logic_hpp

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace::std;

enum e_result {
	win,
	lose,
	draw,
	nothing
};

enum e_type {
	scissors,
	paper,
	rock,
	tNothing
} ;

class Logic {
private:
	//write computer choice
	void choiceAlert(e_type computer);
public:
	// battle logic
	e_result battle(e_type one, e_type two);
};

#endif /* Logic_hpp */
