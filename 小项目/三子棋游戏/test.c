#include "game.h"
//测试三子棋游戏

void menu()
{

    printf("*******************************\n");
    printf("********1.play   0.exit********\n");
    printf("*******************************\n");
    
}

//游戏的整个算法实现
void game()
{
    //数组-存放走出的棋盘信息
    char board[ROW][COL] = {0}; //全部空格
    //初始化棋盘
    InitBoard(board,ROW, COL);
    //打印棋盘
    DisplayBoard(board,ROW, COL);
    
    

}

void test()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择：>");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误,请重新选择!\n");
                break;
        }
    } while (input);
    

}

int main()
{

    test();
    return 0;
}