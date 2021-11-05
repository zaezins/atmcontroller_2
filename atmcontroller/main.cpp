//
//  main.cpp
//  atmcontroller
//
//  Created by 이재진 on 2021/11/02.
//

#include <iostream>

#include "controller_factory.hpp"
#include "bank_factory.hpp"

#include <unistd.h>
#include <term.h>
using namespace std;
/*
At least the following flow should be implemented:

Insert Card => PIN number => Select Account => See Balance/Deposit/Withdraw
*/

void clear_screen_f()
{
    cout << endl << endl << endl;
}


void select_account(char& menu,
                    string& owner,
                    string& bank_name,
                    string& account_num,
                    shared_ptr<controller_base>& ctrl,
                    shared_ptr<bank_base>& bnk)
{
    if(bnk->find_account(owner, bank_name, account_num) == true)
    {
        while(true)
        {
            clear_screen_f();
            cout << "select menu" << endl;
            cout << "1. See Balance" << endl;
            cout << "2. Deposit" << endl;
            cout << "3. WithDraw" << endl;
            cout << "press b to go back" << endl;
            cout << "press q to exit" << endl;
            cin >> menu;
            if(menu == 'q')
            {
                return;
            }
            if(menu == 'b')
            {
                return;
            }
            if(menu == '1')
            {
                cout << "Your Balance is " << bnk->get_balance(owner, bank_name,account_num) << endl;;
            }
            else if (menu == '2')
            {
                int amount = 0;
                cout << "press amount what you want to Deposit" << endl;
                cin >> amount;
                bnk->deposit(owner, bank_name, account_num, amount);
                
            }
            else if (menu == '3')
            {
                int amount = 0;
                cout << "press amount what you want to Withdraw" << endl;
                cin >> amount;
                bnk->withdraw(owner, bank_name, account_num, amount);
            }
        }
    }
    else
    {
        cout << "could not find such information" << endl;
    }
}
                    
void insert_card(char& menu,
                 string& owner,
                 string& bank_name,
                 string& account_num,
                 shared_ptr<controller_base>& ctrl,
                 shared_ptr<bank_base>& bnk)
{
    clear_screen_f();
    
    cout << "Please enter the card information" << endl;
    cout << "enter card owner:" << endl;
    getline(cin, owner);

    cout << "owner:" << owner << endl;
    cout << "enter bank name:" << endl;
    getline(cin, bank_name);

    cout << "bank_name:" << bank_name << endl;
    cout << "enter account number:" << endl;
    getline(cin, account_num);

    cout << "account_num:" << account_num << endl;


    cout << "press any key without b/q continue" << endl;
    cout << "press b to go back" << endl;
    cout << "press q to exit" << endl;
    cin >> menu;
    if(menu == 'b')  {
        return;
    }
    if(menu == 'q') {
        return;
    }
    select_account(menu, owner, bank_name, account_num, ctrl, bnk);
}
void print_menu(char & menu,
                bool & is_card_inserted,
                string& owner,
                string& bank_name,
                string& account_num,
                shared_ptr<controller_base>& ctrl,
                shared_ptr<bank_base>& bnk)
{

    if(is_card_inserted == false)
    {
        cout << "select menu" << endl;
        cout << "1. Please insert card" << endl;
        cout << "press q to exit" << endl;
        cin >> menu;
        cin.ignore();
        if(menu == '1')
        {
            insert_card(menu, owner, bank_name, account_num, ctrl, bnk);
        }
    }
    else
    {
        insert_card(menu, owner, bank_name, account_num, ctrl, bnk);
    }
}



int main(int argc, const char * argv[])
{
    // insert code here...
    try
    {
        const string sdefault = "default";
        controller_factory ctrl_fact;
        bank_factory bank_fact;
        
        shared_ptr<controller_base> ctrl = ctrl_fact.create(sdefault);
        shared_ptr<bank_base> bnk = bank_fact.create(sdefault);
        
        string owner = "";
        string bank_name = "";
        string account_num = "";
        bool is_card_inserted = false;
        char menu = 0;
        while (menu != 'q') {
            print_menu(menu, is_card_inserted, owner, bank_name, account_num, ctrl, bnk);
        }
    }
    catch (exception & ex) {
        cout << ex.what() << endl;
    }

    
    return 0;
}
