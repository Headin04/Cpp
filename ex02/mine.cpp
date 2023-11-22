# include "Account.hpp"
# include <iostream>
# include <fstream>
# include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0; 
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit);
{
    
    std::index:0;amount:42;created
}
	~Account( void );


static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

    	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;