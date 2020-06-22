#include<bits/stdc++.h>
#include<conio.h>
#include<iostream>
#include<Windows.h>

using namespace std;

int counter;

char Choice;

string Key;
string Dept_ID;
string Dept_Name;
string Dept_Manger;

string TDept_ID;
string TDept_Name;
string TDept_Manger;

string Emp_ID;
string Emp_Name;
string Emp_Position;

string TEmp_ID;
string TEmp_Name;
string TEmp_Position;

string index[100];

int chick_department(string Dept_ID)
{
	int chick = 0;


	string TempDept_ID;
	string TempDept_Name;
	string TempDept_Manger;

	fstream department("department.txt",ios::in);

	while(!department.eof())
	{
		 department>>TempDept_ID; department>>TempDept_Name; department>>TempDept_Manger;

		 if(Dept_ID == TempDept_ID) chick = 1;
	}

	department.close();

	return chick;
}

int chick_employee(string Emp_ID)
{
	int chick = 0;

	string TempEmp_ID;
	string TempDept_ID;
	string TempEmp_Name;
	string TempEmp_Position;

	fstream employee("employee.txt",ios::in);

	while(!employee.eof())
	{
		 employee>>TempEmp_ID; employee>>TempDept_ID; employee>>TempEmp_Name; employee>>TempEmp_Position;

		 if(Emp_ID == TempEmp_ID) chick = 1;
	}

	employee.close();

	return chick;
}

void sort_primary(string filename)
{

	string line;
	int size(0);
	int index[100];

	fstream DPI(filename,ios::in);
	DPI.seekg(0,ios::beg);

	while(getline(DPI,line))
	{
		size++;
	}

	DPI.clear();
	DPI.seekg(0,ios::beg);

	for(int i=0; i<size; i++)
	{
		DPI>>index[i];
	}
	for(int a = 0; a < size; a++)
	{
		for(int b=a+1; b<size; b++)
		{
			if(index[b]<index[a])
			{
				int tmp;
				tmp=index[a];
				index[a]=index[b];
				index[b]=tmp;
			}
		}
	}
	DPI.close();

	DPI.open(filename,ios::out | ios::trunc);

	for(int i=0;i<size;i++)
	{
		DPI<<index[i]<<endl;
	}

	DPI.close();
}

void sort_secondary(string filename)
{
	struct record
	{
		int primary_index;
		string secondary_index;
	} index[100];

	string line;
	int size(0);


	fstream DPI(filename,ios::in);
	DPI.seekg(0,ios::beg);

	while(getline(DPI,line))
	{
		size++;
	}

	DPI.clear();
	DPI.seekg(0,ios::beg);

	for(int i=0; i<size; i++)
	{
		DPI>>index[i].primary_index>>index[i].secondary_index;
	}

	for(int a = 0; a < size; a++)
	{
		for(int b=a+1; b<size; b++)
		{
			if( index[b].primary_index < index[a].primary_index )
			{
				int tmp1;
				string	tmp2;

				tmp1 = index[a].primary_index;
				tmp2 = index[a].secondary_index;

				index[a].primary_index = index[b].primary_index;
				index[a].secondary_index = index[b].secondary_index;

				index[b].primary_index = tmp1;
				index[b].secondary_index = tmp2;
			}
		}
	}

	DPI.close();

	DPI.open(filename,ios::out | ios::trunc);

	for(int i=0;i<size;i++)
	{
		DPI<<index[i].primary_index<<"	"<<index[i].secondary_index<<endl;
	}

	DPI.close();
}

void add_department()
{
	cout<<"WRITE DEPARTMENT ID : "; cin>>Dept_ID;

	cout<<"WRITE DEPARTMENT NAME : "; cin>>Dept_Name;

	cout<<"WRITE DEPARTMENT MANAGER  : "; cin>>Dept_Manger;

	if( chick_department(Dept_ID) == 0 )
	{
		fstream department;
		department.open("department.txt",ios::out | ios::app);
		department<<Dept_ID<<" "<<Dept_Name<<" "<<Dept_Manger<<"\n";
		department.close();


		fstream department_primary_index;
		department_primary_index.open("department_primary_index.txt",ios::out | ios::app);
		department_primary_index<<Dept_ID<<endl;
		department_primary_index.close();


		fstream department_secondary_index;
		department_secondary_index.open("department_secondary_index.txt",ios::out | ios::app);
		department_secondary_index<<Dept_ID<<"	"<<Dept_Name<<endl;
		department_secondary_index.close();


		cout<<"THIS DEPARTMENT IS SUCCESSFULLY ADDED";
		Sleep(500);
	}
	else
	{
		cout<<"THIS DEPARTMENT IS ALREADY EXIST, PRESS ANY KEY TO RETURN MAIN MENU !! ";
		getch();
	}
}

