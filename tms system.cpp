#include<iostream> //Preprocessor Directive
using namespace std; //Which namespace to use
string data1[20],data2[20],data3[20],data4[20],data5[20];
int total=0;
void enter() //1 MURUGAN
{
		int num=0;
			cout<<"How many students do u want to enter??"<<endl;
			cin>>num;
			if(total==0)
			{
			total=num+total;
			for(int i=0;i<num;i++)
			{
				cout<<"\nEnter the data of student "<<i+1<<endl<<endl;
				cout<<"Enter name ";
				cin>>data1[i];
				cout<<"Enter Roll no ";
				cin>>data2[i];
				cout<<"Enter course ";
				cin>>data3[i];
				cout<<"Enter class ";
				cin>>data4[i];
				cout<<"Enter contact ";
				cin>>data5[i];
			}
	    	}
	    	else
	    	{
	    		for(int i=total;i<num+total;i++)
			{
				cout<<"\nEnter the data of student "<<i+1<<endl<<endl;
cout<<"Enter name ";
				cin>>data1[i];
				cout<<"Enter Roll no ";
				cin>>data2[i];
				cout<<"Enter course ";
				cin>>data3[i];
				cout<<"Enter class ";
				cin>>data4[i];
				cout<<"Enter contact ";
				cin>>data5[i];
			}
			total=num+total;
			}
}
void show() //2
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		for(int i=0;i<total;i++)
	    		{
	    		cout<<"\ndata of Student "<<i+1<<endl<<endl;
	    		cout<<"Name "<<data1[i]<<endl;
	    		cout<<"Roll no "<<data2[i]<<endl;
	    		cout<<"Course "<<data3[i]<<endl;
cout<<"Class "<<data4[i]<<endl;
	    		cout<<"Contact "<<data5[i]<<endl;
	    	    }
	    	}
}
void search() //3
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
	string rollno;
				cout<<"Enter the roll no of student"<<endl;
				cin>>rollno;
				for(int i=0;i<total;i++)
				{
					if(rollno==data2[i])
					{
						cout<<"Name "<<data1[i]<<endl;
	    	        	cout<<"Roll no "<<data2[i]<<endl;
	    		        cout<<"Course "<<data3[i]<<endl;
	    		        cout<<"Class "<<data4[i]<<endl;
cout<<"Contact "<<data5[i]<<endl;
					}
				}
			}
}
void update() //4
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		string rollno;
				cout<<"Enter the roll no of student which you want to update"<<endl;
				cin>>rollno;
					for(int i=0;i<total;i++)
				{
					if(rollno==data2[i])
					{
						cout<<"\nPrevious data"<<endl<<endl;
						cout<<"data of Student "<<i+1<<endl;
						cout<<"Name "<<data1[i]<<endl;
cout<<"Roll no "<<data2[i]<<endl;
	    		        cout<<"Course "<<data3[i]<<endl;
	    		        cout<<"Class "<<data4[i]<<endl;
	    	        	cout<<"Contact "<<data5[i]<<endl;
	    	        	cout<<"\nEnter new data"<<endl<<endl;
							cout<<"Enter name ";
				            cin>>data1[i];
				            cout<<"Enter Roll no ";
				            cin>>data2[i];
			             	cout<<"Enter course ";
				            cin>>data3[i];
				            cout<<"Enter class ";
				            cin>>data4[i];
				            cout<<"Enter contact ";
				            cin>>data5[i];
					}
				}
			}
		}
void deleterecord() //5
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
		int a;
	        	cout<<"Press 1 to delete all record"<<endl;
				cout<<"Press 2 to delete specific record"<<endl;
				cin>>a;
				if(a==1)
				{
					total=0;
					cout<<"All record is deleted..!!"<<endl;
				}
				else if(a==2)
				{
				string rollno;
				cout<<"Enter the roll no of student which you wanted to delete"<<endl;
				cin>>rollno;
				for(int i=0;i<total;i++)
				{
					if(rollno==data2[i])
					{
						for(int j=i;j<total;j++)
						{
						data1[j]=data1[j+1];
						data2[j]=data2[j+1];
					    data3[j]=data3[j+1];

	data4[j]=data4[j+1];
						data5[j]=data5[j+1];
				     	}
					total--;
					cout<<"Your required record is deleted"<<endl;
					}
				}
				}
			else
			{
				cout<<"Invalid input";
			}
}
}
main() //6
{
	int value;
	while(true)
	{
	    cout << "\n                                        Hello! Welcome to TMS Mahsa University!  (^_^)"<< endl;
	    cout << "\n                                                  $$$ ~...BE MORE...~  $$$" << endl;
	    cout << "\n                                        Please choose your desired entry to continue." << endl;
	cout<<"\nPress 1 to enter data"<<endl;
	cout<<"Press 2 to show data"<<endl;
	cout<<"Press 3 to search data"<<endl;
	cout<<"Press 4 to update data"<<endl;
	cout<<"Press 5 to delete data"<<endl;
	cout<<"Press 6 to exit"<<endl;
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
