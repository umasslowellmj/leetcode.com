#include <iostream>
#include <stack>
using namespace std;

public class Game{
   private:
    Player player1, player2;
    
    int table[5][6];
    public:
    
    G(){
        for(int j= 0; j<5; j++){
            for(int i=0; i<6; i++){
                table[j][i]=0;
            }
    
        }
    }
    
    int get_current_row(int a){
        int b = 0;
        while(table[a][b]!=0){
            b++;
        }     
        return b;
    }
    
    int move(int a, Player player){
        
        table[a][get_current_row+1]= get_color(player);
//         is_game_over(table[a][get_current_row+1]);
    }
    
    int is_game_over(){
        //check row
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 3; j++) {
                if(table[i][j] == table[i][j+1] &&
                   table[i][j+1] == table[i][j+2] &&
                   table[i][j+2] == table[i][j+3]
                  )
            }
        }
        
        //check column
        
        //check diagnal1
        
        //check diagnal2
    }

    bool case_1(table T, Player pl){
    
    
    }

    

}


public class Player{
    private:
        int color;
    
    int get_color(){
        return color;
    }
    
}

int main() {
   
    
    
    return 0;
}

