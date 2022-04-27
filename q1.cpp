#include<iostream>
using  namespace std;
class Publication
{
	protected:
	string Title;
	float price;
public:
	void getdata()
	{
		cout<<"Enter the title of the music"<<endl;
		cin>>Title;
		cout<<"Enter the price of the track"<<endl;
		cin>>price;
	}
		void display()
		{
			cout<<"Title : "<<Title<<endl;
			cout<<"Price : "<<price;
		}
	
};
class Book : public Publication
{
	int pagecount;
    public:
	void getdata()
	{
		Publication::getdata();
		cout<<"enter the pagrcount"<<endl;
		cin>>pagecount;
	}
    void display()
		{
			Publication::display();
			cout<<"pagecount : "<<pagecount;
		}
	

};
class Tape: public Publication
{
	float playingtime;
  public:
  	void getdata()
  	{
		  Publication::getdata();
  		cout<<"Enter the playing time "<<endl;
  		cin>>playingtime;
  	}
  	void display()
  	{
		  Publication::display();
  		cout<<"playing time : "<<playingtime;
  	}
};
int main()
{
	Publication p1;
	Tape t1;
	Book b1;
	b1.getdata();
	b1.display();
	t1.getdata();
	t1.display();
}