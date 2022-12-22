#include <iostream>
using namespace std;

int main()
{
    int choice;
    int quantity;
    int qrooms=0; //store the quantity of rooms
    int qpasta=0; //store the quantity of pasta
    int qburger=0,qnoodles=0,qchicken=0,qfish=0,qcoffee=0;
   

    int soldrooms=0,soldcoffee=0, soldpasta=0,soldburger=0,soldnoodles=0,soldchicken=0,soldfish=0; //stores the number of rooms, pasta, burger, noodles, chicken,fish sold

    int totalprice_room=0,totalprice_coffee=0, totalprice_pasta=0,totalprice_burger=0,totalprice_noodles=0,totalprice_chicken,totalprice_fish; 

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>qrooms; 
    cout<<"\n Quantity of pasta:";
    cin>>qpasta;
    cout<<"\n Quantity of burger:";
    cin>>qburger;
    cout<<"\n Quantity of noodles:";
    cin>>qnoodles;
    cout<<"\n Quantity of chicken-roll:";
    cin>>qchicken;
    cout<<"\n Quantity of fried-fish:";
    cin>>qfish;
    cout<<"\n Quantity of coffee:";
    cin>>qcoffee;

   m:
    cout<<"\n \t \t \t Please select from the given menu option";
    cout<<"\n\n 1. Rooms";
    cout<<"\n 2. Pasta";
    cout<<"\n 3. Burger";
    cout<<"\n 4. Noodles";
    cout<<"\n 5. chicken";
    cout<<"\n 6. Fish";
    cout<<"\n 7. Coffee";
    cout<<"\n 8. Information regarding sales and collection.";
    cout<<"\n 9. Exit";

    
    cout<<"\nPlease enter your choice";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\nEnter the number of rooms you want";
            cin>>quantity;
            if(qrooms-soldrooms>=quantity)
            {
              soldrooms= soldrooms+quantity;
              totalprice_room= totalprice_room+quantity*1200;
              cout<<"\n\n\t\t "<<quantity<<" rooms have been alooted to you";

            }
            else
                cout<<"\n\t Only "<<qrooms-soldrooms<<" Rooms remaining in hotel.";
                break;
                
            

        case 2:
            cout<<"\n\nEnter the quantity of pasta:";
            cin>>quantity;
            if(qpasta-soldpasta>=quantity)
            {
              soldpasta= soldpasta+quantity;
              totalprice_pasta= totalprice_pasta+quantity*250;
              cout<<"\n\n\t\t "<<quantity<<" pasta is the order!";

            }
            else
                cout<<"\n\t Only "<<qpasta-soldpasta<<" Pasta remaining in hotel.";
                break;


        case 3:
            cout<<"\n\nEnter the quantity of burger:";
            cin>>quantity;
            if(qburger-soldburger>=quantity)
            {
              soldburger= soldburger+quantity;
              totalprice_burger= totalprice_burger+quantity*100;
              cout<<"\n\n\t\t "<<quantity<<" burger is the order!";

            }
            else
                cout<<"\n\t Only "<<qburger-soldburger<<" burger remaining in hotel.";
                break;       
        

        case 4:
            cout<<"\n\nEnter the quantity of noodles:";
            cin>>quantity;
            if(qnoodles-soldnoodles>=quantity)
            {
              soldnoodles= soldnoodles+quantity;
              totalprice_noodles= totalprice_noodles+quantity*120;
              cout<<"\n\n\t\t "<<quantity<<" noodles is the order!";

            }
            else
                cout<<"\n\t Only "<<qnoodles-soldnoodles<<" noodles remaining in hotel.";
                break; 


        case 5:
            cout<<"\n\nEnter the quantity of chicken-roll:";
            cin>>quantity;
            if(qburger-soldchicken>=quantity)
            {
              soldchicken= soldchicken+quantity;
              totalprice_chicken= totalprice_chicken+quantity*90;
              cout<<"\n\n\t\t "<<quantity<<" chicken roll is the order!";

            }
            else
                cout<<"\n\t Only "<<qchicken-soldchicken<<" chicken roll remaining in hotel.";
                break;            


        case 6:
            cout<<"\n\nEnter the quantity of fried-fish:";
            cin>>quantity;
            if(qfish-soldfish>=quantity)
            {
              soldfish= soldfish+quantity;
              totalprice_fish= totalprice_fish+quantity*90;
              cout<<"\n\n\t\t "<<quantity<<"fried-fish is the order!";

            }
            else
                cout<<"\n\t Only "<<qfish-soldfish<<" fried-fish remaining in hotel.";
                break;     
   




        case 7:
            cout<<"\n\nEnter the quantity of cup of coffee:";
            cin>>quantity;
            if(qcoffee-soldcoffee>=quantity)
            {
              soldcoffee= soldcoffee+quantity;
              totalprice_coffee = totalprice_coffee+quantity*90;
              cout<<"\n\n\t\t "<<quantity<<"cold-coffee is the order!";

            }
            else
                cout<<"\n\t Only "<<qfish-soldcoffee<<" cold-coffee remaining in hotel.";
                break; 

           case 8:
           cout<<"\n \t\tDetails of sales and collection:";
           cout<<"\n\n Number of rooms we had:"<<qrooms;
           cout<<"\n\n Number of rooms we gave on rent:"<<soldrooms;
           cout<<"\n\n remaining rooms:"<<qrooms-soldrooms;
           cout<<"\n\n Total room collection of the day:"<<totalprice_room;

           
           cout<<"\n\n Number of pasta we had:"<<qpasta;
           cout<<"\n\n Number of pasta we gave on rent:"<<soldpasta;
           cout<<"\n\n remaining pasta:"<<qrooms-soldpasta;
           cout<<"\n\n Total pasta collection of the day:"<<totalprice_pasta;

           
           cout<<"\n\n Number of burger we had:"<<qburger;
           cout<<"\n\n Number of burger we gave on rent:"<<soldburger;
           cout<<"\n\n remaining burger:"<<qrooms-soldburger;
           cout<<"\n\n Total burger collection of the day:"<<totalprice_burger;

           
           cout<<"\n\n Number of noodles we had:"<<qnoodles;
           cout<<"\n\n Number of noodles we gave on rent:"<<soldnoodles;
           cout<<"\n\n remaining noodles:"<<qrooms-soldnoodles;
           cout<<"\n\n Total noodles collection of the day:"<<totalprice_noodles;

           cout<<"\n\n Number of chicken roll we had:"<<qchicken;
           cout<<"\n\n Number of chicken roll we gave on rent:"<<soldchicken;
           cout<<"\n\n remaining chicken roll:"<<qrooms-soldchicken;
           cout<<"\n\n Total chicken roll collection of the day:"<<totalprice_chicken;

           cout<<"\n\n Number of fried fish we had:"<<qfish;
           cout<<"\n\n Number of fried fish we gave on rent:"<<soldfish;
           cout<<"\n\n remaining fried fish:"<<qrooms-soldfish;
           cout<<"\n\n Total fried fish collection of the day:"<<totalprice_fish;

           cout<<"\n\n Number of coffee we had:"<<qcoffee;
           cout<<"\n\n Number of coffee we gave on rent:"<<soldcoffee;
           cout<<"\n\n remaining coffee:"<<qrooms-soldcoffee;
           cout<<"\n\n Total coffee collection of the day:"<<totalprice_coffee;

           cout<<"\n\n Total sale for the day:"<<totalprice_room+totalprice_burger+totalprice_pasta+totalprice_noodles+totalprice_chicken+totalprice_fish+totalprice_coffee;
        
        case 9:
        exit(0);

        default:

        cout<<"Please select the number mentioned above.";


}
goto m;//helps to jump to the menu after every choice




}