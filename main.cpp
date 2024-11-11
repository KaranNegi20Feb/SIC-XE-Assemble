#include <iostream>
#include <vector>
#include <algorithm>

#include "Opcodes.h"
#include "Pass1.h"
#include "Pass2.h"

using namespace std;

int main()
{
	cout<<"\nWelcome to the program, Please enter the code below:\n";
	cin >> program_name >> str >> starting_address;
	cin.ignore();
	input();
	addressing();
	generate_object_code();
	generate_machine_code();	
}

