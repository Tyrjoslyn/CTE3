/* Psuedo code for CTE 3
 	 1. create int variables n1,n2,n3
 	 2. ask for user inputs
 	 3. declare ptr1,ptr2,ptr3
 	 4. print int variables and ptr's
 	 5. Deallocate ptr's
 	 6. end of program */

#include <iostream>

int main() {
    int n1;
	int n2;
	int n3;

    // Getting 3 int inputs from user
    std::cout << "Enter 1st number: ";
    std::cin >> n1;
    std::cout << "Enter 2nd number: ";
    std::cin >> n2;
    std::cout << "Enter 3rd number: ";
    std::cin >> n3;

    // Creating pointers to dynamic memory
    int *ptr1 = new int(n1);
    int *ptr2 = new int(n2);
    int *ptr3 = new int(n3);

    // Displaying contents of variables and pointers
    std::cout << "\nNumbers entered by the user:" << std::endl;
    std::cout << "1st number: " << n1 << std::endl;
    std::cout << "2nd number: " << n2 << std::endl;
    std::cout << "3rd number: " << n3 << std::endl;

    std::cout << "\nValues stored in pointers:" << std::endl;
    std::cout << "pointer 1: " << *ptr1 << std::endl;
    std::cout << "pointer 2: " << *ptr2 << std::endl;
    std::cout << "pointer 3: " << *ptr3 << std::endl;

    // Deallocating memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    std::cout<<"\nEnd of program"<<std::endl;
    return 0;
}
