
#include <iostream>
#include "Array.hpp"

int main() {

    {
    // INT TESTING 

    // Testing default constructor
    std::cout << std::endl;
    std::cout << "Testing default constructor" << std::endl;
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;
    std::cout << std::endl;

    // Testing constructor with size parameter
    std::cout << "Testing constructor with size parameter" << std::endl;
    Array<int> intArray(5);
    std::cout << "intArray size: " << intArray.size() << std::endl;
    std::cout << "Assigning values 0, 10, 20, 30, 40" << std::endl;
    for (std::size_t i = 0; i < intArray.size(); ++i)
        intArray[i] = i * 10;
    std::cout << std::endl;
    std::cout << "Default initialized elements in intArray: ";
    for (unsigned int i = 0; i < intArray.size(); ++i)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;
    std::cout << std::endl;    

    // Testing assignment operator and copy constructor
    std::cout << "Testing copy constructor" << std::endl;
    Array<int> copyArray(intArray);
    std::cout << "copyArray : "  << std::endl;	
    for (std::size_t i = 0; i < copyArray.size(); ++i) 
		  std::cout << copyArray[i] << std::endl;
    std::cout << "Modifying copy[0] to 100 "<< std::endl;
    copyArray[0] = 100;
    std::cout << "Modified copyArray[0] = " << copyArray[0] << std::endl;
    std::cout << "Original intArray[0] after modifying copyArray: " << intArray[0] << std::endl;
    std::cout << std::endl;  

    // Testing assignment operator
    Array<int> assignedArray;
    std::cout << "Testing Assigment Operator overload" << std::endl;
    assignedArray = intArray;
    std::cout << "assignedArray : "  << std::endl;	
    for (std::size_t i = 0; i < assignedArray.size(); ++i) 
		std::cout << assignedArray[i] << std::endl;  
    std::cout << "Modifying assignedArray[1] to 200 "<< std::endl;
    assignedArray[1] = 200; // Modify assignedArray
    std::cout << "Modified assignedArray[1] = " << assignedArray[1] << std::endl;
    std::cout << "Original intArray[1] after modifying assignedArray: " << intArray[1] << std::endl;
  std::cout << std::endl;


    // Testing subscript operator with bounds checking
    try 
    {
        intArray[4] = 300; //this works
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try 
    {
        intArray[10] = 400;//excecption
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try 
    {
        intArray[-1] = 500; //excecption
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "final Int Array after modifying intArray[4] to 300 : "  << std::endl;	
    for (std::size_t i = 0; i < intArray.size(); ++i) 
		  std::cout << intArray[i] << std::endl;  
    std::cout << std::endl;


    // CHAR TESTING 
    // Testing default constructor
    std::cout << "Testing Assigment Operator overload" << std::endl;
    Array<std::string> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // Testing constructor with size parameter
    Array<std::string> stringArray(5);
    std::cout << "stringArray size: " << stringArray.size() << std::endl;
    for (std::size_t i = 0; i < stringArray.size(); ++i)
        stringArray[i] = "AAA"; 

    // Testing default initialization
    std::cout << "Default initialized elements in stringArray: ";
    for (unsigned int i = 0; i < stringArray.size(); ++i)
        std::cout << stringArray[i] << " ";

    std::cout << std::endl;
    std::cout << std::endl;    
    // Testing assignment operator and copy constructor
    Array<std::string> copyArray(stringArray); // Using copy constructor
    std::cout << "copyArray : "  << std::endl;	
    for (std::size_t i = 0; i < copyArray.size(); ++i) 
		std::cout << copyArray[i] << std::endl;
    std::cout << "Modifying copy[0] to 100 "<< std::endl;
    copyArray[0] = "BBBB"; // Modify copyArray
    std::cout << "Modified copyArray[0] = " << copyArray[0] << std::endl;
    std::cout << "Original stringArray[0] after modifying copyArray: " << stringArray[0] << std::endl;

    // Testing assignment operator
    Array<std::string> assignedArray;
    assignedArray = stringArray; // Using assignment operator
    std::cout << "assignedArray : "  << std::endl;	
    for (std::size_t i = 0; i < assignedArray.size(); ++i) 
		std::cout << assignedArray[i] << std::endl;  
    std::cout << "Modifying assignedArray[1] to 200 "<< std::endl;
    assignedArray[1] = "CCC"; // Modify assignedArray
    std::cout << "Modified assignedArray[1] = " << assignedArray[1] << std::endl;
    std::cout << "Original stringArray[1] after modifying assignedArray: " << stringArray[1] << std::endl;
  std::cout << std::endl;
    // Testing subscript operator with bounds checking

    try {
        stringArray[4] = "FFF";
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        stringArray[10] = "DDD"; 
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        stringArray[-1] = "EEE"; 
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
  std::cout << std::endl;
    std::cout << "final std::string Array after modifying std::stringArray[4] to FFF : "  << std::endl;	
    for (std::size_t i = 0; i < stringArray.size(); ++i) 
		std::cout << stringArray[i] << std::endl;  
    std::cout << std::endl;
    }
    return 0;
}