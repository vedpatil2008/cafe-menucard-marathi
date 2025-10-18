#include<iostream>
using namespace std;

class premacha_chaha{
    public:

    int chahaPrice=10;
    int specialPremacha=20;
    int samosa=25;
    
    
    void showMenu(){
        cout<<".....BHAVFALAK......"<<endl;
        cout<<"chaha fakt:"<<chahaPrice<<endl;
        cout<<"Aapla special fakt:"<<specialPremacha<<endl;
        cout<<"Garam samosa:"<<samosa<<endl;
        
    }
    void takeOrder(){
        int choice,quantity,total;
        int count=0;
        showMenu();
        
        cout<<"enter your choices(1to3)"<<endl;
        cin>>choice;
        cout<<"enter quantity"<<endl;
        cin>>quantity;
        
        if(choice==1){
            total=chahaPrice*quantity;
            cout<<"tumhi chaha magavla!"<<" "<<quantity<<"chahache ekun paise:"<<total<<"rupaye"<<endl;
        }
            
            else if(choice==2){
                total=specialPremacha*quantity;
                cout<<"tumhi special magavla!"<<" "<<quantity<<"special che ekun paise:"<<total<<"rupaye"<<endl;
            }
            else if(choice==3){
                total=samosa*quantity;
                cout<<"samosa magvala!"<<" "<<quantity<<"samosyache zale:"<<total<<"rupaye"<<endl;
            }
            else{
                cout<<"invalid choice!!"<<endl;
            }
    }
};

int main(){

premacha_chaha aapla_chaha;
aapla_chaha.takeOrder();
return 0;
}