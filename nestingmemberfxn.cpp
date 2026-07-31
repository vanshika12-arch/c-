#include<iostream>
using namespace std;
class binary
{
    string s;
    public:
    void read(void)
    {
        cout<<"enter binary number";
        cin>>s;
    }
    void chk_bin(void)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"incorrect binary format";
                exit(0);
            }
        }
    }
    void ones_complement(void)
    {
        chk_bin();
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0')
            {
                s.at(i)='1';
            }
            else
            {
                s.at(i)='0';
            }
        }
    }
void dispayones(void)

{
    ones_complement();
    cout<<"ones complement of binary number is"<<s;
}
};
int main()
{
    binary b;
    b.read();
    b.dispayones();
    return 0;



}