#include <iostream>
using namespace std;
int main()
{ 
	int numberDay;

	cout<<"Введите день недели - ";
	cin>>numberDay;

	switch (numberDay)
{	
	case 1:
	cout<<"9:00-12:20 - коледж, 13:00-18:30 - занятия"<<endl;;
	break;

	case 2:
	cout<<"9:00-12:20 - коледж, 12:30-13:30 - VTB, 14:00-19:00 - занятия"<<endl;
	break;

	case 3:
	cout<<"10:05-13:30 - коледж, 14:00-19:00 - занятия, 20:00 - кино"<<endl;
	break;

	case 4:
	cout<<"9:00-12:20 - коледж, 13:00-18:30 - занятия"<<endl;
	break;

	case 5:
	cout<<"9:00-12:20 - коледж, 13:00-18:00 - занятия, 18:30-22:30 - Степанаван"<<endl;
	break;

	case 6:
	cout<<"11:00-18:00 - занятия, 18:30-21:00 - гулять"<<endl;
	break;

	case 7:
	cout<<"11:00-18:00 - занятия"<<endl;
	break;

	default:
	cout<<"Нет такого дня"<<endl;
}
return 0;
}
