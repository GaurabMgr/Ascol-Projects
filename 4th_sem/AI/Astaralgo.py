print('Gaurab Ale Magar')

import heapq

graph = {
    'A': [('B', 1), ('C', 4)],
    'B': [('C', 2), ('D', 5)],
    'C': [('D', 1)],
    'D': []
}

# Heuristic: estimated straight-line distance to goal 'D'
heuristic = {'A': 5, 'B': 3, 'C': 1, 'D': 0}

def a_star(graph, start, goal):
    open_set = [(heuristic[start], 0, start, [start])]  # (f, g, node, path)
    visited = set()

    while open_set:
        f, g, node, path = heapq.heappop(open_set)
        if node == goal:
            return path, g
        if node in visited:
            continue
        visited.add(node)

        for neighbor, cost in graph[node]:
            if neighbor not in visited:
                new_g = g + cost
                new_f = new_g + heuristic[neighbor]
                heapq.heappush(open_set, (new_f, new_g, neighbor, path + [neighbor]))

    return None, float('inf')

path, cost = a_star(graph, 'A', 'D')
print("Path:", path)
print("Total cost:", cost)