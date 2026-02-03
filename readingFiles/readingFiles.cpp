// readingFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    FILE* fp = fopen("in.txt", "r");
    if (fp == NULL) {
        printf("Eroare: Nu am putut deschide fisierul in.txt\n");
        return 1;
    }

    char buffer[100];
    int suma_totala = 0;
    while (fgets(buffer, size(buffer), fp) != NULL)
    {
        int numar = my_atoi(buffer);
        suma_totala += numar;

    }
    printf("%d\n", suma_totala);
    fclose(fp);
    return 0;

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
