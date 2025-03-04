// Copyright (c) 2025 Xiaohan All rights reserved.
//
// Created by: Xiaohan
// Date: Feb 28, 2025
// This program is created for calculating the prize of the pizza

#include <iostream>
int main() {
    // declear the value of the constant
    const float HST = 0.13;
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.5;
    float diameter, subtotal, total, tax;
    // get the required diameter data from the user
    std::cout << "Pleas enter the diameter of the pizza in inches: ";
    // store the data as inches
    std::cin >> diameter;
    // calculate the prize of the pizza by using the formulas
    subtotal = LABOUR_COST + INGRED_COST * diameter + RENTAL_COST;
    tax = subtotal * HST;
    total = subtotal + tax;
    // print out the result of the cost of the pizza
    std::cout << "\n";
    // display the final result
    std::cout << "The prize of the pizza is = $ "
    << total << std::endl;
}
