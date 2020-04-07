	#include <iostream>
	using namespace std;
		void BILL (string items , int amount, int quantity)
			{
				cout << "You have ordered the following " << endl << endl;
				cout << "ITEMS" << "\t"<< "\t" << items << endl
				     << "QUANTITY" << "\t"  << quantity << endl
					 << "TOTAL PRICE" <<"\t" << amount << endl;		
				
			}
	
	int main()
	{
		string ITEMS;
		int quantity, deal, amount;
		int deal0=0;
		int deal1=0;
		int deal2=0;
		int deal3=0;
		int deal4=0;
		int deal5=0;
		
		cout << "WELCOME TO BURGER KING !" << endl;
		cout << "SELECT YOUR ITEM TO ORDER THE HEALTHY FOOD :)" << endl << endl;
		cout << "                    MENU                    " << endl;
		cout << "DEALS                                              :       PRICE" << endl;
		cout << "BURGERS: "<< endl
		     << "0:Bulldoze Japanes Chese, half litre botel         :       PKR 849" << endl
		     << "1:Volconda Sponach Chese , 6 pices wings           :       PKR 899" << endl
			 << "2:Rodeo Glory, 1 litre Drink                       :       PKR 699" << endl << endl				
		   	 <<	"STEAKS: " << endl
			 <<	"3:Moroccano, zippy                                 :       PKR 999" << endl
			 <<	"4:Italiano, Goody Moody                            :       PKR 999" << endl              
			 <<	"5:Texan, half Chicken piece                        :       PKR 999" << endl << endl;
			 
		A:
		cout << "DEAL N0 = " ;
		cin  >> deal;
		cout << "QUANTITY = ";
		cin >> quantity;
		cout << endl ;		
		switch(deal)
		{
			case 0:
				{
					deal0++;
					int amount  = quantity * 849;
					string ITEMS = "Bulldoze Japanes Chese, half litre botel";
					BILL(ITEMS, amount,quantity);
					break;
					
				}
			case 1:
				{
					deal1++;
					int amount = quantity * 899;
					string ITEMS = "Volconda Sponach Chese , 6 pices wings";
					BILL(ITEMS, amount,quantity);
					break;
				}
			case 2:
				{
					deal2++;
					int amount = quantity * 699;
					string ITEMS = "Rodeo Glory, 1 litre Drink";
					BILL(ITEMS, amount,quantity);
					break;
				}
			case 3:
				{
					deal3++;
					int amount = quantity * 999;
					string ITEMS = "Moroccano, zippy";
					BILL(ITEMS, amount,quantity);
					break;
				}
			case 4:
				{
					deal4++;
					int amount = quantity * 999;
					string ITEMS = "Italiano, Goody Moody";
					BILL(ITEMS, amount, quantity);
					break;
				}
					
			case 5:
				{
					deal5++;
					int amount = quantity * 999;
					string ITEMS = "Texan, half Chicken piece";
					BILL(ITEMS, amount, quantity);
					break;
				} 
			default :
				cout << "Please enter a valid deal number" << endl;
				    goto A;
			}
			return 0;
		}		

