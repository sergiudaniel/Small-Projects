#include <iostream>
#include <iomanip>


using namespace std;

int main ()
{
     double balance, deposit, withdraw, accountNumber, deposit2;
     char userName [20];
     int option;

     balance = 0; //valoare default in cont

     do{

        cout << " \n\t*************MENU*************";
        cout << "\n\t                               ";
        cout << "\n\t          1) Balance Check     ";
        cout << "\n\t          2) Deposit Cash      ";
        cout << "\n\t          3) Withdraw Cash     ";
        cout << "\n\t          4) Transfer          ";
        cout << "\n\t          5) Exit              ";
        cout << "\n\t                               ";
        cout << "\n\t*******************************";
        cout << "\n\t Please select an option       ";
        cin >> option;

        switch (option){
        case 1: cout <<"\n\tYour balance is: $" << balance << endl;
            break;
        case 2: cout << "Amount you want to depostt: $" << endl;
            cin >> deposit;
            balance += deposit;
            cout << "\n\t Current Balance:  $" << balance << endl;
            break;
        case 3:  cout << "How much do you want to  withdraw?: $" << endl;
            cin >> withdraw;

        case 4: cout << "Please insert accout number: " << endl;
                cin >> accountNumber;
                cout << "Please insert Your Name: " << endl;
                cin >> userName;
                cout << "Pleae insert ammount of money you want to transfer: $" << endl;
                cin >> deposit2;
                if (deposit2 > deposit){
                     cout << "\n\tIsuficiend founds \n Your transfer has not been proceesd to account: " <<accountNumber   << endl;
                                }
               // else
                  //  deposit2 -= deposit;
              //  cout << "Your transfer has  been processed to accout: " << accountNumber << endl;

                break;

            if (balance < withdraw)
                 cout << "\n\tInsuficient founds" << endl;

            else balance -= withdraw;
                cout << "\n\t Current balance: $" << balance << endl;
                break;


            default: if(option != 5)
                    cout << "\n\tInvalid option, please try again" << endl;
            break;
        };

     }while (option != 5);


     system ("pause");
    return 0;
}
