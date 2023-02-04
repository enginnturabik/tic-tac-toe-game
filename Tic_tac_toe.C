#include <stdio.h>
char board_numbers[9]={'1','2','3','4','5','6','7','8','9'};

void print_board()
{
    printf("%c | %c | %c \n",board_numbers[0],board_numbers[1],board_numbers[2]);
    printf("__|___|___\n");
    printf("%c | %c | %c \n",board_numbers[3],board_numbers[4],board_numbers[5]);
    printf("__|___|___\n");
    printf("%c | %c | %c \n",board_numbers[6],board_numbers[7],board_numbers[8]);
}


int main()
{
        int location;
        char player='X';


    printf("Welcome to the tik tac toe game !\n\n");
    print_board();
   while (true)
    {
            printf("turn of %c\n", player);
            printf("select location and put  \n");
            scanf("%d", &location);
            location--;
             if (location > 9  || location < 0)
             {
                 printf("invalid input please try again !\n");
                 continue;
             }

       if (    board_numbers[location]!='X'   &&    board_numbers[location]!='O'  )
       {
           board_numbers[location]=player;
       }
       else
       {
           printf("Cell already filled, try again\n");
           continue;
       }
        print_board();

                    //For win
                if ( board_numbers[0]== player && board_numbers[1]==player && board_numbers[2]==player)
                {
                    printf(" %c is winner !! GAME OVER",player);
                    break;
                }
                else if (board_numbers[3]== player && board_numbers[4]==player && board_numbers[5]==player)
                {
                    printf(" %c is winner !! GAME OVER",player);
                    break;
                }
                else if (board_numbers[6]== player && board_numbers[7]==player && board_numbers[8]==player)
                {
                    printf(" %c is winner !! GAME OVER",player);
                    break;
                }
                else if (board_numbers[0]== player && board_numbers[3]==player && board_numbers[6]==player)
                {
                    printf(" %c is winner !! GAME OVER",player);
                    break;
                }
                else if (board_numbers[1]== player && board_numbers[4]==player && board_numbers[7]==player)
                {
                    printf(" %c is winner !! GAME OVER",player);
                    break;
                }
                else if (board_numbers[2]== player && board_numbers[5]==player && board_numbers[8]==player)
                {
                    printf(" %c is winner !! GAME OVER",player);
                    break;
                }
                else if (board_numbers[0]== player && board_numbers[4]==player && board_numbers[8]==player)
                {
                    printf(" %c is winner !! GAME OVER",player);
                    break;
                }
              


        //draw

        //In here last part of it which is draw part, we check all elements of array filled or not and also nobody won the game
        bool all_elements_valid = true;

        for (int i = 0; i < 9; i++)
        {
            if (board_numbers[i] != 'X' && board_numbers[i] != 'O') {
                all_elements_valid = false;
                break;
            }
        }

        if (all_elements_valid)
        {
            printf("Draw ! ");
            break;
        }

        if (player=='X')
        {
            player='O';
        }
      else
          player ='X';
    }
    return 0;
}
