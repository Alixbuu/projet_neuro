#include <iostream>
using namespace std;
#include "fichier_const.hpp"

#ifndef Neuron_H
#define Neuron_H
#include <cmath>
#include <vector>

typedef vector<double> time_vector;

class Neuron {
	private:
	 double membrane_pot;
	 time_vector timespike; // peut etre pas une bonne idee
	 int numberspike;
	 //double T=n*h;
	 bool n_refractory = false;
	 double local_t;
	  
	 // est ce que le courant externe ini dans le main ou bien dans classe?//
	 
	public : 
	Neuron(double membranepotential=10.0, int numspike= 0,double local=0.0);
	void update(double I); // à completer
	double getmembrane();
	int getnumspike();
};
	
	
	
	
	
	
	
	
	
	
#endif	
