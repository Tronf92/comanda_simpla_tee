#include <iostream>
using namespace std;

void main(void){
	char litera;
	while ( (litera=cin.get() ) != -1){
		cout.put(litera);
		cerr.put(litera);
	}
	system("pause");
}
