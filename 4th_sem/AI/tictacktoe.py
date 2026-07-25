board = [' ' for _ in range(9)]

def display_board(board):
    print(f" {board[0]} | {board[1]} | {board[2]}")
    print("--------------")
    print(f" {board[3]} | {board[4]} | {board[5]}")
    print("--------------")
    print(f" {board[6]} | {board[7]} | {board[8]}")
    
def get_move(board, player):
    while True:
        try:
            position=int(input(f"Player {player}, choose a position (0-8): "))
            if position < 0 or position > 8:
                print("Please enter a number between 0 and 8")
            elif board[position] != ' ':
                print("The position is already taken.")
            else:
                return position
        except ValueError:
            print("Enter a valid number.")
            
def check_win(board, player):
    win_combinations = [
        [0, 1, 2], [3, 4, 5], [6, 7, 8],  
        [0, 3, 6], [1, 4, 7], [2, 5, 8], 
        [0, 4, 8], [2, 4, 6]              
    ]
    for combo in win_combinations:
        if board[combo[0]] == board[combo[1]] == board[combo[2]] == player:
            return True
    return False            
        
def check_draw(board):
    return ' ' not in board

def play_game():
    board = [' ' for _ in range(9)]
    current_player = 'X'

    while True:
        display_board(board)
        move = get_move(board, current_player)
        board[move] = current_player

        if check_win(board, current_player):
            display_board(board)
            print(f"Player {current_player} wins!")
            break

        if check_draw(board):
            display_board(board)
            print("It's a draw!")
            break

        current_player = 'O' if current_player == 'X' else 'X'

play_game()