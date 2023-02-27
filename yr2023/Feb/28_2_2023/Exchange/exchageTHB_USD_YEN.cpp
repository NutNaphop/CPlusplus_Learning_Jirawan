#include <iostream>
using namespace std ; 
class exchange{
    private : 
        const float USD = 35.00 ;
        const float YEN = 0.257208 ;
    public : 
        float money ; 
        float usDollar ; 
        float jpYen ; 
        void thBATH(float value){
            money = value ;  
        } 
        float thUS(void){
            return money/USD ;
        }
        float thYEN(void){
            return money/YEN ; 
        } 
}; exchange exchangeUS , exchangeYEN ; 

int main (){
    exchange exchangeUS ;
    exchange exchangeYEN ;
    float user_mon ;
    int menu ;  
    cout << "What do you want to exchange From Thai bath to ... : \n 1.USD 2. YEN : " ; 
    cin >> menu ; 
    cout << "Please input you amount of money : "  ; 
    cin >> user_mon ; 

    if (menu == 1){
        exchangeUS.thBATH(user_mon);
        cout << "Exchange from " << user_mon << " Bath " << " To " << exchangeUS.thUS() << " Dollar" ; 
    }
    else if (menu == 2){
        exchangeYEN.thBATH(user_mon);
        cout << "Exchange from " << user_mon << " Bath " << " To " << exchangeYEN.thYEN() << " YEN" ; 
    }

}

