#include <iostream>
#include <cmath>
#include <ctime>
#include <random>
using namespace std;

using genom = pair<double, double>; // x * y
using population = vector<genom>;
const double SIZE = 4;
const double X1 = -2, X2 = 2, Y1 = -2, Y2 = 2;

double function(genom& g) // a function 
{
	double x = g.first;
	double y = g.second;
	// cout << x <<"    \t"<< y << endl;
	return (cos(x) * cos(y));
}

double getRandom(const double& l, const double& r) // random value
{
	return (l + (rand()) / (RAND_MAX / (r - l)));
}

genom generateGen(double x1, double x2, double y1, double y2) // We create genes 
{
	float x = getRandom(x1, x2);
	float y = getRandom(y1, y2);
	cout << "GENS:  " << "x = " << x << "      \t" << "y = " << y << endl;
	return make_pair(x, y);
}

population generatePopulation(double x1, double x2, double y1, double y2, double N) // We create a population 
{
	population p;
	for (double i = 0; i < N; ++i)
	{
		p.push_back(generateGen(x1, x2, y1, y2));
	}
	return p;
}

void rightGen(population& p) // sorting
{
	sort(p.begin(), p.end(), [](genom a, genom b) {return function(a) > function(b); });
}

void mutation(genom& p) // mutation 
{
	auto mut = (getRandom(0.0, 1.0) - 0.5) / 20;
	p.first += mut;
	p.second += mut;
	// cout << "MUTATION: " << mut << endl;
};

void crossingover(population& p) // We crossbreed 
{
	population child;
	for (double i = 1; i <= 2; ++i)
	{
		auto best = p[0];
		auto next = p[i];
		swap(best.first, next.first);
		child.push_back(best);
		child.push_back(next);
	}
	for (double i = 0; i < child.size(); ++i)
	{
		mutation(child[i]); // mutation 
	}
	p = child;
}

void genAlg(const double x1, const double x2, const double y1, const double y2, double N)
{
	auto p = generatePopulation(x1, x2, y1, y2, SIZE);
	for (double i = 0; i < N; ++i)
	{
		rightGen(p);
		crossingover(p);
	}
	rightGen(p);
	for (auto x : p)
	{
		cout << "[" << x.first << "," << x.second << "]" << "\t";
	}
	cout << "f(x,y): \t " << function(p[0]) << endl;
}

int main()
{
	srand(time(nullptr));
	for (double n = 10; n <= 100; n += 10)
	{
		cout << "N = " << n << endl;
		genAlg(X1, X2, Y1, Y2, n);
	}
	return 0;
}
