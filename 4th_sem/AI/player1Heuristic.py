print('Gaurab ALe Magar')

EMPTY, COMPUTER, HUMAN = ' ', 'O', 'X'

WIN_LINES = [
    [0,1,2],[3,4,5],[6,7,8],
    [0,3,6],[1,4,7],[2,5,8],
    [0,4,8],[2,4,6]
]

def show_board(b):
    print(f"\n {b[0]} | {b[1]} | {b[2]} \n---+---+---\n {b[3]} | {b[4]} | {b[5]} \n---+---+---\n {b[6]} | {b[7]} | {b[8]} \n")

def winner(b, player):
    return any(b[i] == b[j] == b[k] == player for i, j, k in WIN_LINES)

def score_move(board, cell):
    comp_open, human_open = 0, 0
    for line in WIN_LINES:
        if cell in line:
            values = [board[i] for i in line]
            if HUMAN not in values:
                comp_open += 1
            if COMPUTER not in values:
                human_open += 1
    return comp_open - human_open

def computer_move(board):
    empty_cells = [i for i in range(9) if board[i] == EMPTY]
    best_cell = max(empty_cells, key=lambda c: score_move(board, c))
    board[best_cell] = COMPUTER

def human_move(board):
    while True:
        move = int(input("Enter your move (1-9): ")) - 1
        if 0 <= move <= 8 and board[move] == EMPTY:
            board[move] = HUMAN
            return
        print("Invalid or occupied cell.")

def play():
    board = [EMPTY] * 9
    show_board(board)
    while True:
        human_move(board)
        show_board(board)
        if winner(board, HUMAN):
            print("You win!"); break
        if EMPTY not in board:
            print("Draw!"); break
        computer_move(board)
        show_board(board)
        if winner(board, COMPUTER):
            print("Computer wins!"); break
        if EMPTY not in board:
            print("Draw!"); break

play()