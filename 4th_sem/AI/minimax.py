EMPTY, COMPUTER, HUMAN = ' ', 'O', 'X'
WIN_LINES = [[0,1,2],[3,4,5],[6,7,8],[0,3,6],[1,4,7],[2,5,8],[0,4,8],[2,4,6]]

def winner(b, player):
    return any(b[i] == b[j] == b[k] == player for i, j, k in WIN_LINES)

def minimax(board, is_maximizing):
    if winner(board, COMPUTER): return 1
    if winner(board, HUMAN): return -1
    if EMPTY not in board: return 0

    scores = []
    for i in range(9):
        if board[i] == EMPTY:
            board[i] = COMPUTER if is_maximizing else HUMAN
            scores.append(minimax(board, not is_maximizing))
            board[i] = EMPTY

    return max(scores) if is_maximizing else min(scores)

def best_move(board):
    best_score, move = -float('inf'), None
    for i in range(9):
        if board[i] == EMPTY:
            board[i] = COMPUTER
            score = minimax(board, False)
            board[i] = EMPTY
            if score > best_score:
                best_score, move = score, i
    return move

# Example usage
board = [EMPTY]*9
board[0], board[4] = HUMAN, HUMAN   # sample mid-game state
move = best_move(board)
print("Computer plays at position:", move)