void add_employee()
{
	cout<<"WRITE EMPLOYEE ID : "; cin>>Emp_ID;

	cout<<"WRITE DEPARTMENT ID : "; cin>>Dept_ID;

	cout<<"WRITE EMPLOYEE NAME : "; cin>>Emp_Name;

	cout<<"WRITE EMPLOYEE POSITION  : "; cin>>Emp_Position;

	if( chick_department(Dept_ID) == 1 )
	{
		if( chick_employee(Emp_ID) == 0 )
		{
			fstream employee;
			employee.open("employee.txt",ios::out | ios::app);
			employee<<Emp_ID<<" "<<Dept_ID<<" "<<Emp_Name<<" "<<Emp_Position<<"\n";
			employee.close();

			fstream employee_primary_index;
			employee_primary_index.open("employee_primary_index.txt",ios::out | ios::app);
			employee_primary_index<<Emp_ID<<endl;
			employee_primary_index.close();

			fstream employee_secondary_index;
			employee_secondary_index.open("employee_secondary_index.txt",ios::out | ios::app);
			employee_secondary_index<<Emp_ID<<"	"<<Dept_ID<<endl;
			employee_secondary_index.close();

			cout<<"THIS EMPLOYEE IS SUCCESSFULLY ADDED";
			Sleep(500);
		}
		else
		{
			cout<<"THIS EMPLOYEE IS ALREADY BELONGS TO ANOTHER DEPARTMENT, PRESS ANY KEY TO RETURN MAIN MENU !! ";
			getch();
		}
	}
	else
	{
		cout<<"THIS DEPARTMENT IS NOT EXIST, PRESS ANY KEY TO RETURN MAIN MENU !! ";
		getch();
	}
}

void delete_department()
{
	cout<<"WRITE DEPARTMENT ID : "; cin>>Key;

	if( chick_department(Key) == 1 )
	{
		fstream department("department.txt",ios::in);

		fstream temp("temp.txt",ios::out | ios::trunc);

		while(!department.eof())
		{
			TDept_ID="";TDept_Name="";TDept_Manger="";

			department>>TDept_ID; department>>TDept_Name; department>>TDept_Manger;

			if(Key != TDept_ID && TDept_ID!= "")
			{
				temp<<TDept_ID<<"	"<<TDept_Name<<"  "<<TDept_Manger<<endl;
			}
		}

		temp.close();

		department.close();

		////////////////  ////////////////

		department.open("department.txt",ios::out | ios::trunc);

		temp.open("temp.txt",ios::in);

		while(!temp.eof())
		{
			TDept_ID="";TDept_Name="";TDept_Manger="";

			temp>>TDept_ID; temp>>TDept_Name; temp>>TDept_Manger;

			if(TDept_ID!= "")
			{
				department<<TDept_ID<<"	"<<TDept_Name<<"  "<<TDept_Manger<<endl;
			}
		}

		temp.close();

		department.close();

		////////////////  ////////////////

		fstream department_primary_index("department_primary_index.txt",ios::out | ios::trunc);
		fstream department_secondary_index("department_secondary_index.txt",ios::out | ios::trunc);

		temp.open("temp.txt",ios::in);


		while(!temp.eof())
		{
			Dept_ID="";Dept_Name="";Dept_Manger="";

			temp>>Dept_ID; temp>>Dept_Name; temp>>Dept_Manger;

			if(Dept_ID != "")
			{
				department_primary_index<<Dept_ID<<"	"<<endl;
				department_secondary_index<<Dept_ID<<"	"<<Dept_Name<<"	"<<endl;
			}
		}

		temp.close();
		department_primary_index.close();
		department_secondary_index.close();

		cout<<"THIS DEPARTMENT DELETED SUCCESSFULLY ";

		Sleep(1000);
	}
	else
	{
		cout<<"THIS DEPARTMENT NOT EXIST, PRESS ANY KEY TO RETURN MAIN MENU !! ";
		getch();
	}
}

