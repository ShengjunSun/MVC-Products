// Simple MVC.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Model.h"
#include "View.h"
#include "Controller.h"

int main()
{
    // use default constructor to construct the model; 
    Model the_model; 
    // use default constructor to construct the view; 
    View the_view; 
    // supply the model and the view to a controller; 
    Controller the_controller(the_model, the_view); 

    the_controller.go(); 
}

