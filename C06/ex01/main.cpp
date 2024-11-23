#include "Serializer.hpp"

int	main(void) {
	Data*	data = new Data;
    data->i = 42;

	std::cout << "data address: " << data << std::endl;
    std::cout << "data value: " << data->i << std::endl;
	std::cout << "serialized data: " << Serializer::serialize(data) << std::endl;
    std::cout << "data value: " << data->i << std::endl;
	std::cout << "deserialized data: " << Serializer::deserialize(Serializer::serialize(data)) << std::endl;
	std::cout << "data value: " << data->i << std::endl;
    std::cout << std::endl;

	delete data;

}