void delete_employee()
{
	cout<<"WRITE EMPLOYEE ID : "; cin>>Key;

	if( chick_employee(Key) == 1 )
	{
		fstream employee("employee.txt",ios::in);

		fstream temp("temp.txt",ios::out | ios::trunc);

		while(!employee.eof())
		{
			TEmp_ID="";TDept_ID="";TEmp_Name="";TEmp_Position="";

			employee>>TEmp_ID; employee>>TDept_ID; employee>>TEmp_Name; employee>>TEmp_Position;

			if(Key != TEmp_ID && TEmp_ID!= "")
			{
				temp<<TEmp_ID<<"	"<<TDept_ID<<"	"<<TEmp_Name<<"  "<<TEmp_Position<<endl;
			}
		}

		temp.close();

		employee.close();

		////////////////  ////////////////

		employee.open("employee.txt",ios::out | ios::trunc);

		temp.open("temp.txt",ios::in);

		while(!temp.eof())
		{
			TEmp_ID="";TDept_ID="";TEmp_Name="";TEmp_Position="";

			temp>>TEmp_ID; temp>>TDept_ID; temp>>TEmp_Name; temp>>TEmp_Position;

			if(TEmp_ID!= "")
			{
				employee<<TEmp_ID<<" "<<TDept_ID<<" "<<TEmp_Name<<" "<<TEmp_Position<<endl;
			}
		}

		temp.close();

		employee.close();

		////////////////  ////////////////

		fstream employee_primary_index("employee_primary_index.txt",ios::out | ios::trunc);
		fstream employee_secondary_index("employee_secondary_index.txt",ios::out | ios::trunc);

		temp.open("temp.txt",ios::in);

		while(!temp.eof())
		{
			Emp_ID="";Dept_ID="";Emp_Name="";Emp_Position="";

			temp>>Emp_ID; temp>>Dept_ID; temp>>Emp_Name; temp>>Emp_Position;

			if(Emp_ID!= "")
			{
				employee_primary_index<<Emp_ID<<endl;
				employee_secondary_index<<Emp_ID<<"	"<<Dept_ID<<endl;
			}
		}

		temp.close();
		employee_primary_index.close();
		employee_secondary_index.close();

		cout<<"THIS EMPLOYEE DELETED SUCCESSFULLY ";

		Sleep(1000);
	}
	else
	{
		cout<<"THIS EMPLOYEE NOT EXIST, PRESS ANY KEY TO RETURN MAIN MENU !! ";
		getch();
	}
}

void print_employee_id()
{

	cout<<"WRITE EMPLOYEE ID : "; cin>>Key;

	if( chick_employee(Key) == 1 )
	{
		string TempEmp_ID;
		string TempDept_ID;
		string TempEmp_Name;
		string TempEmp_Position;

		fstream employee("employee.txt",ios::in);

		while(!employee.eof())
		{
			 TempEmp_ID="";TempDept_ID="";TempEmp_Name="";TempEmp_Position="";

			 employee>>TempEmp_ID; employee>>TempDept_ID; employee>>TempEmp_Name; employee>>TempEmp_Position;

			 if(Key == TempEmp_ID)
			 {
				  cout<<"----------------------------------------\n";
				  cout<<"EMPLOYEE ID		: "<<TempEmp_ID<<"\n";
				  cout<<"DEPARTMENT ID		: "<<TempDept_ID<<"\n";
				  cout<<"EMPLOYEE NAME		: "<<TempEmp_Name<<"\n";
				  cout<<"EMPLOYEE POSITION	: "<<TempEmp_Position<<"\n";
				  cout<<"----------------------------------------\n";
				  break;
			 }


		}

		employee.close();

		cout<<"PRESS ANY KEY TO RETURN MAIN MENU !! ";

		getch();
	}
	else
	{
		cout<<"THIS EMPLOYEE NOT EXIST, PRESS ANY KEY TO RETURN MAIN MENU !! ";
		getch();
	}
}

void print_employee_DeptID()
{
	cout<<"WRITE DEPARTMENT ID : "; cin>>Key;

	if( chick_department(Key) == 1 )
	{
		string TempEmp_ID;
		string TempDept_ID;
		string TempEmp_Name;
		string TempEmp_Position;

		fstream employee("employee.txt",ios::in);

		while(!employee.eof())
		{
			TempEmp_ID="";TempDept_ID="";TempEmp_Name="";TempEmp_Position="";

			 employee>>TempEmp_ID; employee>>TempDept_ID; employee>>TempEmp_Name; employee>>TempEmp_Position;

			 if(Key == TempDept_ID)
			 {
				  cout<<"----------------------------------------\n";
				  cout<<"EMPLOYEE ID		: "<<TempEmp_ID<<"\n";
				  cout<<"DEPARTMENT ID		: "<<TempDept_ID<<"\n";
				  cout<<"EMPLOYEE NAME		: "<<TempEmp_Name<<"\n";
				  cout<<"EMPLOYEE POSITION	: "<<TempEmp_Position<<"\n";
			 }
		}

		employee.close();

		cout<<"----------------------------------------\n";

		cout<<"PRESS ANY KEY TO RETURN MAIN MENU !! ";

		getch();
	}
	else
	{
		cout<<"THIS DEPARTMENT NOT EXIST, PRESS ANY KEY TO RETURN MAIN MENU !! ";
		getch();
	}
}

