print('Gaurab Ale Magar\n')

EMPTY, COMPUTER, HUMAN = ' ', 'O', 'X'
WIN_LINES = [[0,1,2],[3,4,5],[6,7,8],[0,3,6],[1,4,7],[2,5,8],[0,4,8],[2,4,6]]

def winner(b, player):
    return any(b[i] == b[j] == b[k] == player for i, j, k in WIN_LINES)

def alphabeta(board, is_maximizing, alpha, beta):
    if winner(board, COMPUTER): return 1
    if winner(board, HUMAN): return -1
    if EMPTY not in board: return 0

    if is_maximizing:
        best = -float('inf')
        for i in range(9):
            if board[i] == EMPTY:
                board[i] = COMPUTER
                best = max(best, alphabeta(board, False, alpha, beta))
                board[i] = EMPTY
                alpha = max(alpha, best)
                if alpha >= beta:
                    break  # prune
        return best
    else:
        best = float('inf')
        for i in range(9):
            if board[i] == EMPTY:
                board[i] = HUMAN
                best = min(best, alphabeta(board, True, alpha, beta))
                board[i] = EMPTY
                beta = min(beta, best)
                if alpha >= beta:
                    break  # prune
        return best

def best_move(board):
    best_score, move = -float('inf'), None
    for i in range(9):
        if board[i] == EMPTY:
            board[i] = COMPUTER
            score = alphabeta(board, False, -float('inf'), float('inf'))
            board[i] = EMPTY
            if score > best_score:
                best_score, move = score, i
    return move

board = [EMPTY]*9
board[0], board[4] = HUMAN, HUMAN
print("Computer plays at position:", best_move(board))