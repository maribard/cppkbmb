#include <iostream>
#include "aghFib.h"

using namespace std;

int aghFib::operator[](int n) {
	int *tab = new int[n+1];
	tab[0]=0;
	tab[1]=1;
	for( int i=2 ; i<=n ; ++i ) {
		tab[i] = tab[i-1]+tab[i-2];
	}
	return tab[n];
}
