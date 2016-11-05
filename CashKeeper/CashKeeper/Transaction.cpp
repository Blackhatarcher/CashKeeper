#include "stdafx.h"
#include "Transaction.h"


Transaction::Transaction(double q, string d, Source s, string i, Catagory c) {
	quantity = q;
	date = d;
	source = s;
	item = i;
	catagory = c;
}
double Transaction::getQuantity() {
	return quantity;
}
string Transaction::getDate() {
	return date;
}
//might want to change this so it calls .getName() on the source
Source Transaction::getSource() {
	return source;
}
string Transaction::getItem() {

}
Catagory Transaction::getCatagory() {

}

