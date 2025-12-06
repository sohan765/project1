#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Bill                                                 // ------- Structure Defination -------- //
{
    string proId;
    double proamount;
    int proQuantity;
};

vector<Bill> Calcu;                                        //---- Globaly Vector Declaration of Structure Type ----- // 

class Mall
{
public:
    Mall()                                                  // ------Default Constructor------ //
    {   cout<<endl; 
        cout << "-------------------- Welcome in Brothers Mall --------------------" << endl
             << endl;
    }
};

class Shop                                                 //------------Base Class of inherited classes --------------- //
{   
    private:
        string id;                                        // ------------ Private Atributes of Shop class ----------//
        double amount;
        int qua;
    public:
        Shop(){
                 } 
    friend class Grocery;                                // ----------- Use of friend class for accesing private data ------------ //
    friend class Food;
    friend class Sweets;
    friend class  Toy;
    friend class Statinery;
    friend class Electronic;
};

class Amount{                                             // ------------ This class is use for push the data in the vector --------- //
    public:
       Amount(string id,double pric,int quan){           // ------------ this is parameterized constructor  ------------------------//
        Calcu.push_back({id , pric , quan});
       }

};


class Cart:public Shop{                     //--------------- This class is use for Display buying Item and Calculate the total Amount ----- //
    public:                                 // ------- the Cart class is derived class of shop and shop class is base class of the Cart-----//
       void display() 
    {   cout<<""<<endl;
        cout<<"   Item ID    "<<"     Item Quantity     "<<"     Item Price                "<<endl;
        for (Bill b : Calcu)             
       {
        cout<<"   "<<b.proId ;
        cout<<"                  " <<b.proQuantity ;
        cout <<"                   "  << b.proamount <<"                    "<<endl;
       }
       cout<<endl;
       cout<<""<<endl;
    }

    void totalAmount()
    {
        int total = 0;
        for (Bill b : Calcu)
        {
            total = total + (b.proamount * b.proQuantity); // ----- calculate total amount --------//
        }
        cout << "Your total amount is :-> " << total << endl;
    }  
};

class Grocery : public Shop  // ----- it in  Shop class is inheritante into Grocery class ----//
{   public:
    int ch;
    string a;
    Grocery(){
    cout << "------------------------ Grocery Store -------------------------" << endl;
    cout << "   The Available Products are  " << endl;
    cout << "    ITEMS      " << "       ID     " << "    PRICE    " << endl;
    cout << "    Rice     " << "         RI_1  " << "     60/kg   " << endl;
    cout << "    Oils     " << "         OI_1    " << "   110/L    " << endl;
    cout << "    Ghee     " << "         GH_1 " << "      600/L   " << endl;
    cout << "    Milk     " << "         MK_1 " << "      54/L    " << endl;
    cout << "    Suger      " << "       SG_1 " << "      48/kg    " << endl;
    cout << "    Masala Kit    " << "    MS_1    " << "   220     " << endl;
    cout << "    Dale   " << "           DL_1" << "       160/kg     " << endl;
    cout << "    Sauce     " << "        SOS_1 " << "     20    " << endl;
    cout << "    Wheat Flour    " << "   WH_1  " << "     39/kg    " << endl<<endl;
    cout<<"               Instruction             "<<endl;
    cout << "  If you Add to Cart , please Enter some Information" << endl;
    do{ 
    cout<<"  Enter the Id of product :- ";
    cin>>id;
    cout<<"  Enter the Price of product :- ";
    cin>>amount;
    cout<<"  Enter the Quantity of product :- ";
    cin>>qua;
        Amount a1(id,amount,qua);                                                 // Amount class is derived class of Shop.
        cout << "For have Something more please enter 1, othrwise Enter 0 for exit :- ";
        cin >> ch;
        // Calcu.push_back({id, amount, qua});                                    //  we can also use for add the information in the vector
    } while (ch == 1);

}
};

