print('Gaurab Ale Magar\n')

import pandas as pd
from sklearn.preprocessing import LabelEncoder
from sklearn.naive_bayes import CategoricalNB

data = {
    'Weather': ['Sunny','Sunny','Overcast','Rainy','Rainy','Rainy','Overcast','Sunny','Sunny','Rainy'],
    'Play':    ['No','No','Yes','Yes','Yes','No','Yes','No','Yes','Yes']
}
df = pd.DataFrame(data)

encoder = LabelEncoder()
df['Weather_enc'] = encoder.fit_transform(df['Weather'])

X = df[['Weather_enc']]
y = df['Play']

model = CategoricalNB()
model.fit(X, y)

test_weather = encoder.transform(['Sunny'])
prediction = model.predict([[test_weather[0]]])
print("Prediction for 'Sunny':", prediction[0])