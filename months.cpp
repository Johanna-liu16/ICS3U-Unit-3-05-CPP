// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Oct 2022
// This program identifies a month

#include <iostream>
#include <string>

int main() {
    // this function identifies a month
    char monthAsInt;

    // input
    std::cout << "This program converts a number to a month." << std::endl;
    std::cout << "Enter the number of a month: ";
    std::cin >> monthAsInt;

    // process
    switch (monthAsInt) {
        case '1':
            std::cout << "This month is January." << std::endl;
            break;
        case '2':
            std::cout << "This month is February." << std::endl;
            break;
        case '3':
            std::cout << "This month is March." << std::endl;
            break;
        case '4':
            std::cout << "This month is April." << std::endl;
            break;
        case '5':
            std::cout << "This month is May." << std::endl;
            break;
        case '6':
            std::cout << "This month is June." << std::endl;
            break;
        case '7':
            std::cout << "This month is July." << std::endl;
            break;
        case '8':
            std::cout << "This month is August." << std::endl;
            break;
        case '9':
            std::cout << "This month is September." << std::endl;
            break;
        case '10':
            std::cout << "This month is October." << std::endl;
            break;
        case '11':
            std::cout << "This month is November." << std::endl;
            break;
        case '12':
            std::cout << "This month is December." << std::endl;
            break;
        default:
            std::cout << "Invalid month" << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
