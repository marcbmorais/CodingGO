
#include <iostream>
#include <string>
using namespace std;

int code1()
{
	int choice;

	cout << "What do you want to do?" << endl;
	cout << "1. Detect genre from BPM" << endl; // here they can input BPM and get the genre of music that is typically associated
	cout << "2. Calculate beat duration" << endl; // here they can input BPM and get the duration of each beat in seconds
	cout << "Choose: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Genre detection - coming soon " << endl;
		break;
	case 2:
		cout << " Beat calculator - coming soon " << endl;
		break;
	default:
		cout << "Invalid choice" << endl;
		break;
	}
	return 0;
}
