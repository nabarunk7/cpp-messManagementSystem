#include<iostream>
using namespace std;

class messManagement{
    
    public:
    string hostel;
    string name;
    int cluster;

    void catererCluster(string aHostel){
        if(aHostel=="Aryabhatta"||aHostel=="BH-3"){
            cluster=1;
        }
        else if(aHostel=="9A"||aHostel=="9B"){
            cluster=2;
        }
        else if(aHostel=="9C"||aHostel=="9D"){
            cluster=3;
        }
        else if(aHostel=="BH-4"||aHostel=="BH-8"||aHostel=="BH-5"){
            cluster=4;
        }
        else if(aHostel=="BH-1"||aHostel=="BH-2"){
            cluster=5;
        }
        else if(aHostel=="BH-6"||aHostel=="BH-7"){
            cluster=6;
        }
        else{
            cluster=7;
        }
    }


    messManagement(string aHostel,string aName)
    { //constructor func
        hostel=aHostel; //this->hostel=hostel;
        name=aName;

        catererCluster(aHostel);
    }



    string catererName(string aHostel)
    { //object func
        
        if(aHostel=="Aryabhatta"||aHostel=="BH-3"){
            return "caterer1";
        }
        else if(aHostel=="9A"||aHostel=="9B"){
            return "caterer2";
        }
        else if(aHostel=="9C"||aHostel=="9D"){
            return "caterer3";
        }
        else if(aHostel=="BH-4"||aHostel=="BH-8"||aHostel=="BH-5"){
            return "caterer4";
        }
        else if(aHostel=="BH-1"||aHostel=="BH-2"){
            return "caterer5";
        }
        else if(aHostel=="BH-6"||aHostel=="BH-7"){
            return "caterer6";
        }
        else{
            return "caterer7";
        }
    }
};

class bill:public messManagement
{
    public:
    int noOfDays;
    bill(string aHostel,string aName,int anoOfDays): messManagement(aHostel, aName){
        noOfDays=anoOfDays;
    }
    

    void dailyBill(){
        
        switch(cluster){
            case 1: 
            cout<<"Daily bill is Rs. 130"<<endl;
            break;
            case 2: 
            cout<<"Daily bill is Rs. 150"<<endl;
            break;
            case 3: 
            cout<<"Daily bill is Rs. 145"<<endl;
            break;
            case 4: 
            cout<<"Daily bill is Rs. 125"<<endl;
            break;
            case 5: 
            cout<<"Daily bill is Rs. 135"<<endl;
            break;
            case 6: 
            cout<<"Daily bill is Rs. 115"<<endl;
            break;
            case 7: 
            cout<<"Daily bill is Rs. 120"<<endl;
            break;
            default:
            cout<<"Daily bill is Rs. 130"<<endl;

        }

    }
    
    int totalBill(int anoOfDays){
        switch(cluster){
            case 1: 
            return 130*noOfDays;
            break;
            case 2: 
            return 150*noOfDays;
            break;
            case 3: 
             return 145*noOfDays;
            break;
            case 4: 
             return 125*noOfDays;
            break;
            case 5: 
            return 135*noOfDays;
            break;
            case 6: 
            return 115*noOfDays;
            break;
            case 7: 
            return 120*noOfDays;
            break;
            default:
            return 130*noOfDays;

        }

    }
};

class messCommittee:public messManagement
{
    public:

    messCommittee(string aHostel,string aName): messManagement(aHostel, aName){
        
    }

    void viewCommittee(string aHostel)
    {
        if(aHostel=="Aryabhatta"||aHostel=="BH-3"){
            cout<<"prefect:Aditya,asst. prefect:Aman"<<endl;
        }
        else if(aHostel=="9A"||aHostel=="9B"){
            cout<<"prefect:Priyanshu,asst. prefect:Adi"<<endl;
        }
        else if(aHostel=="9C"||aHostel=="9D"){
            cout<<"prefect:Rahul,asst. prefect:Rohan"<<endl;
        }
        else if(aHostel=="BH-4"||aHostel=="BH-8"||aHostel=="BH-5"){
            cout<<"prefect:Virat,asst. prefect:Sachin"<<endl;
        }
        else if(aHostel=="BH-1"||aHostel=="BH-2"){
            cout<<"prefect:Rohit,asst. prefect:Riyan"<<endl;
        }
        else if(aHostel=="BH-6"||aHostel=="BH-7"){
            cout<<"prefect:John,asst. prefect:Jack"<<endl;
        }
        else{
            cout<<"prefect:Riya,asst. prefect:Dia"<<endl;
        }
    }
};

class Complaint
{
public:
    void checkHygiene()
    {
        char ans;
        cout << "Is hygiene maintained properly? (y/n) : ";
        cin >> ans;

        if (ans == 'n')
        {
            
            char check;
            cout << "Have you raised the complaint ? (y/n) :";
            cin >> check;

            if (check == 'y')
            {
                char check1;
                cout << "Is the complaint registered ? (y/n) :";
                cin >> check1;

                if (check1 == 'y')
                {
                    char check2;
                    cout << "Is the complaint verified ? (y/n) :";
                    cin >> check2;
                    if (check2 == 'y')
                    {
                        cout<<"You will be refunded.";
                        return;
                    }

                    else
                    {
                        cout << "Kindly wait till your complaint is verified. ";
                        return;
                    }
                    cout << "Okay we will take care of it and will take necessary action. Thank you.\n";
                    return;
                }

                else
                {
                    cout << "Okay we will register your complaint";
                    return;
                }
            }
            cout<<"Please raise the complaint.\n";
            return;
        }

        else
        {
            cout << "Okay thank you for your feedback we will try to maintain the hygiene !! ";
        }
    }
};


int main() 
{
    string name;
    cout<<"Student's name:";
    cin>>name;
    string hostel;
    cout<<"Hostel number:";
    cin>>hostel;
    int noOfDays;
    cout<<"No. of days present:";
    cin>>noOfDays;

    messCommittee m1(hostel,name);
    m1.viewCommittee(hostel);
    bill bill1(name,hostel,noOfDays);
    cout<<"Caterer is:"<< bill1.catererName(hostel)<<endl;
    bill1.catererCluster(hostel);
    cout<<"Cluster is:"<<bill1.cluster<<endl;
    bill1.dailyBill();
    cout<<"Total bill is:"<<bill1.totalBill(noOfDays)<<endl;
    Complaint complaint1;
    complaint1.checkHygiene();
    return 0;
}