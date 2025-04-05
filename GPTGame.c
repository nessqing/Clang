#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 30
#define HEIGHT 15

char board[HEIGHT][WIDTH];
int ballX = WIDTH / 2, ballY = HEIGHT / 2;
int ballDirX = 1, ballDirY = -1;
int paddleX = WIDTH / 2 - 3;
int score = 0;

void initBoard() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == 0) board[i][j] = '='; 
            else if (i == HEIGHT - 1 && j >= paddleX && j < paddleX + 6) 
                board[i][j] = '-';
            else board[i][j] = ' ';
        }
    }
    board[ballY][ballX] = 'O';
}

void drawBoard() {
    system("cls");
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}

void moveBall() {
    board[ballY][ballX] = ' ';
    ballX += ballDirX;
    ballY += ballDirY;
    
    if (ballX <= 0 || ballX >= WIDTH - 1) ballDirX = -ballDirX;
    if (ballY <= 0) {
        ballDirY = -ballDirY;
        score += 10;
    }
    if (ballY == HEIGHT - 1 && ballX >= paddleX && ballX < paddleX + 6) {
        ballDirY = -ballDirY;
        score += 5;
    }
    if (ballY >= HEIGHT) {
        printf("Game Over! Final Score: %d\n", score);
        exit(0);
    }
    board[ballY][ballX] = 'O';
}

void movePaddle(char dir) {
    if (dir == 'a' && paddleX > 0) paddleX--;
    if (dir == 'd' && paddleX < WIDTH - 6) paddleX++;
    for (int i = 0; i < WIDTH; i++) 
        board[HEIGHT - 1][i] = (i >= paddleX && i < paddleX + 6) ? '-' : ' ';
}

int main() {
    initBoard();
    while (1) {
        drawBoard();
        if (_kbhit()) movePaddle(_getch());
        moveBall();
        Sleep(100);
    }
    return 0;
}
