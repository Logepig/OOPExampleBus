#include "Header.h"

using namespace std;

class Bus {
public:
	string numer;
	string Type;
	float cost;
	int passenger_number;
	float benefit;

	Bus() {
		numer = "Clear";
		Type = "Clear";
		cost = 0;
		passenger_number = 0;
		benefit = 0;
	}
	Bus(string numer1, string Type1, float cost1, int pass_num) {
		numer = numer1;
		Type = Type1;
		cost = cost1;
		passenger_number = pass_num;
		benefit = cost / pass_num;
	}
	
	Bus Auto_Type() {
		string type;
		Bus type1;
		type1.Type = type;
		int num;
		num = rand() % 5;
		switch (num) {
		case 0: type = "MAZ"; break;
		case 1: type = "PAZ"; break;
		case 2: type = "Mersedes Benz"; break;
		case 3: type = "Scania"; break;
		case 4: type = "Neoplan"; break;
		}
		return type1;
	}
	Bus Auto_Cost() {
		int num;
		Bus bus;
		num = (rand() + 10000);
		bus.cost = num;
		return bus;
	}
	Bus Auto_Pass_Num() {
		int num;
		Bus bus;
		num = (rand() % 85) + 15;
		bus.passenger_number = num;
		return bus;
	}
	Bus Auto_Benefit(float cost, int pass_num) {
		Bus bus;
		bus.benefit = cost / pass_num;
		return bus;
	}
	Bus Auto_Numer() {
		Bus bus;
		string numer;
		int num = rand() % 21;
		switch (num) {
		case 0: numer = "0000PM7"; break;
		case 1: numer = "0001PM7"; break;
		case 2: numer = "0002PM7"; break;
		case 3: numer = "0003PM7"; break;
		case 4: numer = "0004PM7"; break;
		case 5: numer = "0005PM7"; break;
		case 6: numer = "0006PM7"; break;
		case 7: numer = "0007PM7"; break;
		case 8: numer = "0008PM7"; break;
		case 9: numer = "0009PM7"; break;
		case 10: numer = "0010PM7"; break;
		case 11: numer = "0011PM7"; break;
		case 12: numer = "0012PM7"; break;
		case 13: numer = "0013PM7"; break;
		case 14: numer = "0014PM7"; break;
		case 15: numer = "0015PM7"; break;
		case 16: numer = "0016PM7"; break;
		case 17: numer = "0017PM7"; break;
		case 18: numer = "0018PM7"; break;
		case 19: numer = "0019PM7"; break;
		case 20: numer = "0020PM7"; break;
		}
		bus.numer = numer;
		return bus;
	}
	void Iniciate() {
		Bus bus;
		bus.Auto_Numer();
		bus.Auto_Type();
		bus.Auto_Cost();
		bus.Auto_Pass_Num();
		bus.Auto_Benefit(bus.cost, bus.passenger_number);
	}
	string convert() {
		string msg = " ";
		msg += "Numer: " + numer + " " + " Type: " + Type + " Cost: " + to_string(cost) + " passenger_number: " + to_string(passenger_number) + " Benefit " + to_string(benefit);
		return msg;
	}
	int* sort(int* array) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (array[j] < array[j + 1]) {
					int temp;
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
			}
			
		}
		return array;
	}
};

int main() {
	srand(time(NULL));
	Bus array[5];
	Bus bus1;
	Bus bus2;
	Bus bus3;
	Bus bus4;
	Bus bus5;
	bus1.Iniciate();
	bus2.Iniciate();
	bus3.Iniciate();
	bus4.Iniciate();
	bus5.Iniciate();
	cout << "Bus1" << bus1.convert() << endl;
	cout << "Bus2" << bus2.convert() << endl;
	cout << "Bus3" << bus3.convert() << endl;
	cout << "Bus4" << bus4.convert() << endl;
	cout << "Bus5" << bus5.convert() << endl;
	array[0] = bus1;
	array[1] = bus2;
	array[2] = bus3;
	array[3] = bus4;
	array[4] = bus5;
	





	return 0;
}