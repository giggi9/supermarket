
#include<bits/stdc++.h>
using namespace std;

//defining global variables
float quantity;
double total_amount = 0;
char c1, confirm_quantity;
int selectedNum;
int flag = 0;



//store items with their corresponding price in map
map<string,double> items = {
   
    {"Apple",55999},
    {"Samsung",19999},
    {"MI",21999},
    {"AndroidTV",30799},
    {"boAT",3699},
    {"JBL",2499},
    
};
//store selected items with their quantity in a map
map<string,int>selected_items;



//// Function to print the bill after shopping
// is completed prints the items, quantity,
// their cost along with total amount
void printBill(map<string, double> items,
			map<string, int> selected_item,
			float total_amount)
{
	cout << "Item	 "
		<< "Quantity	 "
		<< "Cost\n";

	for (auto j = selected_item.begin();
		j != selected_item.end(); j++) {
		cout << j->first << "	 ";
		cout << j->second << "		 ";
		cout << (selected_item[j->first])
					* (items[j->first])
			<< endl;
	}

	cout << "-----------------------"
		<< "-------------\n";
	cout << "Total amount:			 "
		<< total_amount << endl;
	cout << "-----------------------"
		<< "-------------\n";
	cout << "*****THANK YOU && HAPPY"
		<< " ONLINE SHOPPING*****";
}



//Function to ask basic details of customer
void customerDetails()
{

	cout << "Enter your name: ";
	string customer_name;
	getline(cin, customer_name);

	cout << "WELCOME ";
	for (int i = 0;
		i < customer_name.length();
		i++) {
		cout << char(toupper(
			customer_name[i]));
	}
	cout << "\n";
}

void showdeptMenu()
{
	cout << "- - - - - - - - - - -"
		<< " - -\nCategories\n";
	cout << "1.Mobiles/Computers\n";
	cout << "2.TV/Appliances/Electronics\n";
	cout << "- - - - - - - - - - - - -\n";
}

void showmobcompMenu()
{
	cout << "- - - - - - - - - - -"
		<< " - -\nItems     Price \n";
	cout << "1.Samsung  Rs-19999/-\n";
    cout << "2.MI       Rs-21999/-\n";
	cout << "3.Apple    Rs-55999/-\n";
		cout << "- - - - - - - - - - - - -\n";
}

void showtvMenu()
{
	cout << "- - - - - - - - - - -"
		<< " - -\nItems             Price \n";
	cout << "1.Android TV           Rs-19999/-\n";
	cout << "2.boAT Headphones      Rs-21999/-\n";
	cout << "3.JBL Headphones       Rs-45490/-\n";
	cout << "- - - - - - - - - - - - -\n";
}

//Function to display the mobile category
void selectedMobile()
{
	cout << "Do you wish to conti"<< "nue?(for yes"<< "+ "<< "press (Y/y ), "<< " if no press other letter ): ";
	cin >> c1;

	if (c1 == 'Y' || c1 == 'y') {
		cout << "Enter respective number: ";
		cin >> selectedNum;

		if (selectedNum == 1
			|| selectedNum == 2
			|| selectedNum == 3) {

			// Selected Samsung
			if (selectedNum == 1) {

				cout << "selected Samsung\n";
				do {
					cout << "Quantity: ";

					cin >> quantity;

					cout << "You have selected Samsung - "
						<< quantity << endl;
					cout << "Are you sure?"						<< "(for yes press (Y/y ), "						<< " if no press other letter): ";

					cin >> confirm_quantity;

				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["Samsung"];
					selected_items["Samsung"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}

			// Selected MI
			if (selectedNum == 2) {

				cout << "selected MI\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selec"
						<< "ted MI - "
						<< quantity << endl;
					cout << "Are you sure?(f"
						<< "or yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {

					total_amount += quantity
									* items["MI"];
					selected_items["MI"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}

			// Selected Apple
			if (selectedNum == 3) {

				cout << "You have selected Apple\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selected"
						<< " Apple - "
						<< quantity
						<< endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y )"
						<< ", if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["Apple"];
					selected_items["Apple"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}
		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// If tv/headphone category is selected
void selectedTvheadphone()
{
	cout << "Do you wish to continue?"
		<< "(for yes press (Y/y ), "
		<< "if no press other letter): ";
	cin >> c1;
	if (c1 == 'Y' || c1 == 'y') {

		cout << "Enter respective number: ";
		cin >> selectedNum;

		if (selectedNum == 1
			|| selectedNum == 2
			|| selectedNum == 3) {

			// selected Android Tv
			if (selectedNum == 1) {
				cout << "selected Android TV\n";
				do {

					cout << "Quantity: ";
					cin >> quantity;

					cout << "You have selected"
						<< " Android TV - "
						<< quantity << endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["AndroidTV"];
					selected_items["AndroidTV"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}

			// selected boAt
			if (selectedNum == 2) {
				cout << "selected boAT headphones\n";
				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selected"
						<< " boAT headphones- "
						<< quantity << endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity
							!= 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["boAT"];
					selected_items["boAT"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}

			// selected jbl
			if (selectedNum == 3) {
				cout << "selected JBL Headphones\n";
				do {

					cout << "Quantity: ";
					cin >> quantity;

					cout << "You have selected"
							" JBL Headphones - "
						<< quantity << endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y ), "
						<< "if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["JBL"];
					selected_items["JBL"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}
		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// Driver code
int main()
{
	// function call
	customerDetails();

	do {
		showdeptMenu();
		cout << "Do you wish to continue?"
			<< "(for yes press (Y/y ), "
			<< " if no press other letter ): ";
		char c;
		cin >> c;
		if (c == 'Y' || c == 'y') {
			cout << "Enter respective number: ";
			int num;
			cin >> num;
			if (num == 1 || num == 2)
			{
				switch (num) {
				case 1:

					// For Mobile
					showmobcompMenu();
					selectedMobile();
					break;

				case 2:

					// For Laptop
					showtvMenu();
					selectedTvheadphone();
					break;

					}
			}
			else {
				flag = 1;
			}
		}
		else {
			flag = 1;
		}

	} while (flag == 0);

	// print bill
	printBill(items, selected_items,
			total_amount);
}
