#include <iostream>
#include <string>
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

using namespace std;

void board()
{
    system("clear"); 
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}

int checkWinner() {
  if(square[1] == square[2] && square[2]== square[3]) {
    return 0;
  }
  if(square[1] == square[4] && square[4]== square[7]) {
    return 0;
  }
  if(square[3] == square[6] && square[6]== square[9]) {
    return 0;
  }
  if(square[7] == square[8] && square[8]== square[9]) {
    return 0;
  }
  if(square[1] == square[5] && square[5]== square[9]) {
    return 0;
  }
  if(square[2] == square[5] && square[5]== square[8]) {
    return 0;
  }
  if(square[3] == square[5] && square[5]== square[7]) {
    return 0;
  }
  if(square[4] == square[5] && square[5]== square[6]) {
    return 0;
  }
  else {
    return 1;
  }
  
}
int checkPlayer(int player){
  if(player == 2){
      return 1;
    } 
  else {
      return 2;
  }
}
int main() {
  int choice;
  int last= 0;
  int player = 1;
  int result = 1;
  int loop = 0;
  board();
  do{
    char mark = 'X';
    
    
    cout<< "Player " << player << " Enter a Number : ";
    cin >> choice;
    
    if(choice != last) {
      if(player == 2){
      mark = 'O';
      } 
      if(loop == 9){
        result = 0;
        player = 3;
      }

      square[choice] = mark;
      result = checkWinner();
    // if (result !=0){
    //   square[choice] = mark;
    // }
    // if(choice != last) {
    //   player = checkPlayer(player);
    //   }1
      if(result != 0) player = checkPlayer(player);
      loop++;
      last = choice;
      board();
    }
    
  }while(result != 0);

  board();

  if(player == 3){
    cout<< endl <<"The Result Is Draw";
  }
  else {
    cout<< endl <<"The Winner Is Player "<< player;
  }

  
}
