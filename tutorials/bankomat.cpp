#include <iostream>
using namespace std;
int main()
{
	int x=0;

	cout<<"Ներմուծեք գումա րի չա փ ը։ Դոլա րով։"<<endl;
	cin>>x;
		
		if (x>9999)
			cout<<"Խ նդրում ենք ներմուծել 1-9999։"<<endl;
		else
		{
			cout<<"Դ ուք ներմուծել եք։ ";
		



							
						if ((x/1000)%10==1) cout<<"հա զա ր  ";
						else if ((x/1000)%10==2) cout<<"երկու հա զա ր  ";
						else if ((x/1000)%10==3) cout<<"երեք հա զա ր  ";
						else if ((x/1000)%10==4) cout<<"չորս հա զա ր  ";
						else if ((x/1000)%10==5) cout<<"հինգ հա զա ր  ";
						else if ((x/1000)%10==6) cout<<"վեց հա զա ր  ";
						else if ((x/1000)%10==7) cout<<"յոթ հա զա ր  ";
						else if ((x/1000)%10==8) cout<<"ութ հա զա ր  ";
						else if ((x/1000)%10==9) cout<<"ինը հա զա ր  ";



							if ((x/100)%10==1) cout<<"հա րյուր";
							else if ((x/100)%10==2) cout<<"երկու հա րյուր  ";
							else if ((x/100)%10==3) cout<<"երեք հա րյուր  ";
							else if ((x/100)%10==4) cout<<"չորս հա րյուր  ";
							else if ((x/100)%10==5) cout<<"հինգ հա րյուր  ";
							else if ((x/100)%10==6) cout<<"վեց հա րյուր  ";
							else if ((x/100)%10==7) cout<<"յոթ հա րյուր  ";
							else if ((x/100)%10==8) cout<<"ութ հա րյուր  ";
							else if ((x/100)%10==9) cout<<"ինը հա րյուր  ";


								
								if ((x/10)%10==1)
								{

									if (x % 10 == 0) cout<<"տ ա ս դոլա ր";
									else if (x % 10 == 1) cout<<"տ ա սնմեկ դոլա ր";
									else if (x % 10 == 2) cout<<"տ ա սներկու դոլա ր";
									else if (x % 10 == 3) cout<<"տ ա սներեք դոլա ր";
									else if (x % 10 == 4) cout<<"տ ա սնչորս դոլա ր";
									else if (x % 10 == 5) cout<<"տ ա սնհինգ դոլա ր";
									else if (x % 10 == 6) cout<<"տ ա սնվեց դոլա ր";
									else if (x % 10 == 7) cout<<"տ ա սնյոթ դոլա ր";
									else if (x % 10 == 8) cout<<"տ ա սնութ դոլա ր";
									else if (x % 10 == 9) cout<<"տ ա սնինը դոլա ր";

								}

										if ((x/10)%10==2) cout<<"քսա ն";
										else if ((x/10)%10==3) cout<<"երեսուն";
										else if ((x/10)%10==4) cout<<"քա րա սուն";
										else if ((x/10)%10==5) cout<<"հիսուն";
										else if ((x/10)%10==6) cout<<"վա թ սուն";
										else if ((x/10)%10==7) cout<<"յոթա նա սուն";
										else if ((x/10)%10==8) cout<<"ութա նա սուն";
										else if ((x/10)%10==9) cout<<"ինսուն";


											if ((x/10)%10 !=1)
											{
												if (x%10==0) cout<<"դոլա ր";
												else if (x%10==1) cout<<"մեկ դոլա ր";
												else if (x%10==2) cout<<"երկու դոլա ր";
												else if (x%10==3) cout<<"երեք դոլա ր";
												else if (x%10==4) cout<<"չորս դոլա ր";
												else if (x%10==5) cout<<"հինգ դոլա ր";
												else if (x%10==6) cout<<"վեց դոլա ր";
												else if (x%10==7) cout<<"յոթ դոլա ր";
												else if (x%10==8) cout<<"ութ դոլա ր";
												else if (x%10==9) cout<<"ինը դոլա ր";
											}

		}
	

			cout<<endl<<endl;

	return 0;
}
