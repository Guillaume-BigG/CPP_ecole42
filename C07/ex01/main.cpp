#include "iter.hpp"
#include <cstring> 

template<typename T>
void print(T& a) 
{
	std::cout << a << std::endl;
}

template<typename T>
void decreased(T& a) 
{
	--a;
}

template<typename T>
void multiplybyfive(T& a)
{
    a = a*5;
}

int main(void) 
{

   // Int array
	int intArray[5] = {1, 2, 3, 4, 5};
    std::cout << std::endl;
	std::cout << "Original integer array:" << std::endl;
	for (int i = 0; i < 5; ++i) 
		std::cout << intArray[i] << " ";

    std::cout << std::endl;
	std::cout << "Decreamenting integer array elements:" << std::endl;
	::iter(intArray, 5, &decreased<int>);
	::iter(intArray, 5, &print<int>);
    std::cout << std::endl;

    std::cout << "Multiplying by 5 integer array elements:" << std::endl;
	::iter(intArray, 5, &multiplybyfive<int>);
	::iter(intArray, 5, &print<int>);
    std::cout << std::endl;

    // Float array
	float floatArray[5] = {1.42, 2.42, 3.42, 4.42, 5.42};
	std::cout << "Original floateger array:" << std::endl;
	for (int i = 0; i < 5; ++i) 
		std::cout << floatArray[i] << " ";
    std::cout << std::endl;
	std::cout << "Decreamenting float array elements:" << std::endl;
	::iter(floatArray, 5, &decreased<float>);
	::iter(floatArray, 5, &print<float>);
    std::cout << std::endl;
    std::cout << "Multiplying by 5 floateger array elements:" << std::endl;
	::iter(floatArray, 5, &multiplybyfive<float>);
	::iter(floatArray, 5, &print<float>);
    std::cout << std::endl;

    // Char array
	char *charArray = new char[4];
    std::strcpy(charArray, "bbb");
	std::cout << "Original char array:" << std::endl;
	for (int i = 0; i < 3; ++i)
		std::cout << charArray[i] << " ";
    std::cout << std::endl;
	std::cout << "Decreamenting char array elements:" << std::endl;
	::iter(charArray, 3, &decreased<char>);
	::iter(charArray, 3, &print<char>);
    std::cout << std::endl;
    delete [] charArray;

    // String array
	std::string strArray[3] = {"aaa", "bbb", "ccc"};
	std::cout << "Original string array:" << std::endl;
	for (int i = 0; i < 3; ++i) 
		std::cout << strArray[i] << " ";
    std::cout << std::endl;
	std::cout << "Printing array elements:" << std::endl;
	::iter(strArray, 3, &print<std::string>);

	return (0);
}