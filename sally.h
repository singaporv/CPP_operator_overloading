#ifndef SALLY_H
#define SALLY_H

class sally{

public:
	int num;
	sally(); // there are 2 constructors 
	sally(int);

	sally operator+(sally);  // this function is going to return a sally object --> this is going to do --> take one sally object and add another sally object
};

#endif 