#include<bits/stdc++.h>

using namespace std;
class Box {
    private:
    int l, b, h;
    public:
    Box() {
        this->l = 0;
        this->b = 0;
        this->h = 0;
    }
    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    Box(Box& b) {
        this->l = b.l;
        this->b = b.b;
        this->h = b.h;
    }
    int getLength() {
        return this->l;
    }
    int getBreadth() {
        return this->b;
    }
    int getHeight() {
        return this->h;
    }
    long long CalculateVolume() {
        return (long long)this->l * this->b * this->h;
    }
    bool operator<(Box& b) {
        if (this->l < b.l) {
            return true;
        } else if (this->b < b.b && this->l == b.l) {
            return true;
        } else if (this->h < b.h && this->l < b.l && this->b < b.b) {
            return true;
        } else {
            return false;
        }
        return false;
    }
    
};
    
ostream& operator<<(ostream& out, Box& B) {
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}