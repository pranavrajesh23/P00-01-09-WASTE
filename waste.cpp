#include<iostream>
using namespace std;


void checkRecycle()
{
    cout<<"\n------------ Recyclable Waste Check ------------\n";
    cout<<"\nIs this a recyclable waste? (yes/no)\n";
    string check;
    cin>>check;
    if(check=="yes")
    {
        cout<<"\nThis waste can be recycled for other applications.\n";
    }
    else{
        cout<<"\nThis waste is a landfill.\n";
    }
}

void checkReuse()
{
    cout<<"\n------------ Reusable Waste Check ------------\n";
    cout<<"\nIs this a reusable waste? (yes/no)\n";
    string check;
    cin>>check;
    if(check=="yes")
    {
        cout<<"\nThis waste can be reused for other applicatios.\n";
    }
    else{
        cout<<"\nChecking for recyclable waste..\n";
        // checkRecycle();
    }
}

void checkOrganicWaste()
{
    cout<<"\n------------ Organic Waste Check ------------\n";
    cout<<"\nIs this a organic waste? (yes/no)\n";
    string check;
    cin>>check;
    if(check=="yes")
    {
        cout<<"\nDoes this organic waste have high energy content? (yes/no)\n";
        string energy;
        cin>>energy;
        if(energy=="yes")
        {
            cout<<"\nThis organic waste is a bio fuel source.\n";
        }
        else{
            cout<<"\nThis organic waste is a organic fertilizer source.\n";
        }
    }
    else{
        cout<<"\nChecking for recyclable waste...\n";
        checkReuse();
    }
}

int main()
{
    cout<<"------------- Waste Management System -------------\n";
    cout<<"\nCollect waste\n";
    checkOrganicWaste();
}