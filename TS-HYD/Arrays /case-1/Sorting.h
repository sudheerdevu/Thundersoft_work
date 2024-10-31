#ifndef SORTING_H
#define SORTING_H

class Sorting {
private:
    int* arr;     // Pointer to hold the array
    int size;     // Size of the array

public:
    // Constructor to initialize the array
    Sorting(int* inputArr, int size);

    // Destructor to release allocated memory
    ~Sorting();

    // Function to display the array in ascending order
    void displayAscending() const;

    // Function to display the array in descending order
    void displayDescending() const;
};

#endif