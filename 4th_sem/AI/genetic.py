print('Gaurab Ale Magar\n')

import random

POP_SIZE = 6
GENOME_LEN = 8
GENERATIONS = 30

def fitness(genome):
    return sum(genome)

def random_genome():
    return [random.randint(0, 1) for _ in range(GENOME_LEN)]

def crossover(p1, p2):
    point = random.randint(1, GENOME_LEN - 1)
    return p1[:point] + p2[point:]

def mutate(genome, rate=0.1):
    return [bit if random.random() > rate else 1 - bit for bit in genome]

population = [random_genome() for _ in range(POP_SIZE)]

for gen in range(GENERATIONS):
    population.sort(key=fitness, reverse=True)
    if fitness(population[0]) == GENOME_LEN:
        break
    next_gen = population[:2]  # elitism: keep the 2 best genomes
    while len(next_gen) < POP_SIZE:
        p1, p2 = random.choices(population[:4], k=2)
        next_gen.append(mutate(crossover(p1, p2)))
    population = next_gen

print("Best genome found:", population[0])
print("Fitness:", fitness(population[0]), "/", GENOME_LEN)
print("Generations used:", gen + 1)