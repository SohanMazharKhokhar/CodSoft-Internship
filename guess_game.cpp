#include <iostream>
#include <ctime>
using namespace std;
void Guessing_game(){
    int random_num = rand() % 100 + 1; 
    int guessed;
    int tries = 0;
    srand(time(NULL));
    cout << "\t\t-------Welcome imto Guessing No. game-------\t\t" << endl;
    cout << "\tSelect No between 1 to 100\n" << endl;
    while (guessed != random_num){
        cout << "Enter your guess ";
        cin >> guessed;
        tries++;
        if (guessed < random_num) {
            cout << "Your guess is too low! please try again." << endl;
        } else if (guessed > random_num) {
            cout << "Your guess is too high! please try again." << endl;
        }
    }

    cout << "Congrats! You've guessed the number " << random_num << endl;
    cout<<"Your attempts for guessing are " << tries << endl;

}
int main() {
cout<<"Press 1 to play Guessing Number Game\n";
cout<<"Enter 2 to close the application\n";
int n;
cin>>n;
if(n==1){
Guessing_game();
}
else
 if(n==2){
    exit(1);
 }
    return 0;
}
