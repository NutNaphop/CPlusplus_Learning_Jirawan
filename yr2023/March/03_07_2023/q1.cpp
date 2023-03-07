#include <stdio.h>
#include <iostream>

using namespace std ; 

class DepWith {
    public : 
        float remaining;
        float money; 
        float dept ; 
        int choice ;  
        float withdraw ; 
        DepWith(float deposit,int choose){
            dept = deposit ; 
            choice = choose ;  
            remaining = 30000 ;
            // remaining += deposit ; 
        }
        DepWith(float withdraw_user,float remain,int choose){
            choice = choose ; 
            withdraw = withdraw_user ; 
            remaining = remain;
            // remaining -= withdraw ; 
        }
        void process(){
            if (choice == 1){
                cout << "We're going to deposit your order : " << dept;
                remaining += dept ; 
                cout << "\nFinished your remaining is : " << remaining << endl; 
            }
            else if (choice == 2){
                cout << "\nWe are going to withdraw" << withdraw;
                remaining -= withdraw ; 
                cout << "\nFinished your remaining is : " << remaining << endl; 
            }
        }
        ~DepWith(){
            cout << "Thanks you for count on us" << endl ; 
        }
        

};

int main(){
    int choose ;
    int amount ;
        cout << "Hi World Bank is here what do you want today \n [1] Deposit \n [2] Withdraw\n" ;
        cin >> choose ;
        if (choose ==1 ) {
            cout << "DepositMode \n Input you money here : " ; 
            cin >> amount;
            DepWith dep(amount,choose);
            dep.process() ; 
            DepWith depBill = dep ;
             cout << "\n----Here Is You Receipt----\n" << endl ;
             cout << "ID 0213" << endl << "Has Withdraw : " << depBill.dept << " Remaining : " << depBill.remaining << endl;
        }
        else if (choose ==2){
            cout << "WithdrawMode Remaning : " << 30000 <<"\n Input you money here : " ; 
            cin >> amount ; 
            DepWith with(amount,30000,choose);
            with.process() ; 
            DepWith WithBill = with ;
            cout << "\n----Here Is You Receipt----\n" << endl ;
            cout << "ID 0213" << endl << "Has Withdraw : " << WithBill.withdraw << endl << "Remaining : " << WithBill.remaining << endl;
            
        }
        
}
