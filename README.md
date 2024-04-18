# Genetic-algorithm

The basic principles of the operation of genetic algorithms are studied using the example of solving optimization problems.

## Formulation of the problem

Find the maximum of the function $f(x,y)$ in domain $D$ using a simple genetic algorithm. Take four random points as the initial population. The chromosome of each individual consists of two genes: $x$, $y$ coordinate values. The offspring should be the result of crossing the best solution with the second and third in descending order of the fitness function value, followed by a random mutation of both genes. As a criterion for stopping the evolutionary process, set the numbers of the final population $(N: 10^1...10^2)$.
