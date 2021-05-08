#include <time.h> 
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {

	srand(time(NULL));

	std::vector<int> record;
	std::string dices("4d10");

	int d_ind = dices.find('d');

	int num_dices = std::stoi(dices.substr(0, d_ind));
	int max_roll = std::stoi(dices.substr(d_ind + 1, dices.length() - 1));

	int sum = 0;
	int roll;
	for (int i = 0; i < num_dices; i++) {
		roll = (rand() % max_roll) + 1;
		record.push_back(roll);
		sum = sum + roll;
		// std::cout << roll << std::endl;
	}


	std::cout << sum << ": ";
	for (std::vector<int>::iterator i = record.begin(); i != record.end(); i++) {
		std::cout << *i << " ";


	}


}