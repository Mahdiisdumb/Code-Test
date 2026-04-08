//lets make a terminal calculator in cpp 🥀😭
//literally somthings wrong
#include <iostream>
#include "calc.h" //we included the calculator so thats normal whats wrong with errors then?
#include <string>
//no namespace std bnecause i want control not global
//never mind i dont need the namespace i think i was calling it wrong
int addition(int a, int b) {
	//now this is really simple just return those two vars
	return a + b;
}
int subtraction(int a, int b) {
	//same as addition but with minus
	return a - b;
	//used auto complete but i was anyways gonna write that without ai its just simpler if i use it
}
int multiplication(int a, int b) {
	//same as addition but with times
	return a * b;
	//so there is nothing weird
}
int division(int a, int b) {
	//were not gonna add any zero checks Its probably gonna be funnier if we just let it crash if you try to divide by zero
	return a / b; //verry simple
	//time to add a recursive function so it actually does something and not just crash when you try to divide by zero
	//never mind to hard!
}
void getusr(int a, int b) { // thats all i had to do add inline?!
	//I probably remove int from the arguments and just use the global ones but i want to see if this works first
	//never mind inline makes it worse how about i add this into main
	//now we just declare things for the main
	std::cout << "Enter the first number: ";
	std::cin >> a; //i hope this works with the arguments i set up
	std::cout << "Enter the second number: "; //same as above
	std::cin >> b;
	//now opperation handling
	std::cout << "Enter the operation (+, -, *, /): ";
	std::string op;
	std::cin >> op;
	//if addition is eneterd we call the addition function and so on
	if (op == "+") //i need to replace true with somthing
		//there we go i just needed to make it a string and then compare it to the user input
	{
		std::cout << "Result is" << std::endl;
		std::cout << addition(a,/*are we sure this is too many arguments and yup i was correct!*/ b) << std::endl; //i hope this works
		//too many arguments in a funnction call weird
		std::cout << "Press enter to continue..." << std::endl;
		std::cin.get(); //wait for user input
		//now we call the function again no big deal
		getusr(a, b); //recursion time!
	}
	else if (op == "-")
	{
		std::cout << "Result is" << std::endl;
		std::cout << subtraction(a, b) << std::endl;
		//literrally copy pasted just changed the op key and function its fun!
		std::cout << "Press enter to continue..." << std::endl;
		std::cin.get(); //wait for user input
		//now we call the function again no big deal
		getusr(a, b); //recursion time!
	}
	else if (op == "*")
	{
		std::cout << "Result is" << std::endl;
		std::cout << multiplication(a, b) << std::endl;
		std::cout << "Press enter to continue..." << std::endl;
		std::cin.get(); //wait for user input
		//now we call the function again no big deal
		getusr(a, b); //recursion time!
	}
	else if (op == "/")
	{
		std::cout << "Result is" << std::endl;
		std::cout << division(a, b) << std::endl;
		//we need to call it self again after that
		std::cout << "Press enter to continue..." << std::endl;
		std::cin.get(); //wait for user input
		//now we call the function again no big deal
		getusr(a, b); //recursion time!
	}
	else
	{
		std::cout << "Invalid operation idiot! choose +, -, *, or /" << std::endl;
		std::cin.get(); //wait for user input
		return getusr(a, b); //recursion time! if the user enters an invalid operation we just call the function again and ask them for input again
	}
}
//weird theres no int multiplacation in ui but there is in calc and we need only one because ambuguity
int a;
int b;//i have too much hopium 🥀
int main() //ill ignore the fucking ai
{
	std::cout << "Calc Terminal Time press enter to continue..." << std::endl;
	std::cin.get(); //wait for user input i was anyways gonna write that without ai
	//well make a file called calc.cpp and well just use it here DUH!
	//now to incorporate the ui and calc files i need to do
	//now we can call getusr
	getusr(a, b); //call the function to get user input and perform calculations
	std::cout << "Press enter to exit..." << std::endl;
	std::cin.get(); //wait for user input before exiting
	//there we go now lets build
	//std a namespace defintion must apear? weird fixed it but
	//one or more multiply defined symbols found in ui.o and calc.o weird lets see whats wrong
}
//and it crashes when i hit enter..
//fixed the crashing by making getusr a void
 /*	i copied and pasted most of the shit like	std::cout << "Press enter to continue..." << std::endl;
std::cin.get(); //wait for user input
//now we call the function again no big deal
getusr(a, b); //recursion time!
so i wont type over and over again lets build!*/
//works
//yummi crashes but i want somthing more devestating like instead it actually makes your cpu try to do that and not crash!