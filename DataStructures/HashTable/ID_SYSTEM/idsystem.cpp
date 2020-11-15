	



#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

class ID_SYSTEM {
private:
	idno = NULL;
	std::string name = "";
	std::vector<int> vec;

public:
	ID_SYSTEM(int idno) {
		this.idno = idno;
	}

	int createID(std::string name, int age);
	void showID(int n);				// searches user info through ID number
	int hashFunction(int n);
};

int ID_SYSTEM::createID(string name) {
	std::cout << "[+]Creating your personal ID" << std::endl;
	std::cout << "[+]Assigning personal Identity Number!" << std::endl;
	srand((unsigned) time(NULL));
	int idno = 
	return idno;
}

void showID(int n) {
	std::cout << "Your ID no. is: " << 
}

int main() {
	ID_SYSTEM user;
	user.createID("akshat", 19);
	user.showID()
	return 0;
}