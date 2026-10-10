print('Gaurab Ale Magar')

import random

COMPUTER, HUMAN, EMPTY = 'O', 'X', ' '

def show_board(board):
    print(f"\n {board[0]} | {board[1]} | {board[2]} \n---+---+---\n {board[3]} | {board[4]} | {board[5]} \n---+---+---\n {board[6]} | {board[7]} | {board[8]} \n")

def winner(board, player):
    win_positions = [[0,1,2],[3,4,5],[6,7,8],[0,3,6],[1,4,7],[2,5,8],[0,4,8],[2,4,6]]
    return any(board[a] == board[b] == board[c] == player for a, b, c in win_positions)

def board_full(board):
    return EMPTY not in board

def computer_move(board):
    # 1. Win if possible
    for i in range(9):
        if board[i] == EMPTY:
            board[i] = COMPUTER
            if winner(board, COMPUTER):
                return
            board[i] = EMPTY
    # 2. Block human
    for i in range(9):
        if board[i] == EMPTY:
            board[i] = HUMAN
            if winner(board, HUMAN):
                board[i] = COMPUTER
                return
            board[i] = EMPTY
    # 3. Take center
    if board[4] == EMPTY:
        board[4] = COMPUTER
        return
    # 4. Take a corner
    corners = [0, 2, 6, 8]
    random.shuffle(corners)
    for i in corners:
        if board[i] == EMPTY:
            board[i] = COMPUTER
            return
    # 5. Take a side
    for i in [1, 3, 5, 7]:
        if board[i] == EMPTY:
            board[i] = COMPUTER
            return

def human_move(board):
    while True:
        move = int(input("Enter your move (1-9): ")) - 1
        if move < 0 or move > 8:
            print("Invalid position")
        elif board[move] != EMPTY:
            print("Position already occupied")
        else:
            board[move] = HUMAN
            break

def play():
    board = [EMPTY] * 9
    show_board(board)
    while True:
        human_move(board)
        show_board(board)
        if winner(board, HUMAN):
            print("You win!"); break
        if board_full(board):
            print("Draw!"); break
        computer_move(board)
        show_board(board)
        if winner(board, COMPUTER):
            print("Computer wins!"); break
        if board_full(board):
            print("Draw!"); break

play()