void print_department_id()
{
	cout<<"WRITE DEPARTMENT ID : "; cin>>Key;

	if( chick_department(Key) == 1 )
	{
		string TempDept_ID;
		string TempDept_Name;
		string TempDept_Manager;

		fstream department("department.txt",ios::in);

		while(!department.eof())
		{
			 TempDept_ID="";TempDept_Name="";TempDept_Manager="";

			 department>>TempDept_ID; department>>TempDept_Name; department>>TempDept_Manager;

			 if(Key == TempDept_ID)
			 {
				  cout<<"----------------------------------------\n";
				  cout<<"DEPARTMENT ID		: "<<TempDept_ID<<"\n";
				  cout<<"DEPARTMENT NAME		: "<<TempDept_Name<<"\n";
				  cout<<"DEPARTMENT MANAGER	: "<<TempDept_Manager<<"\n";
				  cout<<"----------------------------------------\n";
				  break;
			 }


		}

		department.close();

		cout<<"PRESS ANY KEY TO RETURN MAIN MENU !! ";

		getch();
	}
	else
	{
		cout<<"THIS DEPARTMENT NOT EXIST, PRESS ANY KEY TO RETURN MAIN MENU !! ";
		getch();
	}
}

void print_department_name()
{
	cout<<"WRITE DEPARTMENT NAME : "; cin>>Key;

	int count = 0;
	string TempDept_ID;
	string TempDept_Name;
	string TempDept_Manager;

	fstream department("department.txt",ios::in);

	while(!department.eof())
	{
			TempDept_ID="";TempDept_Name="";TempDept_Manager="";

			department>>TempDept_ID; department>>TempDept_Name; department>>TempDept_Manager;

			if(Key == TempDept_Name)
			{	  count++;
				cout<<"----------------------------------------\n";
				cout<<"DEPARTMENT ID		: "<<TempDept_ID<<"\n";
				cout<<"DEPARTMENT NAME		: "<<TempDept_Name<<"\n";
				cout<<"DEPARTMENT MANAGER	: "<<TempDept_Manager<<"\n";
				cout<<"----------------------------------------\n";
				break;
			}
	}

	department.close();



	if( count == 0 )
	{
		cout<<"THIS DEPARTMENT NOT EXIST, PRESS ANY KEY TO RETURN MAIN MENU !! ";
		getch();
	}
	else
	{
		cout<<"PRESS ANY KEY TO RETURN MAIN MENU !! ";

		getch();
	}
}

void minu()
{

	sort_primary("employee_primary_index.txt");
	sort_primary("department_primary_index.txt");

	sort_secondary("employee_secondary_index.txt");
	sort_secondary("department_secondary_index.txt");

	system("cls");

	cout<<"1. ADD NEW EMPLOYEE"<<endl;
	cout<<"2. ADD NEW DEPARTMENT"<<endl;
	cout<<"3. DELETE EMPLOYEE"<<endl;
	cout<<"4. DELETE DEPARTMENT "<<endl;
	cout<<"5. PRINT EMPLOYEE(ID)"<<endl;
	cout<<"6. PRINT EMPLOYEE(DEPT_ID) "<<endl;
	cout<<"7. PRINT DEPARTMENT(ID) "<<endl;
	cout<<"8. PRINT DEPARTMENT(NAME) "<<endl;
	///cout<<"9. WRITE A QUERY "<<endl;
	cout<<"E. EXIT"<<endl;

	Choice = getch();


	if(Choice=='1'||Choice=='2'||Choice=='3'||Choice=='4'||Choice=='5'||Choice=='6'||Choice=='7'||Choice=='8'||Choice=='E')
	{
		switch(Choice)
		{
			case'1':system("cls");

			add_employee();

			Sleep(1000); minu(); break;

			case'2':system("cls");

			add_department();

			Sleep(1000); minu(); break;

			case'3':system("cls");

			delete_employee();

			Sleep(1000); minu(); break;

			case'4':system("cls");

			delete_department();

			Sleep(1000); minu(); break;


			case'5':system("cls");

			print_employee_id();

			minu(); break;

			case'6':system("cls");

			print_employee_DeptID();

			minu(); break;

			case'7':system("cls");

			print_department_id();

			minu(); break;

			case'8':system("cls");

			print_department_name();

			minu(); break;

			case'E':Sleep(50);  exit(0);
		}
	}

	minu();
}





int main()
{
	minu();
}
