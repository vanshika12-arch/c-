#include<iostream>
using namespace std;
class ITEMS
{
    int itemcode[50];
    float itemprice[50];
    int count;
    public:
    void cnt(void){count=0;}
        void getitem(void);
            void displaysum(void);
            void remove(void);
            void displayitems(void ); 
           };
             void ITEMS::getitem(void)
             {
                 cout<<"enter item code and price\n";
                 cin>>itemcode[count];
                 cin>>itemprice[count];
                 count++;
             }
                void ITEMS::displaysum(void)
                {
                    float sum=0;
                    for(int i=0;i<count;i++)
                    {
                        sum+=itemprice[i];
                    }
                    cout<<"total price of items is:"<<sum<<"\n";
                }
                void ITEMS::remove(void)
                {
                    int code;
                    cout<<"enter item code to remove\n";
                    cin>>code;
                    for(int i=0;i<count;i++)
                    {
                        if(itemcode[i]==code)
                        {
                            for(int j=i;j<count-1;j++)
                            {
                                itemcode[j]=itemcode[j+1];
                                itemprice[j]=itemprice[j+1];
                            }
                            count--;
                            cout<<"item removed\n";
                            return;
                        }
                    }
                    cout<<"item not found\n";
                }
                void ITEMS::displayitems(void)
                {
                    cout<<"item code\titem price\n";
                    for(int i=0;i<count;i++)
                    {
                        cout<<itemcode[i]<<"\t\t"<<itemprice[i]<<"\n";
                    }
                }
                int main()
                {
                    ITEMS obj;
                    obj.cnt();
                    int choice;
                    do
                    {
                        cout<<"1. Add item\n2. Display total price\n3. Remove item\n4. Display items\n5. Exit\n";
                        cout<<"Enter your choice: ";
                        cin>>choice;
                        switch(choice)
                        {
                            case 1:
                                obj.getitem();
                                break;
                            case 2:
                                obj.displaysum();
                                break;
                            case 3:
                                obj.remove();
                                break;
                            case 4:
                                obj.displayitems();
                                break;
                            case 5:
                                cout<<"Exiting...\n";
                                break;
                            default:
                                cout<<"Invalid choice. Please try again.\n";
                        }
                    } while(choice != 5);
                    return 0;
                }