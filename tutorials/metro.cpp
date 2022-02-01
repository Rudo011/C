#include <iostream>
using namespace std;
int main()
{

	int number=0;
	bool x=true;

		cout<<"Введите номер станции метро, для подсчета времени"<<endl;
		cout<<"1 - станция Сасунци Давид"<<endl;
		cout<<"2 - станция Барекамутюн"<<endl;
		cout<<"3 - станция Киликиа"<<endl;
		cout<<"4 - станция Баграмян"<<endl;
		cout<<"5 - станция Московская"<<endl;


do
{
cin>>number;


	switch (number)
{
		case 1:
		cout<<"До станции метро Сасунци Давид - 8 минут"<<endl;
		break;

		case 2:
		cout<<"До станции метро Барекамутюн - 15 минут"<<endl;
		break;

		case 3:
		cout<<"До станции метро Киликиа - 18 минут"<<endl;
		break;

		case 4:
		cout<<"До станции метро Баграмян - 21 минут"<<endl;
		break;

		case 5:
		cout<<"До станции метро Московская - 26 минут"<<endl;
		break;

		default:
		cout<<"Такой станции не существует!"<<endl;
		cout<<"Пожалуйста введите правильный номер! (1-5)"<<endl;

}

	if (number>=1 && number<=5)
	x=false;
}
		while (x);
return 0;
}

