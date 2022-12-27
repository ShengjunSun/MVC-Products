#ifndef CPP_CONTROLLER_H
#define CPP_CONTROLLER_H

#include "Model.h"
#include "View.h"
#include <iostream>

using namespace std; 

class Controller {
private: 
	Model model; 
	View view; 

public: 
	// customized constructor
	Controller(Model given_model, View given_view) {
		model = given_model; 
		view = given_view; 
	}

	void go() {
		while (true) {
			cout << "Please enter your command: (w; a; s; d)" << endl; 
			string command; 
			cin >> command; 
			if (command == "w") {
				model.move_up(); 
			}
			else if (command == "s") {
				model.move_down(); 
			}
			else if (command == "a") {
				model.move_left(); 
			}
			else {
				model.move_right(); 
			}

			view.set_x(model.get_x()); 
			view.set_y(model.get_y()); 
			view.print_board(); 
		}
	}
};

#endif