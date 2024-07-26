#include"header.h" 
//defination of header files different functionalities

Customer::Customer()
{
	
}
Customer::Customer(string pName,string pGender,int pAge,string pLocation,int pPhoneNo)
{
	name=pName;
	gender=pGender;
	age=pAge;
	location=pLocation;
	phoneNo=pPhoneNo;
}
void Customer::getInfo1()
{
	
	cout<<"\t\tCustomer Details"<<endl;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Gender: ";
	cin>>gender;
	cout<<"Enter Age: ";
	cin>>age;
	cout<<"Enter Location: ";
	cin>>location;
	cout<<"Enter Phone No: ";
	cin>>phoneNo;
}
void Customer::displayData()
{
	cout<<"Customer name: "<<name<<endl;
	cout<<"Customer Gender: "<<gender<<endl;
	cout<<"Customer Age: "<<age<<endl;
	cout<<"Customer Location: "<<location<<endl;
	cout<<"Customer PhoneNo: "<<phoneNo<<endl;
	
}
void Customer::clearScreen()
{
	cout << endl;
    cout << "Press any key to continue " << endl;
    getch(); //built in function to hold screen until user passes the key
        
}
Customer::~Customer()
{
	cout<<"\nCustomer Class Destructor called....\n";
    cout<<endl;
}
//end of customer class functions definations

truckStock::truckStock()
{
	
}
truckStock::truckStock(string name,int model,int price,string manufactureCompany,char pKey)
{
	this -> name=name;
	this -> model=model;
	this -> price=price;
	this -> manufactureCompany;
	
}
void truckStock::getInfo2()
{
	cout<<"\t\tTruck Details"<<endl;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Model: ";
	cin>>model;
	cout<<"Enter Price: ";
	cin>>price;
	cout<<"Enter manufactureCompany: ";
	cin>>manufactureCompany;
	cout<<"Enter truck Condition\nfor new press 'N' and for used press 'U': ";
	cin>>key;	
	
}
void truckStock::displayData()
{
	cout<<"Truck name: "<<name<<endl;
	cout<<"Truck Year Model: "<<model<<endl;
	cout<<"Truck Price: "<<price<<endl;
	cout<<"Truck manufactureCompany: "<<manufactureCompany<<endl;	
	if(key=='N'||key=='n'){
		cout<<"The truck is in new condition.";
	}
	else if(key=='U'||key=='u'){
		cout<<"The truck is in used condition.";
	}
	
}
void truckStock::clearScreen()
{
	cout << endl;
    cout << "Press any key to continue " << endl;
    getch(); //built in function to hold screen until user passes the key
	
}
truckStock::~truckStock()
{
	cout<<"\nTruckStock class Destructor called.....";
	cout<<endl;
}
//end of truckStock class functions defination

programManager::programManager()
{
	
}
programManager::programManager(string pName,string pPassword)
{
	name=pName;
	password=pPassword;
}
void programManager::callMainProgramLoop()
{
			bool key=true;
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Password: ";
			cin>>password;
			cout<<"\nPress any key to continue";
			getch();
			system("cls");
		
				do
				{
					cout<<"\n 1. To Enter Customer Details ";
					cout<<"\n 2. To Enter ShopKeeper Details ";
					cout<<"\n 3. Exit ";
					cout<<"\n\n Enter your choice: ";
					cin>>ch;
					cout<<endl;
					
					switch(ch){
						case '1':
							{
								int size;
								cout<<"\n Enter No. Of Customers: ";
								cin>>size;
								cout<<endl;
								Customer *P1;
								P1=new Customer[size];
								for(int i=0; i<size;i++)
								P1[i].getInfo1();
								P1->clearScreen(); //-> this is used due to pointer object
							    char display;
								cout<<"\n\n Enter 'D' to display data: ";
								cin>>display;
								cout<<endl;
								if(display=='D' || display=='d'){
								for(int i=0; i<size;i++)
								P1[i].displayData();
							    }
							    char search;
							    int index;
							    cout<<"\n\n Enter 'S' to search data: ";
							    cin>>search;
							    if(search=='s'||search=='S'){
							    	cout<<"Enter index no you want to search: ";
							    	cin>>index;
							    for(int i=index;i<=index;i++){
							    	P1[i].displayData();
								   }
							    	
								}
//								char del;
//								cout<<"\n\n Enter 'X' to delete data: ";
//								cin>>del;
//								if(del=='X'||del=='x'){
//									deleteData();
////									cout<<"Enter index no you want to delete: ";
////									cin>>index;
////								for(int i=a;i<=a;i++){
////									deleteData();
////								}
//								}
						}
						break;
						case '2':
							{
							    int size;
								cout<<"\n Enter No. Of trucks: ";
								cin>>size;
								cout<<endl;
								truckStock *T1; //object of truckstock class
								T1=new truckStock[size];
								for(int i=0 ; i<size;i++)
								T1[i].getInfo2();
								T1->clearScreen();
							    char display;
							    cout<<"\n\n Enter 'D' to display data: ";
						    	cin>>display;
						    	cout<<endl;
							    if(display=='D' || display=='d'){
								for(int i=0; i<size;i++)
								T1[i].displayData();
							    }
							    char search;
							    int index;
							    cout<<"\n\n Enter 'S' to search data: ";
							    cin>>search;
							    cout<<endl;
							    if(search=='s'||search=='S'){
							    	cout<<"Enter index no you want to search: ";
							    	cin>>index;
							    for(int i=index;i<=index;i++){
							    	T1[i].displayData();
								}
							    cout<<"\n";
								}
								char buyKey;
								cout<<" Enter 'B' to buy a Truck: ";
								cin>>buyKey;
								if(buyKey=='B'||buyKey=='b'){
									cout<<"\tAvailable Stock";
									for(int i=0; i<size;i++){
										cout<<endl;
								        T1[i].displayData();
									}
									cout<<endl;
									cout<<"Enter index no of truck\nthat you want to buy: ";
									cin>>index;
									cout<<endl;
									for(int i=index;i<=index;i++){
							    	T1[i].displayData();
									}
									cout<<endl;
										
								}
			        	}
			        	break;
			        	case '3':
						{
							key=false;
					        cout<<"\nProgram exited......\nTkanks For Using...:)";
					        break;
				       }
					
				}
			
		
		}while(key==true);
	
}
//end of programManager class function defination

void intro()   //function for intro page
{
	cout<<"\n\n\n\t\tTRUCK INVENTORY";
	cout<<"\n\n\t\t  MANAGEMENT";
	cout<<"\n\n\t\t    SYSTEM";
	cout<<"\n\n\n\tMADE BY : MUHAMMAD TALHA"<<endl;
	cout<<"\n\tUNIVERSITY : AIR UNIVERSITY\n";
	cin.get();
	system("cls");
}

void mainHeader(){ //main headre function
	cout<<"========================================="<<endl;
	cout<<"\tTRUCK INVENTORY SYSTEM"<<endl;
	cout<<"========================================="<<endl;
	cout<<endl;
	cout<<"\t LOGIN to ACCOUNT"<<endl;
}

