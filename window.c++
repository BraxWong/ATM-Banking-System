#include "window.h"

void showPrompt() {

    int decision;
    while(true){

        std::cout << "Press 1 to create a customer account\nPress 2 to show customer's credentials\nPress 3 to show customer's information\nPress 4 to edit customer's information\nPress 5 to check customer's balance\nPress 6 to quit\n";
        std::cin >> decision;
        if(decision == 6){

            break;

        }

    }
    
}

void showWindow() {
    
    int decision;

	  std::cout << "Welcome to ATM-Banking-System\n";

	  while(true) {

		    std::cout << "To create an Admin account, press 1.\nTo log into your admin account, press 2.\n";

		    std::cin >> decision;

		    if(decision == 1) {
			
          FILESYS::clearUserInput();

          ADMIN::createAdmin();

			    break;

		    }

		    else if(decision == 2) {

          FILESYS::clearUserInput();

          ADMIN::adminLogin();

          showPrompt();

			  break;

		    }

		    else {

			    std::cout << "Please enter either 1 or 2.\n";

		    }

	  }

}




int main() {

  showWindow();
  return 0;

}
