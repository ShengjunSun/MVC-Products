#ifndef CPP_MODEL_H
#define CPP_MODEL_H

class Model {
private:
	// x coordinate of the character
	int x; 
	// y coordinate of the character
	int y; 

public: 
	// default constructor
	Model() {
		x = 0; 
		y = 0; 
	}

	// custom constructor
	Model(int custom_x, int custom_y) {
		x = custom_x; 
		y = custom_y; 
	}

	// move the character up; the grid is 4x4; thus 0 ~ 3 in width; 0 ~ 3 in height; 
	void move_up() {
		// do nothing if the character is already at the top of the grid; 
		if (y != 0) {
			y = y - 1; 
		}
	}

	// move the character down; the grid is 4x4; 
	void move_down() {
		// do nothing if the character is already at the bottom of the grid; 
		if (y != 3) {
			y = y + 1; 
		}
	}

	// move the character left; 
	void move_left() {
		if (x != 0) {
			x = x - 1; 
		}
	}

	// move the character right; 
	void move_right() {
		if (x != 3) {
			x = x + 1; 
		}
	}

	int get_x() {
		return x; 
	}

	int get_y() {
		return y; 
	}
};

#endif
