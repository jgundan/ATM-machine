/*  WELCOME TO  ATM  */

#include <iostream>   	//  I/O  stream
#include <cstdlib>    	// C standard lib
#include <string>		// strings


using namespace std; 	// cin and cout 



double  balance =  100000 , withDraw = 0, deposit , mwithdraw = 10000 ; 
int  PIN  , choice  ;  
char ReTry ;



void  Function () {
	
	cout << "*******************" << endl;
	cout << "* [1]	Balance   *" << endl;
	cout << "* [2]	Withdrawl *" << endl;
	cout << "* [3] 	Deposit   *" << endl;
	cout << "* [4]	Quit	  *" << endl;
	cout << "*******************"<< endl;
	
	cout << "PLEASE SELECT AN OPTION" << endl;	
	cin  >> choice;	
	
	
		
		if (choice == 1){    // Balance
			
			cout << "Your Balance is " <<  balance << endl;
			 
			
		} else if (choice == 2){   // Withdrawal
			
			cout  <<" Enter the amount you want to dispense :\n";
			cin	  >>  withDraw;
			
			if (withDraw > balance) {  
				cout << " You don't have suffcient balance" << endl;
					}
			else if (withDraw > mwithdraw){
				cout << "Cant withdraw maintaning should be 10000 or above\n" ;
				 }
					
			else  {	balance -= withDraw;
				cout << "Your current balance is " << balance << endl;}
				
				
			
				} else if ( choice == 3 ) {   // Deposit
					cout << " Please enter the amount you want to deposit" << endl;
					cin	>> deposit;
					
					balance += deposit;

						cout << "Your current Balance is " << balance << endl;
						 
						
					} else if ( choice == 4 )   // Quit
							{
								cout << "THANK YOU FOR THE TRANSACTION! \n" << endl;
								
								exit(0);
								
							}								
	}

int main () {
		
	for ( int i = 0; ( PIN  != 123 ) ; ++i) {   // allow 2 tries
		if  (i == 2) {
			cout << " 2 attempts failed , this would be reported! \n " ;
		return EXIT_SUCCESS;     // System exits when failed to deliver PIN
		}
	cout << " Please Enter the Three  Digit Pin Number " << endl;
	cin  >> PIN;		//gets Pin

		}

		Function();  // calls the function
		

		
		cout << "Would You like to Transact again? Press y if Yes or Press n if No?" << endl;
		cin >> ReTry;
										
		if (ReTry == 'y'){
				main();				
				} else if (ReTry == 'n' ){
					cout << " THANK YOU FOR THE TRANSACTION!" << endl;
						return EXIT_SUCCESS;
					}
				
	return 0;		
	
}	
