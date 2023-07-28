#include<iostream>
using namespace std;
string arr1[50],arr2[50],arr3[50],arr4[50];
int total=0;
void enter()
{
	system("color ec");
		int ch=0;
			cout<<"\t\t\t\t\t * How many employ YOU want to enter?"<<endl;
			cin>>ch;
			system("cls");
			if(total==0)
			{
			total=ch+total;
			for(int i=0;i<ch;i++)
			{
				cout<<"\n\t\t\t\t\tEnter the Data of employ "<<i+1<<endl<<endl;
				cout<<"\t\t\t\t\tEnter name employ ";
				cin>>arr1[i];
				cout<<"\t\t\t\t\tEnter ID no employ ";
				cin>>arr2[i];
				cout<<"\t\t\t\t\tEnter department employ ";
				cin>>arr3[i];
				cout<<"\t\t\t\t\tEnter salery ";
				cin>>arr4[i];
				
			}
	    	}
	    	else
	    	{
	    		
	    		for(int i=total;i<ch+total;i++)
			{
				cout<<"\nEnter the Data of employ "<<i+1<<endl<<endl;
				cout<<"Enter name employ ";
				cin>>arr1[i];
				cout<<"Enter ID no employ ";
				cin>>arr2[i];
				cout<<"Enter department employ ";
				cin>>arr3[i];
				cout<<"Enter salery ";
				cin>>arr4[i];
			}
			total=ch+total;
			}
	
}
void show()
{
	system("color 1f");
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
		system("cls");
	}
	else{
		for(int i=0;i<total;i++)
	    		{
	    		cout<<"\t\t\t\t\t | &&&&&&&&&&&&&&&& "<<endl;
	    		cout<<"\t\t\t\t\t | Data of employ "<<i+1<<endl;
	    		cout<<"\t\t\t\t\t | Name "<<arr1[i]<<endl;
	    		cout<<"\t\t\t\t\t | ID no "<<arr2[i]<<endl;
	    		cout<<"\t\t\t\t\t | department "<<arr3[i]<<endl;
	    		cout<<"\t\t\t\t\t | salery "<<arr4[i]<<endl;
	    		cout<<"\t\t\t\t\t | &&&&&&&&&&&&&&&& "<<endl<<endl;
	    	    }
	    	}
}
void search()
{
		system("color 6f");
	if(total==0)
	{
		
		cout<<"No data is entered"<<endl;
		system("cls");
	}
	else{
	string name;
				cout<<"\t\t\t\t\tEnter the name of employ  : ";
				cin>>name;
				for(int i=0;i<total;i++)
				{
					if(name==arr1[i])
					{
						cout<<"\n\t\t\t\t\t$$$$$$$$$$$$$$$ "<<endl;
						cout<<"\t\t\t\t\tName "<<arr1[i]<<endl;
	    	        	cout<<"\t\t\t\t\tID no "<<arr2[i]<<endl;
	    		        cout<<"\t\t\t\t\tdepartmentr "<<arr3[i]<<endl;
	    	        	cout<<"\t\t\t\t\tsaleery "<<arr4[i]<<endl;
	    	        	cout<<"\t\t\t\t\t$$$$$$$$$$$$$$$ "<<endl;
					}
				}
			}
}
void update()
{
	system("color 5f");
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
		system("cls");
	}
	else{
		string name;
				cout<<"Enter the name of employ which you want to update  : ";
				cin>>name;
					for(int i=0;i<total;i++)
				{
					if(name==arr1[i])
					{
						
					cout<<"\n\t\t\t\tPrevious data"<<endl<<endl;
					cout<<"\t\t\t\t****************"<<endl<<endl;
					cout<<"\t\t\t\trecord of employ "<<i+1<<endl;
					cout<<"\t\t\t\tName "<<arr1[i]<<endl;
	    	        cout<<"\t\t\t\tID no "<<arr2[i]<<endl;
	    		    cout<<"\t\t\t\tdepartment "<<arr3[i]<<endl;
	    	        cout<<"\t\t\t\tsalery "<<arr4[i]<<endl;
	    	        cout<<"\n\t\t\t\tEnter new data"<<endl;
	    	        	 cout<<"\t\t\t\t****************"<<endl<<endl;
							cout<<"\t\t\t\tEnter name of employ ";
				            cin>>arr1[i];
				            cout<<"\t\t\t\tEnter ID no of employ ";
				            cin>>arr2[i];
			             	cout<<"\t\t\t\tEnter department ";
				            cin>>arr3[i];
				            cout<<"\t\t\t\t0Enter salery ";
				            cin>>arr4[i];
					}
				}
			}
		}

void deleterecord()
{
	system("color 4f");
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
		system("cls");
	}
	else{
		int a;
	        	cout<<"\t\t\t\t\tPress 1 to delete full data"<<endl;
				cout<<"\t\t\t\t\tPress 2 to delete particuler  data"<<endl;
				cin>>a;
				if(a==1)
				{
					total=0;
					cout<<"\t\t\t\t\t*********************"<<endl;
					cout<<"\t\t\t\t\tAll RECORED IS DELETED..!!"<<endl;
					cout<<"\t\t\t\t\t*********************"<<endl;
				}
				else if(a==2)
				{
				string name;
				cout<<"Enter the name of employ  which you wanted to delete   ";
				cin>>name;
				for(int i=0;i<total;i++)
				{
					if(name==arr1[i])
					{
						for(int j=i;j<total;j++)
						{
						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
					    arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
				     	}
					total--;
					cout<<"\t\t\t\t\t*******************************"<<endl;
					cout<<"\t\t\t\t\tYour required record is deleted"<<endl;
					cout<<"\t\t\t\t\t*******************************"<<endl;
					}
				}
				}
				 
			
			else 
			{
				cout<<"Invalid input";
			}
}
}
main()
{
	int value;
	while(true)
	{ 
	cout<<"\t\t\t\t\t                   **                  "     <<endl;
	cout<<"\t\t\t\t\t                   ||"                       <<endl;
	cout<<"\t\t\t\t\t                  ||||"                      <<endl;
	cout<<"\t\t\t\t\t                 ||||||"                     <<endl;
	cout<<"\t\t\t\t\t                (((())))"                    <<endl;
	cout<<"\t\t\t\t\t            (((((((())))))))"                <<endl;
	cout<<"\t\t\t\t\t        (((((((((((())))))))))))"            <<endl;
	cout<<"\t\t\t\t\t    (((((((((((((((())))))))))))))))"        <<endl;	
	cout<<"\t\t\t\t\t(((((((((((((((((((())))))))))))))))))))"    <<endl<<endl;	
		
	cout<<"\t\t\t\t\t WELLCOME TO AMAZ WAJID USMAN LTD.GOV.PK"<<endl<<endl;	
	
	cout<<"\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl<<endl;
	cout<<"\t\t\t\t\t\t************************"<<endl;
	cout<<"\t\t\t\t\t\tPress 1 to enter data"<<endl;
	cout<<"\t\t\t\t\t\tPress 2 to show record"<<endl;
	cout<<"\t\t\t\t\t\tPress 3 to search record"<<endl;
	cout<<"\t\t\t\t\t\tPress 4 to update record"<<endl;
	cout<<"\t\t\t\t\t\tPress 5 to delete record"<<endl;
	cout<<"\t\t\t\t\t\tPress 6 to exit"<<endl;
	cout<<"\t\t\t\t\t\t************************"<<endl;
	cin>>value;
	switch(value)
	{
		case 1:
			enter();
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			deleterecord();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"Invalid input"<<endl;
			break;
	}
}
}

