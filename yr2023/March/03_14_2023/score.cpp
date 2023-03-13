#include <iostream>
using namespace std ; 

class Summary { 
    public :
        float result ; 
        void showScore() { 
            cout << "Your Score is => " << result << endl ; 
        }
};
class Midterm : public Summary {
    public :
        float score ; 
        void inputScoreMidterm(){
            cout << "Input Your Midterm Score => " , cin >> score ; 
            result += score ; 
        }
};
class Final : public Midterm {
    public :
        void inputScoreFinal(){
            cout << "Input Your Final Score => " , cin >> score ; 
            result += score ; 
        }
};
class Score : public Final {
    public :
        void inputScore(){
            cout << "Input Your Score => " , cin >> score ; 
            result += score ; 
        }
};
int main () {
    Score scr1 ;
    scr1.inputScore();
    scr1.inputScoreMidterm();
    scr1.inputScoreFinal();
    scr1.showScore();
}