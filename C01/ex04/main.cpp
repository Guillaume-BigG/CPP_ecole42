#include <fstream>
#include <iostream>
#include <string>

void	replace(std::string infile, std::string initial, std::string replacement)
{
	size_t	pos;

	std::ifstream ifs(infile.c_str());
	if (!ifs.is_open())
		std::cout << "We had issue opening the infile" << std::endl;
	else
	{
		std::string outfile = infile + ".replace";
		std::ofstream ofs(outfile.c_str());
		if (!ofs.is_open())
			std::cout << "We had issue creating the outfile" << std::endl;
		std::string line;
		if (getline(ifs, line, '\0')) 		
		{
			pos = line.find(initial);
			while (pos != std::string::npos)
			{
				line.erase(pos, initial.size());
				line.insert(pos, replacement);
				pos = line.find(initial);
			}
			ofs << line;
			ofs.close();
			ifs.close();
		}
	}
}

int	check_argv(std::string infile, std::string initial, std::string replacement)
{
	if (initial.empty() || replacement.empty() || infile.empty())
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Please provide the proper format: a file name, and two strings" << std::endl;
		return (1);
	}
	if (check_argv(argv[1], argv[2], argv[3]) == 0)
	{
		std::cout << "You can't provide empty string" << std::endl;
		return (2);
	}
	replace(argv[1], argv[2], argv[3]);
	return (0);
}