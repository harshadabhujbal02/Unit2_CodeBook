#include <iostream>     // Provides cout
using namespace std;    // Allows us to use cout without std::
// Account class
class Account
{
private:
    double balance;     // Private data member
                        // Normally cannot be accessed outside Account
    // Auditor is declared as a friend class
    friend class Auditor;
public:
    // Parameterized constructor
    explicit Account(double initialBalance)
        : balance(initialBalance)
    {
        // Stores initial balance in balance
    }
};
// Auditor class
class Auditor
{
public:
    // Function to inspect Account
    void inspect(const Account& account) const
    {
        // Because Auditor is a friend of Account,
        // it can access Account's private member balance
        cout << "Account Balance: "
             << account.balance << '\n';
        // Displays account balance
    }
};
// Main function
int main()
{
    // Creates Account object
    // Initial balance is 5000
    Account account(5000.0);
    // Creates Auditor object
    Auditor auditor;
    // Auditor checks the account
    auditor.inspect(account);
    return 0;          // Ends the program successfully
}