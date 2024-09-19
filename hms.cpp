#include <iostream>
#include<vector>
using namespace std;

struct hosp{
	string nme,add,blood;
	int age,contact;
}; hosp hspt1;
vector<hosp>vh;
int main(){
	int val;
	while(true){
	cout<<"1. Admit patient"<<endl;
	cout<<"2. All patient"<<endl;
	cout<<"3. Dismiss patient"<<endl;
	cout<<"4. Exit"<<endl;
	
	cin>>val;
	switch(val){
		case 1:{system("cls");
			int choice;
			do{
				cout<<"Name:- ";cin>>hspt1.nme;
				cout<<"Age:- ";cin>>hspt1.age;
				cout<<"Address:- ";cin>>hspt1.add;
				cout<<"Blood group:- ";cin>>hspt1.blood;
				cout<<"Contact:- ";cin>>hspt1.contact;
				vh.push_back(hspt1);
				for(int i=0;i<vh.size();i++){
					system("cls");
					cout<<""<<i+1<<" Patient Admitted"<<endl;
				}
				cout<<endl;
				cout<<" 1(continue) or 0(exit) : ";cin>>choice;
				cout<<endl;
				
			}
			while(choice!=0 && choice==1);
			break;
		}
		case 2:{system("cls");
			for(int i=0;i<vh.size();i++){
				cout<<"Name: "<<vh[i].nme<<endl;
				cout<<"Age: "<<vh[i].age<<endl;
				cout<<"Contact: "<<vh[i].contact<<endl;
				cout<<"Blood Group: "<<vh[i].blood<<endl;
				cout<<"Address: "<<vh[i].add<<endl<<endl;
			}
			break;
		}
		case 3:{system("cls");
			string n;
			cout<<"Enter name for dismiss: ";cin>>n;
				for(int i=0;i<vh.size();i++){
					if(n==vh[i].nme){
						cout<<endl;
						cout<<"Details of patient dismissed"<<endl;
				cout<<i+1<<". Name: "<<vh[i].nme<<endl;
				cout<<"Age: "<<vh[i].age<<endl;
				cout<<"Contact: "<<vh[i].contact<<endl;
				cout<<"Blood Group: "<<vh[i].blood<<endl;
				cout<<"Address: "<<vh[i].add<<endl<<endl;
				vh.erase(vh.begin()+i);
			}
		}
			cout<<"Patient Dismissed"<<endl;
			cout<<"No. of Patients Admitted: "<<vh.size()<<endl<<endl;
		
			break;
		}
		case 4:{
			exit(0);
			break;
		}
	default:{system("cls");
		cout<<"Invalid Data"<<endl;
		
		break;
	}	
	}
	}
}

