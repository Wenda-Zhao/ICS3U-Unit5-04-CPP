// Copyright (c) 2020 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Jan 2021
// This program for return value

#define _USE_MATH_DEFINS

#include <iostream>
#include <cmath>

    std::string radius;
    std::string height;

float Cylinder_volume() {
    // This function is for caculate the volume

    float volume;
    int radius_int;
    int height_int;

    // process
    try {
        radius_int = std::stoi(radius);
        if (radius_int > 0) {
            try {
                height_int = std::stoi(height);
                if (height_int > 0) {
                    volume = pow(radius_int, 2) * M_PI * height_int;
                    std::cout << "The volume of the cylinder is:"
                              << volume << "mm³";

                    return volume;
                } else {
                    std::cout << "The height is not a positive number"
                              << std::endl;
                }
            } catch (std::invalid_argument) {
                std::cout << "The height is not a integer" << std::endl;
            }
        } else {
            std::cout << "The radius is not a positive number" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "The radius is not a integer" << std::endl;
    }
}


int main() {
    // This function is get input

    float volume;

    // input
    std::cout << "Enter the radius(mm):";
    std::cin >> radius;
    std::cout << "Enter the height(mm):";
    std::cin >> height;

    // call function
    volume = Cylinder_volume();
}
