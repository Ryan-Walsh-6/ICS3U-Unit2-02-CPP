// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on November 22 2020
// This program calculates the area and perimeter of a rectangle

#include <iostream>
#include <cmath>

int main() {
    // this function calculates area and perimeter of a rectangle
    int Length;
    int Width;
    int Area;
    int Perimeter;

    // input
    std::cout << "Enter the length of rectangle (cm): ";
    std::cin >> Length;
    std::cout << "Enter the width of rectangle (cm): ";
    std::cin >> Width;

    // process
    Area = Length * Width;
    Perimeter = 2 * (Length + Width);

    // output
    std::cout << std::endl;
    std::cout << "Area is " << Area << "cm^2" << std::endl;
    std::cout << "Perimeter is " << Perimeter << "cm" << std::endl;
}
