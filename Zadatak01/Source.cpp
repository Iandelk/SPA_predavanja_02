#include <iostream>
#include<array>
#include <algorithm>


using namespace std;

bool je_neparan (int i) {

	return !((i % 2) == 0);
}

bool je_paran(int i) {

	return ((i % 2) == 0);
}


int main() {

	array<int, 5> p = { 22, 22,11,11,37 };
	array<int, 5>::iterator it;
	if (all_of(p.begin(), p.end(), je_neparan))
		cout << "svi brojevi su neparni! " << endl;
	else {
		cout << "Nisu svi brojevi neparni! " << endl;
	}
	
		it = find_if(p.begin(), p.end(), je_paran);
		if(it != p.end())
		std::cout << "Prvi parni broj je: " << *it << endl;
		else {
			cout << "nema parnih brojeva! " << endl;
		}
	

		it = adjacent_find(p.begin(), p.end());
		
			while (it != p.end() && *it % 2 == 0 ) {
			
				it = adjacent_find(++it, p.end());
			}

			if (it != p.end()) {

			cout << "Prva dva neparna uzastopna broja su: " << *it << endl;
		}
		else
			cout << "nema dva neparna uzastopna broja! " << endl;

	return 0;
}