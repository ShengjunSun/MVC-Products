Hello, I'm Shengjun Sun. 

This product is for the purpose of practicing making use of MVC concept. 

The product functions as follows: 
on a 4x4 grid, you may move a character (represented by 'X') by pressing W; A; S; D command, in which: 
- 'W' correspond to moving up. 
- 'S' correspond to moving down. 
- 'A' correspond to moving left. 
- 'D' correspond to moving right. 

The entire product is separated into Model; View; and Controller, in which: 

The Model will: 
- keep track of the character's position. 
- nest methods for making changes to the character's position. 
- prevent the character's position from going out of the board. 

The Controller will: 
1) Listen to keyboard input from the user. 
2) Ask the model to make corresponding changes based on the keyboard input. 
3) Get the newest information from the model; 
4) Support the newest information to the View; and ask the View to print the newest information on the console. 

The View will: 
- be responsible for printing the specialized information on the console. 
- is separate from the model; thus cannot read from the model or do anything to the model. 

Upon downloading the code and put them into editors like Visual Studio, you may run it and see the result. 

The provided Makefile support running the product inside of a Linux environment. 

Feel free to contact me for any help or assistance: 
sun.sheng@northeastern.edu

