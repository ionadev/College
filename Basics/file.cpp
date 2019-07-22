#include <iostream>
#include <fstream>

using namespace std;

class Student {
	float marks[10], student[10],i;
public:
	void get() {
		for(i = 0; i< 10;i++) {
			cout << "Enter Student Name: ";
			cin >> s[i];
			cout << endl;
			cout << "Enter Marks of " << s[i] << ": ";
			cin > marks[i];
		}
	}

	void sort() {
		for(i = 0; i< 10; i++) {
			for(int j=0;j < 10; j++) {
				if(marks[i] < marks[j]) {
					marks[i] = marks[j];
				}
			}
		}
	}

	void write(*file) {
		for(i = 0; i< 10; i++) {
			*file << student[i] << " - " << marks[i] << endl;
		}
	}
};

int  main(int argc, char const *argv[])
{
	Student s;
	fstream file;
	f.open("result.txt", ios::out);
	s.get();
	s.sort();
	s.write(&file);
	file.close();
	return 0;
}