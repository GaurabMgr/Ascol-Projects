print("Gaurab Ale Magar\n")

def is_safe(board, row, col, n):
    for i in range(row):
        # same column check
        if board[i] == col:
            return False
        # both diagonals check (upper-left AND upper-right)
        if abs(board[i] - col) == abs(i - row):
            return False
    return True

def solve_n_queens(board, row, n):
    if row == n:
        return True
    for col in range(n):
        if is_safe(board, row, col, n):
            board[row] = col
            if solve_n_queens(board, row + 1, n):
                return True
            board[row] = -1
    return False

def display_board(board, n):
    for row in range(n):
        for col in range(n):
            if board[row] == col:
                print("Q", end=" ")
            else:
                print(".", end=" ")
        print()

n = int(input("Enter the value of N: "))
board = [-1] * n
if solve_n_queens(board, 0, n):
    print("\nSolution")
    display_board(board, n)
else:
    print(f"\nNo solution exists for N={n}")

