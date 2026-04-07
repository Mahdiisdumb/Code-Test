#include <iostream>
//not writing using namespace std; because i want control not discipline
int main2() {
	//using + instead of << is a problem data types are literally needed for shit
	//so how to use name string
	std::string name; //I hope this is how you declare a string variable for name
	//and it is!
	std::string age;
	std::cout << "What is your name?" << std::endl;
	//this is the basic input for main2 but i need to change the data type to string for name and int for age i dont know how
	//because i learnt ill just do this
	std::cin >> name;
	//this just replicates the name to that variable
	std::cout << "What is your age?" << std::endl;
	std::cin >> age;
	//this just replicates the age to that variable
	//now its time to do this i hope it should work
	std::cout << "So Your name is " << name << std::endl;
	//Im forced to separate these two because data types and also it freaks out!
	std::cout << "And your age is " << age << std::endl;
	//great two functions i need to apply it to regular main function and then i can test it out
	std::cin.get();
	//theres problems with this function first off it does print a name but for age it says "is" 😭
	//unless if i declare age as a string that wouldnt be weird at all!
	return 0;
}
int main() {
	std::cout << "Press Enter To Continue..." << std::endl; //changed to Press enter to continue instead of test because it looks better
	//great error time to debug this so i can get on with the name and age part later..
	//found out the error you dont use >> STR <<  you use >> STR >> nice to note 👍
	//now time for the wait function so it waits for user input before closing the console window
	std::cin.get();
	//yea thats definitly incrorrect cin in unidentified but iostream is including wait that means shi i needed :: not just :
	//yup it works now i can move on to the name and age part of the program
	//to apply the main2() i think it works by calling it like in C# or Java but i need to test it out
	main2();
	//main2 identifier not found weird because its below most likley its strict isnt it
	//yup i was right
	std::cin.get();
	//another wait function to make sure the console window doesnt close immediately after main2() is done
	return 0;
}
//done it works ill move on to the next test project when i feel like it but for now this proves i know what im doing