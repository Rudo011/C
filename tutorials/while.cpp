#include <iostream>
using namespace std;
int main()
{

	int mutqanak=0;
	double ambgumar=0;
	double tiv=0;


			cout<<"Введите числа для расчета."<<endl<<"(чтобы выйти нажмите 0)"<<endl;



do 
{
	cout<<"Число "<<mutqanak+1<<" = ";
	cin>>tiv;


		if (tiv)
{
mutqanak++;
ambgumar+=tiv;
}
}

while(tiv);


		cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout<<"Количество введенных чисел: "<<mutqanak<<endl;
		cout<<"Общая сумма: "<<ambgumar<<endl;
		cout<<"Среднее арифметическое: "<<ambgumar / mutqanak<<endl;

return 0;


}
