//***************************************************************
// HEADER FILE USED IN PROJECT
//****************************************************************

#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>

//***************************************************************
    // CLASS USED IN PROJECT
    //****************************************************************

    class product
    {
        int pno;
        char name[50];
        float price, qty, tax, dis;
	 public:
            void create_product()
            {
                cout << "\nPlease Enter The Product No. of The Product ";
                cin >> pno;
                cout << "\n\nPlease Enter The Name of The Product ";
                gets(name);
                cout << "\nPlease Enter The Price of The Product ";
                cin >> price;
                cout << "\nPlease Enter The Discount (%) ";
                cin >> dis;
            }
	    void show_product()
        {
            cout << "\nThe Product No. of The Product : " << pno;
            cout << "\nThe Name of The Product : ";
            puts(name);
            cout << "\nThe Price of The Product : " << price;
            cout << "\nDiscount : " << dis;
        }
	    int retpno()
        {
            return pno;
        }

        float retprice()
        {
            return price;
        }

        char * retname()
        {
            return name;
        }
	int retdis()
        {
            return dis;
        }

    }; //class ends here
//***************************************************************
// global declaration for stream object, object
//****************************************************************

fstream fp;
product pr;

//***************************************************************
// function to write in file
//****************************************************************

void write_product()
{
    fp.open("Shop.dat", ios::out | ios::app);
    pr.create_product();
    fp.write((char * ) & pr, sizeof(product));
    fp.close();
    cout << "\n\nThe Product Has Been Created ";
    getch();
}
//***************************************************************
// function to read all records from file
//****************************************************************
void display_all()
{
    clrscr();
    cout << "\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
    fp.open("Shop.dat", ios:: in );
    while (fp.read((char * ) & pr, sizeof(product)))
    {
        pr.show_product();
        cout << "\n\n====================================\n";
        getch();
    }
    fp.close();
    getch();
}
