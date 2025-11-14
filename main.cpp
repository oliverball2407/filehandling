#include <iostream> 
#include <string> 
#include <fstream> 
#include <sstream> 
using namespace std;

void task1() {
	std::string line, value;
	std::ifstream myFile("data.csv");
	while (std::getline(myFile, line)) {
		std::istringstream ss(line);
		
		std::string name, city, age;

		std::getline(ss, name, ',');
		std::getline(ss, age, ',');
		std::getline(ss, city, ',');

		std::cout << "\nName: " << name << ", Age: " << age << ", City: " << city ;
		
	}
}

void task2() {
	std::ifstream file("data.json");
	std::string line;

	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			std::string name, grades;

			std::istringstream ss(line);
			std::getline(ss, name, ','); //this gets:    name: "Alice"
			
			
			cout << name;
			name = name.substr(name.find(":") + 3, name.length() - name.find(":"));
			


		}
	}
}


int main() {

	task2();


	return 0;
}
