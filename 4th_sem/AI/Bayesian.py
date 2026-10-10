print('Gaurab Ale Magar\n')

P_rain = {True: 0.2, False: 0.8}

P_sprinkler_given_rain = {
    True:  {True: 0.01, False: 0.99},   # if it rained, sprinkler rarely used
    False: {True: 0.40, False: 0.60},   # if no rain, sprinkler used 40% of time
}

P_wetgrass_given_sprinkler_rain = {
    (True, True): 0.99, (True, False): 0.90,
    (False, True): 0.90, (False, False): 0.0,
}

def joint_prob(rain, sprinkler, wetgrass):
    p_r = P_rain[rain]
    p_s = P_sprinkler_given_rain[rain][sprinkler]
    p_w = P_wetgrass_given_sprinkler_rain[(sprinkler, rain)] if wetgrass else \
          1 - P_wetgrass_given_sprinkler_rain[(sprinkler, rain)]
    return p_r * p_s * p_w

def posterior_rain_given_wetgrass():
    numerator = sum(joint_prob(True, s, True) for s in [True, False])
    denominator = sum(joint_prob(r, s, True) for r in [True, False] for s in [True, False])
    return numerator / denominator

print("P(Rain=True | WetGrass=True) =", round(posterior_rain_given_wetgrass(), 4))