class Food:public Shop
{   public:
    int ch;
    string a;
    Food(){
    cout << "------------------------ Food Store -------------------------" << endl;
    cout << "   The Available Products are  " << endl;
    cout << "    DISH      " << "       ID     " << "    PRICE    " << endl;
    cout << "   Pizza      " << "       PZ_2  " << "     149   " << endl;
    cout << "   Burger      " << "      BG_2     " << "  50    " << endl;
    cout << "   SanWich     " << "      SW_2   " << "    30   " << endl;
    cout << "   Samosa     " << "       SS_2 " << "      20    " << endl;
    cout << "   Vada Pav      " << "    VP_2    " << "   25    " << endl;
    cout << "   Chaumin     " << "      CM_2     " << "  40    " << endl;
    cout << "   Dosa      " << "        DS_2 " << "      59    " << endl;
    cout << "   Idli      " << "        ID_2 " << "      55    " << endl;
    cout << "   Dhokla      " << "      DK_2  " << "     40    " << endl<<endl;
    cout<<"               Instruction             "<<endl;
    cout << "  If you Add to Cart, please Enter some Information" << endl;
    do{ 
    cout<<"  Enter the Id of product :- ";
    cin>>id;
    cout<<"  Enter the Price of product :- ";
    cin>>amount;
    cout<<"  Enter the Quantity of product :- ";
    cin>>qua;
        Amount a1(id,amount,qua);
        cout << "For have Something more please enter 1,otherwise Enter 0 for exit :-  ";
        cin >> ch;
    } while (ch == 1);

}
};

class Sweets:public Shop
{ public:
    int ch;
    string a;
    Sweets(){
    cout << "------------------------ Bakery Shop -------------------------" << endl;
    cout << "   The Available Products are  " << endl;
    cout << "    ITEM     " << "       ID     " << "    PRICE    " << endl;
    cout << "    Cake     " << "       CK_3  " << "     300   " << endl;
    cout << "    Chocolate    " << "   CH_3     " << "  150    " << endl;
    cout << "    Toast     " << "      TO_3   " << "    45   " << endl;
    cout << "    Wafers    " << "      WF_3 " << "      20   " << endl;
    cout << "    Cookies     " << "    CO_3    " << "   130   " << endl;
    cout << "    Cold-Drink     " << " CD_3     " << "  90/L     " << endl;
    cout << "    Ice-cream     " << "  IC_3 " << "      60   " << endl;
    cout << "    Mix Dry Fruit  " << " DF_3  " << "     550    " << endl;
    cout << "    Farsan      " << "    FS_3 " << "      160    " << endl<<endl;
    cout<<"               Instruction             "<<endl;
    cout << "  If you Add to Cart , please Enter some Information" <<endl;
    do{ 
     cout<<"  Enter the Id of product :- ";
     cin>>id;
    cout<<"  Enter the Price of product :- ";
    cin>>amount;
    cout<<"  Enter the Quantity of product :- ";
    cin>>qua;
        Amount a1(id,amount,qua);                                                    
        cout << "For have Something more please enter 1, otherwise Enter 0 for exit :-  ";
        cin >> ch;

    } while (ch == 1);
}
};

class Toy: public Shop
{  public:
    int ch;
    string a;
        Toy (){
        cout << "------------------------ Toy Store -------------------------" << endl;
        cout << "There Available iteams is " << endl;
        cout << "       Item       " << "     ID     " << "      Price      " << endl;
        cout << "   Barbie Doll   " << "      BD_4  " << "        1700        " << endl;
        cout << "   Teddy Bear    " << "      TD_4  " << "        1800        " << endl;
        cout << "   Rocking Horse   " << "    RH_4  " << "        1200        " << endl;
        cout << "   Toy Car        " << "     TC_4  " << "        300        " << endl;
        cout << "   Kitchen Kit       " << "  KK_4  " << "        750       " << endl;
        cout << "   Magic-Kit   " << "        MK_4   " << "       600        " << endl;
        cout << "   Army Men    " << "        AM_4  " << "        150       " << endl;
        cout << "   Sock Monkey   " << "      SM_4  " << "        350       " << endl;
        cout << "   Rubik's Cube    " << "    RC_4  " << "        110        " << endl;
        cout << "   UNO      " << "           UN_4  " << "        70       " <<endl<< endl;
        cout<<"               Instruction             "<<endl;
        cout << "  If you Add to Cart , please Enter some information" << endl;
        do{ 
        cout<<"  Enter the Id of product :- ";
        cin>>id;
        cout<<"  Enter the Price of product :- ";
        cin>>amount;
        cout<<"  Enter the Quantity of product :- ";
        cin>>qua;
        Amount a1(id,amount,qua); 
        cout << " For have Something more please enter 1 ,otherwise Enter 0 for exit :- ";
        cin >> ch;
    } while (ch == 1);
}
};


