# Genetic-algorithm

The basic principles of the operation of genetic algorithms are studied using the example of solving optimization problems.

## Formulation of the problem

Find the maximum of the function $f(x,y)$ in domain $D$ using a simple genetic algorithm. Take four random points as the initial population. The chromosome of each individual consists of two genes: $x$, $y$ coordinate values. The offspring should be the result of crossing the best solution with the second and third in descending order of the fitness function value, followed by a random mutation of both genes. As a criterion for stopping the evolutionary process, set the numbers of the final population $(N: 10^1...10^2)$.

## Given

$f(x,y)=cos(x)⋅cos(y)$
$D=(-2.2)r(-2.2)$

Graph of a function:

![image](https://github.com/IsmElnur/Genetic-algorithm/assets/37519575/3b83f7b9-1eef-4a4e-9a33-2f59b50c05f6)

We'll find the maximum of the function using the genetic algorithm search method.

N = 10
GENS:  x = 0.148503             y = -1.09433
GENS:  x = -0.761437            y = -0.411206
GENS:  x = -0.99472             y = -0.186956
GENS:  x = 0.841273             y = -0.467116
[-0.672031,-0.141668]   [-0.687635,-0.12329]    [-0.689203,-0.155048]   [-0.715656,-0.164914]   f(x, y):          0.774719

N = 20
GENS:  x = 1.2053       y = -1.41783
GENS:  x = -1.98682             y = -1.17917
GENS:  x = -0.265938            y = -0.929655
GENS:  x = 0.58211              y = -1.75903
[-0.0149907,-0.74631]   [-0.143236,-0.745259]   [-0.107729,-0.755918]   [-0.0466262,-0.77429]   f(x, y):          0.734116

N = 30
GENS:  x = 0.710532             y = -1.67162
GENS:  x = -1.96472             y = -1.16831
GENS:  x = 1.89319              y = -1.24668
GENS:  x = 0.849452             y = -1.90014
[0.527519,-1.00601]     [0.566866,-0.991295]    [0.503481,-1.01657]     [0.630291,-1.00849]     f(x,y):          0.462472

N = 40
GENS:  x = -1.9541              y = 0.730552
GENS:  x = 1.85388              y = -0.447707
GENS:  x = -0.546709            y = -1.84301
GENS:  x = 0.635701             y = 1.99915
[-0.0288461,-0.00493483]        [-0.0640416,-0.02266]   [-0.0684042,-0.0347987] [-0.0951689,-0.081521]  f(x, y):          0.999572

N = 50
GENS:  x = -0.422315            y = -0.598834
GENS:  x = -1.50243             y = 0.294626
GENS:  x = -0.716514            y = -1.73925
GENS:  x = 0.245064             y = -0.700156
[0.0294961,0.0044435]   [0.0290292,0.0193716]   [-0.00518357,-0.0345988]        [-0.0390942,0.00018312] f(x, y):          0.999555

N = 60
GENS:  x = -0.189886            y = 1.2678
GENS:  x = -0.638386            y = -0.158025
GENS:  x = 1.62877              y = -1.95654
GENS:  x = -0.902432            y = 0.171453
[0.0411664,-0.0103732]  [-0.0288202,-0.0352367] [-0.0455886,-0.00517442]        [-0.0388134,-0.035229]  f(x, y):          0.999099

N = 70
GENS:  x = -1.96838             y = -0.816614
GENS:  x = 0.733604             y = -0.208319
GENS:  x = 1.31809              y = 1.15806
GENS:  x = 0.815882             y = 1.0029
[0.0460235,-0.0220435]  [0.0596195,0.00214087]  [0.0695273,-0.00380414] [0.0573214,-0.05665]    f(x, y):          0.998698

N = 80
GENS:  x = -1.76562             y = -1.99048
GENS:  x = 0.0134892            y = 0.488479
GENS:  x = -1.81994             y = -1.97278
GENS:  x = -1.0947              y = -0.544633
[-0.0113193,-0.00553454]        [0.00852687,0.0175878]  [0.0153447,0.0259804]   [0.0334712,0.0220801]   f(x, y):          0.999921

N = 90
GENS:  x = 0.0726951            y = -0.11652
GENS:  x = 1.49144              y = -1.04099
GENS:  x = 1.44554              y = -1.97314
GENS:  x = 0.0333873            y = 1.14292
[0.00524919,-0.0097293] [-0.0178396,-0.00608234]        [0.0191855,0.0152043]   [-0.00592822,0.0449126] f(x, y):          0.999939

N = 100
GENS:  x = -0.74398             y = 0.9747
GENS:  x = 0.263619             y = -1.40025
GENS:  x = 0.370556             y = -1.4453
GENS:  x = -1.98962             y = -1.87646
[-0.00237434,0.0999969] [-0.0637272,0.0850063]  [0.0154653,0.110169]    [-0.0306665,0.114069]   f(x, y):          0.995002

The genetic algorithm as an optimization search for the maximum of a given function of two variables is implemented in the C++ programming language.
