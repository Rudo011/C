#include <iostream>
int main()
{
	int x=0;

	std::cout << "Ներմուծեք գումա րի չա փ ը։ Դոլա րով։" << std::endl;
	std::cin >> x;
		
	if (x>9999)
	std::cout << "Խ նդրում ենք ներմուծել 1-9999։" << std::endl;
	else{
		std::cout << "Դ ուք ներմուծել եք։ ";
		
		if ( ( x / 1000 ) % 10 == 1 ) std::cout<<"հա զա ր  ";
		else if ( ( x / 1000 ) % 10 == 2 ) std::cout<<"երկու հա զա ր  ";
		else if ( ( x / 1000 ) % 10 == 3 ) std::cout<<"երեք հա զա ր  ";
		else if ( ( x / 1000 ) % 10 == 4 ) std::cout<<"չորս հա զա ր  ";
		else if ( ( x / 1000 ) % 10 == 5 ) std::cout<<"հինգ հա զա ր  ";
		else if ( ( x / 1000 ) % 10 == 6 ) std::cout<<"վեց հա զա ր  ";
		else if ( ( x / 1000 ) % 10 == 7 ) std::cout<<"յոթ հա զա ր  ";
		else if ( ( x / 1000 ) % 10 == 8 ) std::cout<<"ութ հա զա ր  ";
		else if ( ( x / 1000 ) % 10 == 9 ) std::cout<<"ինը հա զա ր  ";

		if ( ( x / 100 ) % 10 == 1 ) std::cout<<"հա րյուր";
		else if ( ( x / 100 ) % 10 == 2 ) std::cout<<"երկու հա րյուր  ";
		else if ( ( x / 100 ) % 10 == 3 ) std::cout<<"երեք հա րյուր  ";
		else if ( ( x / 100 ) % 10 == 4 ) std::cout<<"չորս հա րյուր  ";
		else if ( ( x / 100 ) % 10 == 5 ) std::cout<<"հինգ հա րյուր  ";
		else if ( ( x / 100 ) % 10 == 6 ) std::cout<<"վեց հա րյուր  ";
		else if ( ( x / 100 ) % 10 == 7 ) std::cout<<"յոթ հա րյուր  ";
		else if ( ( x / 100 ) % 10 == 8 ) std::cout<<"ութ հա րյուր  ";
		else if ( ( x / 100 ) % 10 == 9 ) std::cout<<"ինը հա րյուր  ";


								
		if ( ( x / 10 ) % 10 == 1 ){

			if ( x % 10 == 0 ) std::cout<<"տ ա ս դոլա ր";
			else if ( x % 10 == 1 ) std::cout<<"տ ա սնմեկ դոլա ր";
			else if ( x % 10 == 2 ) std::cout<<"տ ա սներկու դոլա ր";
			else if ( x % 10 == 3 ) std::cout<<"տ ա սներեք դոլա ր";
			else if ( x % 10 == 4 ) std::cout<<"տ ա սնչորս դոլա ր";
			else if ( x % 10 == 5 ) std::cout<<"տ ա սնհինգ դոլա ր";
			else if ( x % 10 == 6 ) std::cout<<"տ ա սնվեց դոլա ր";
			else if ( x % 10 == 7 ) std::cout<<"տ ա սնյոթ դոլա ր";
			else if ( x % 10 == 8 ) std::cout<<"տ ա սնութ դոլա ր";
			else if ( x % 10 == 9 ) std::cout<<"տ ա սնինը դոլա ր";
		}

		if ( ( x / 10 ) % 10 == 2 ) std::cout << "քսա ն";
		else if ( ( x / 10 ) % 10 == 3 ) std::cout<<"երեսուն";
		else if ( ( x / 10 ) % 10 == 4 ) std::cout<<"քա րա սուն";
		else if ( ( x / 10 ) % 10 == 5 ) std::cout<<"հիսուն";
		else if ( ( x / 10 ) % 10 == 6 ) std::cout<<"վա թ սուն";
		else if ( ( x / 10 ) % 10 == 7 ) std::cout<<"յոթա նա սուն";
		else if ( ( x / 10 ) % 10 == 8 ) std::cout<<"ութա նա սուն";
		else if ( ( x / 10 ) % 10 == 9 ) std::cout<<"ինսուն";

		if ( ( x / 10 ) % 10 != 1 ) {
											
			if ( x % 10 == 0 ) std::cout<<"դոլա ր";
			else if ( x % 10 == 1 ) std::cout<<"մեկ դոլա ր";
			else if ( x % 10 == 2 ) std::cout<<"երկու դոլա ր";
			else if ( x % 10 == 3 ) std::cout<<"երեք դոլա ր";
			else if ( x % 10 == 4 ) std::cout<<"չորս դոլա ր";
			else if ( x % 10 == 5 ) std::cout<<"հինգ դոլա ր";
			else if ( x % 10 == 6 ) std::cout<<"վեց դոլա ր";
			else if ( x % 10 == 7 ) std::cout<<"յոթ դոլա ր";
			else if ( x % 10 == 8 ) std::cout<<"ութ դոլա ր";
			else if ( x % 10 == 9 ) std::cout<<"ինը դոլա ր";
		}

		
	}
	

	std::cout << std::endl << std::endl;

	return 0;
}