class Statinery:public Shop
{  public:
    int ch;
    string a;
    Statinery(){
    cout << "------------------------ Statinory Store -------------------------" << endl;
    cout << "   The Available Products are  " << endl;
    cout << "   ITEM      " << "       ID     " << "    PRICE PER PIECE    " << endl;
    cout << "   Pen/Pencil" << "       PP_5 " << "     10/5               " << endl;
    cout << "   Alarm      " << "      AL_5     " << "  150                 " << endl;
    cout << "   Marker     " << "      MA_5   " << "    30                " << endl;
    cout << "   Notebooks    " << "    NO_5 " << "      70                " << endl;
    cout << "   Lamp      " << "       PA_5    " << "   220                " << endl;
    cout << "   Sticky Notes   " << "  SN_5     " << "  50                " << endl;
    cout << "   Fevi Sticks    " << "  FS_5 " << "      25                " << endl;
    cout << "   Calculator      " << " CA_5 " << "      350               " << endl;
    cout << "   Study Table   " << "   ST_5  " << "     450                 " <<endl<< endl;
    cout<<"               Instruction             "<<endl;
    cout << "  If Add to Cart , please Enter some Information" << endl;
    do{ 
    cout<<"  Enter the Id of product :- ";
    cin>>id;
    cout<<"  Enter the Price of product :- ";
    cin>>amount;
    cout<<"  Enter the Quantity of product :- ";
    cin>>qua;
        Amount a1(id,amount,qua);
        cout << "For have Something more please enter 1 otherwise Enter 0 for exit :-  ";
        cin >> ch;
    } while (ch == 1);
}
};

class Electronic:public Shop
{  public:
    int ch;
    string a;
    Electronic(){
    cout << "------------------------ Electronic Devices Store -------------------------" << endl;
    cout << "   The Available Products are  " << endl;
    cout << "    ITEM      " << "       ID     " << "    PRICE    " << endl;
    cout << "   Bulb      " << "       BU_6 " << "     149   " << endl;
    cout << "   Fridge     " << "      FR_6     " << "  15000    " << endl;
    cout << "   Fan       " << "       FA_6   " << "    2000   " << endl;
    cout << "   Clock     " << "       CL_6 " << "      500    " << endl;
    cout << "   Cooler      " << "     CO_6    " << "   8000    " << endl;
    cout << "   AC        " << "       AC_6     " << "  25000    " << endl;
    cout << "   Speakers    " << "     SP_6 " << "      15500    " << endl;
    cout << "   Laptop     " << "      LA_6 " << "      35000    " << endl;
    cout << "   TV        " << "       TV_6  " << "     28000    " << endl<<endl;
    cout<<"               Instruction             "<<endl;
    cout << " If you Add to Cart , please Enter some Information" << endl;
    do{ 
    cout<<"  Enter the Id of product :- ";
    cin>>id;
    cout<<"  Enter the Price of product :- ";
    cin>>amount;
    cout<<"  Enter the Quantity of product :- ";
    cin>>qua;
        Amount a1(id,amount,qua);
        cout << "For have Something more please enter 1, otherwise Enter 0 for exit :-  ";
        cin >> ch;
    } while (ch == 1);
}
};

int choice()
{
    Shop s1;                                  // Create a Shop class object, For acces the its derived classes.
    int choice;
    string b;
    do
    {
        cout << "  There are Following Shops are Available " << endl;
        cout << "1 For Grocery Store \n2 For Food Shop \n3 For Bakery Shop\n4 For Toy Shop \n5 For Statinory Store \n6 For Electronics Devices" << endl;
        cout<<" Please Enter the Choice :- ";
        cin >> choice;
        switch (choice)
        {
        case 1: { Grocery gr;
                   break;}
        case 2:
             {Food fo;
            break;}
        case 3:
            {Sweets sw;
            break;}
        
        case 4:
            {Toy ty;
            break;}
        case 5:
             {Statinery st;
            break;}
        case 6:
            { Electronic el;
            break;}
        default:
            cout << "Invalid Choice Please try again " << endl;
        }
        cout<<endl;
        cout<<"Enter yes for see another shops ,otherwise Enter no :- ";
        cin>>b;
    } while(b == "yes" );
    return 0;
}

int main()
{
    Mall m1;                                     // Create a Object
    choice();
    Cart c1;
    c1.display();
    c1.totalAmount();
    cout<<endl;
    cout<<" # Thank You . Visit Again #"<<endl<<endl;
}