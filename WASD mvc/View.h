#ifndef CPP_VIEW_H
#define CPP_VIEW_H

#include <iostream>

using namespace std; 

class View {
private: 
	// the x coordinate of the character
	int x;
	// the y coordinate of the character
	int y; 

public: 

	// default constructor
	View() {
		x = 0; 
		y = 0; 
	}

	// for setting the x coordinate of the character
	void set_x(int new_x) {
		x = new_x; 
	}

	// for setting the y coordinate of the character
	void set_y(int new_y) {
		y = new_y; 
	}

	// for printing the board, using the current x and y coordinate of the character. 
	void print_board() {
		string board = ""; 
		for (int i = 0; i < 4; i++) {
			string a_row = ""; 
			for (int j = 0; j < 4; j++) {
				if (i == y && j == x) {
					a_row = a_row + "X"; 
				}
				else {
					a_row = a_row + "_"; 
				}
			}
			board = board + a_row + '\n'; 
		}
		cout << board; 
	}
};

#endif