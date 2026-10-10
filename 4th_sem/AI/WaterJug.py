print('Gaurab Ale Magar')

from collections import deque

def bfs_water_jug(jug1_capacity, jug2_capacity, target1, target2):
    start = (0, 0)
    queue = deque([(start, [start])])
    visited = {start}

    while queue:
        (x, y), path = queue.popleft()

        if (x, y) == (target1, target2):
            print("\nSolution found:\n")
            for state in path:
                print(state)
            return

        next_states = [
            (jug1_capacity, y),                                                     # Fill Jug 1
            (x, jug2_capacity),                                                     # Fill Jug 2
            (0, y),                                                                 # Empty Jug 1
            (x, 0),                                                                 # Empty Jug 2
            (x - min(x, jug2_capacity - y), y + min(x, jug2_capacity - y)),          # Pour Jug1 -> Jug2
            (x + min(y, jug1_capacity - x), y - min(y, jug1_capacity - x)),          # Pour Jug2 -> Jug1
        ]

        for state in next_states:
            if state not in visited:
                visited.add(state)
                queue.append((state, path + [state]))

    print("\nNo solution exists.")

jug1 = int(input("Enter capacity of Jug1: "))
jug2 = int(input("Enter capacity of Jug2: "))
target1 = int(input("Required water in Jug1: "))
target2 = int(input("Required water in Jug2: "))

bfs_water_jug(jug1, jug2, target1, target2)