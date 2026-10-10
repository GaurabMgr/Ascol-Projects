print('Gaurab Ale Magar\n')

X = [[0,0], [0,1], [1,0], [1,1]]
y = [0, 0, 0, 1]   # AND truth table

weights = [0.0, 0.0]
bias = 0.0
learning_rate = 0.1

def predict(x):
    total = sum(w * xi for w, xi in zip(weights, x)) + bias
    return 1 if total >= 0 else 0

for epoch in range(10):
    for xi, target in zip(X, y):
        prediction = predict(xi)
        error = target - prediction
        for j in range(len(weights)):
            weights[j] += learning_rate * error * xi[j]
        bias += learning_rate * error

print("Trained weights:", weights, "bias:", bias)
for xi in X:
    print(xi, "->", predict(xi))