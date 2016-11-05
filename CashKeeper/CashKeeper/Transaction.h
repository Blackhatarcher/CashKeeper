#pragma once
#include <string>
#include "Source.h"
#include "Catagory.h"
using namespace std;
class Transaction
{
private:
	double quantity;
	string date;
	Source source;
	string item;
	Catagory catagory;
public:
	Transaction(double q, string d, Source s, string i, Catagory c);
	double getQuantity();
	string getDate();
	Source getSource();
	string getItem();
	Catagory getCatagory();

};

