#include <iostream>
using namespace std;
int main()
{
    int day;
	cout << "Curriculum of which day you want to know? \n 1-monday \n 2-tuesday \n 3-wednesday \n 4-thursday \n 5-friday \n 6-saturday \n 7-sunday" << endl;
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "Monday \n8:00-14:00 -- school; \n16:00-18:00 -- math;";
		break;
	case 2:
		cout << "Tuesday \n8:00-14:00 -- school; \n16:00-18:00 -- English;";
		break;
	case 3:
		cout << "Tuesday \n8:00-14:00 -- school; \n16:00-18:00 -- Physics;";
		break;
	case 4:
		cout << "Wednesday \n8:00-14:00 -- school; \n16:00-18:00 -- Football;";
		break;
	case 5:
		cout << "Friday \n8:00-14:00 -- school; \n16:00-18:00 -- Basketball;";
		break;
	case 6:
		cout << "Saturday \n8:00-14:00 -- school; \n16:00-18:00 -- IT;";
		break;
	case 7:
		cout << "Sunday \n8:00-14:00 -- school; \n16:00-18:00 -- Movie club;";
		break;
	default:
		cout << "there is no such a number"; break;
	}



	return 0;
}