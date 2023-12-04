#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Information
{
public:
    string division, district,data;
    int serialNumber;

    void inp()
    {
        cout<<"Enter the name of a division"<<endl;
        getline(cin, division);
    }

    void divi();

    void dhaka();
    void khulna();
    void chittagong();
    void mymensingh();
    void  rajshahi();
    void rangpur();
    void sylhet();
    void barisal();
    void inf();
};
void Information:: inf()
{


    while(true)
    {
vul_hoice:
        divi();



        inp();
        if (division == "rajshahi"||division == "3")
        {
            rajshahi();
        }
        else if (division == "dhaka"||division == "1")
        {
            dhaka();
        }
        else if (division == "khulna"||division == "5")
        {
            khulna();
        }
        else if (division == "chittagong"||division == "2")
        {
            chittagong();
        }
        else if (division == "mymensingh"||division == "8")
        {
            mymensingh();
        }

        else if (division == "rangpur"||division == "4")
        {
            rangpur();
        }
        else if (division == "barisal"||division == "7")
        {
            barisal();
        }
        else if (division == "sylhet"||division == "6")
        {
            sylhet();
        }



        else if (division == "exit")
        {

            break;
        }
        else
        {
            cout<<"******wrong input********"<<endl;
            goto vul_hoice;
        }

    }


}

void Information:: divi()
{
    cout<<endl<<endl;
    cout<<"Divisions of Bangladesh"<<endl<<endl;
    string div[10];
    div[0]="Dhaka";
    div[1]="Chittagong";
    div[2]="Rajshahi";
    div[3]="Rangpur";
    div[4]="khulna";
    div[5]="sylhet";
    div[6]="Barisal";
    div[7]="Mymensingh";

    for(int i=0; i<8; i++)
    {
        cout<<i+1<<"."<<div[i]<<endl;
    }
    cout<<endl;
    cout<<"If you want to exit please type \"exit\""<<endl;
    cout<<endl<<endl;

}


void Information:: dhaka()
{
distrct_vul:



    cout<<"Name of districts in dhaka division"<<endl<<endl<<endl;
    cout<<" 1.Dhaka"<<endl<<" 2.Gazipur"<<endl<<" 3.Narsingdi"<<endl<<" 4.Manikganj"<<endl<<" 5.Munshiganj"<<endl
        <<" 6.Narayanganj"<<endl<<" 7.Maradipur"<<endl<<" 8.Shariatpur"<<endl
        <<" 9.Rajbari"<<endl<<" 10.Gopalganj"<<endl<<" 11.Kishoreganj"<<endl<<" 12.Tangail"<<endl
        <<" 13.Faridpur"<<endl<<endl<<endl<<endl;




    cout<<"Enter the name of district"<<endl;
    cout<<"If you want to go back to division type \"back\""<<endl;
    getline(cin,district);


    if (district == "dhaka"||district == "1")
    {

        ifstream file("dhaka.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;







        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }


    else if (district == "gazipur"||district == "2")
    {


        ifstream file("gazipur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;


        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }

    else if (district == "narsingdi"||district == "3")
    {

        ifstream file("narsingdi.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;



        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "manikganj"||district == "4")
    {


        ifstream file("manikganj.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;



        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "munshiganj"||district == "5")
    {


        ifstream file("munshiganj.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "narayanganj"||district == "6")
    {


        ifstream file("narayanganj.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }




    else if (district == "kishoreganj"||district == "7")
    {

        ifstream file("kishoreganj.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "tangail")
    {

        ifstream file("tangail.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "faridpur"||district == "8")
    {

        ifstream file("faridpur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "maradipur"||district == "9")
    {

        ifstream file("maradipur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "shariatpur"||district == "10")
    {

        ifstream file("shariatpur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "rajbari"||district == "11")
    {

        ifstream file("rajbari.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "gopalganj"||district == "12")
    {


        ifstream file("gopalganj.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "back")
    {
        inf();

    }
    else
    {

        cout<<"wrong input!!!!!!"<<endl;
        goto distrct_vul;
    }
}



void Information::khulna()
{





distrct_vul:
    cout<<"Name of districts in khulna division"<<endl<<endl<<endl;
    cout<<" 1.khulna"<<endl<<" 2.satkhira"<<endl<<" 3.bagerhat"<<endl<<" 4.jessore,"<<endl<<" 5.jhenaidaha"<<endl
        <<" 6.magura"<<endl<<" 7.narail,"<<endl<<" 8.kushtia"<<endl<<" 9.chuadanga,"<<endl<<" 10.meherpur"
        <<endl<<endl<<endl;



    cout<<"Enter the name of district"<<endl;
    cout<<"If you want to go back to division type \"back\""<<endl;
    getline(cin,district);


    if (district == "khulna"||district == "1")
    {
        ifstream file("khulna.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;



        cout<<endl;
        cout<<"If you want some information about the other district in \"Khulna division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "satkhira"||district == "2")
    {

        ifstream file("satkhira.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \"Khulna division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }

    else if (district == "bagerhat"||district == "3")
    {

        ifstream file("bagerhat.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \"Khulna division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "jessore"||district == "4")
    {

        ifstream file("jessore.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \"Khulna division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "jhenaidaha"||district == "5")
    {

        ifstream file("jhenaidaha.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \"Khulna division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "magura"||district == "6")
    {

        ifstream file("magura.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \"Khulna division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "narail"||district == "7")
    {
        ifstream file("narail.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \"Khulna division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "kushtia"||district == "8")
    {

        ifstream file("kushtia.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \"Khulna division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "chuadanga"||district == "9")
    {

        ifstream file("chuadanga.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \"Khulna division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "meherpur"||district == "10")
    {

        ifstream file("meherpur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \"Khulna division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }

    else if (district == "back")
    {
        inf();

    }

    else
    {

        cout<<"wrong input!!!!!!"<<endl;
        goto distrct_vul;
    }
}


void Information::chittagong()
{


distrct_vul:



    cout<<"Name of districts in chittagong division"<<endl<<endl<<endl;
    cout<<" 1.chittagong"<<endl<<" 2.cox's bazar"<<endl<<" 3.rangamati"<<endl<<" 4.bandarban,"<<endl<<" 5.khagrachhari"<<endl
        <<" 6.feni"<<endl<<" 7.lakshmipur,"<<endl<<" 8.comilla,"<<endl<<" 9.noakhali,,"<<endl<<" 10.brahmanbaria "<<endl<<" 11.chandpur"
        <<endl<<endl<<endl;



    cout<<"Enter the name of district"<<endl;
    cout<<"If you want to go back to division type \"back\""<<endl;
    getline(cin,district);


    if (district == "chittagong"||district == "1")
    {
        ifstream file("chittagong.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;


        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }
    else if (district == "cox's bazar"||district == "2")
    {

        ifstream file("cox's bazar.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }

    else if (district == "rangamati"||district == "3")
    {

        ifstream file("rangamati.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "bandarban"||district == "4")
    {

        ifstream file("bandarban.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "khagrachhari"||district == "5")
    {

        ifstream file("khagrachhari.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "feni"||district == "6")
    {

        ifstream file("feni.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "lakshmipur"||district == "7")
    {

        ifstream file("lakshmipur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "comilla"||district == "8")
    {

        ifstream file("comilla.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }
    else if (district == "noakhali"||district == "9")
    {

        ifstream file("noakhali.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "brahmanbaria"||district == "10")
    {

        ifstream file("bramanbaria.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }
    else if (district == "chandpur"||district == "11")
    {

        ifstream file("chandpur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }

    else if (district == "back")
    {
        inf();

    }

    else
    {

        cout<<"wrong input!!!!!!"<<endl;
        goto distrct_vul;
    }
}

void Information:: mymensingh()

{

    cout<<"Name of districts in khulna division"<<endl<<endl<<endl;
    cout<<" 1.mymensingh"<<endl<<" 2.Jamalpur"<<endl<<" 3.Netrokona"<<endl<<" 4.Sherpur,"
        <<endl<<endl<<endl;

distrct_vul:

    cout<<"Enter the name of district"<<endl;
    cout<<"If you want to go back to division type \"back\""<<endl;
    getline(cin,district);


    if (district == "mymensingh"||district == "1")
    {
        ifstream file("mymensingh.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;


        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }
    else if (district == "jamalpur"||district == "2")
    {

        ifstream file("jamalpur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }

    else if (district == "netrokona"||district == "3")
    {

        ifstream file("netrokona.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "sherpur"||district == "4")
    {

        ifstream file("sherpur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }


    else if (district == "back")
    {
        inf();

    }


    else
    {

        cout<<"wrong input!!!!!!"<<endl;
        goto distrct_vul;
    }

}




void Information:: rajshahi()

{

    cout<<"Name of districts in khulna division"<<endl<<endl<<endl;
    cout<<" 1.�	Joypurhat"<<endl<<" 2.�	Rajshahi"<<endl<<" 3.�	Sirajganj"<<endl<<" 4.�	Natore"<<endl
        <<" 5.�	Pabna"<<endl<<" 6.�	Bogura"<<endl<<" 7.�	Chapainawabganj"<<endl<<" 8.�	Naogaon"
        <<endl<<endl<<endl;

distrct_vul:

    cout<<"Enter the name of district"<<endl;
    cout<<"If you want to go back to division type \"back\""<<endl;
    getline(cin,district);


    if (district == "joypurhat"||district == "1")
    {
        ifstream file("joypurhat.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;


        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }
    else if (district == "rajshahi"||district == "2")
    {

        ifstream file("rajshahi.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }

    else if (district == "natore"||district == "3")
    {

        ifstream file("natore.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "sirajganj"||district == "4")
    {

        ifstream file("sirajganj.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }
    else if (district == "pabna"||district == "5")
    {

        ifstream file("pabna.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }
    else if (district == "bogura"||district == "6")
    {

        ifstream file("bogura.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }
    else if (district == "chapainawabganj"||district == "7")
    {

        ifstream file("chapainawabganj.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "naogaon"||district == "8")
    {

        ifstream file("naogaon.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }


    else if (district == "back")
    {
        inf();

    }


    else
    {

        cout<<"wrong input!!!!!!"<<endl;
        goto distrct_vul;
    }

}




void Information:: rangpur()
{
distrct_vul:



    cout<<"Name of districts in Rangpur division"<<endl<<endl<<endl;
    cout<<" 1.Dinajpur"<<endl<<" 2.Kurigram"<<endl<<" 3.Gaibandha"<<endl<<" 4. 	Lalmonirhat"<<endl<<" 5. 	Nilphamari"<<endl
        <<" 6.Panchagarh"<<endl<<" 7.Rangpur"<<endl<<" 8.Thakurgaon"<<endl<<endl<<endl<<endl;




    cout<<"Enter the name of district"<<endl;
    cout<<"If you want to go back to division type \"back\""<<endl;
    getline(cin,district);


    if (district == "dinajpur"||district == "1")
    {
        ifstream file("dinajpur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;




        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }


    else if (district == "kurigram"||district == "2")
    {

        ifstream file("kurigram.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }

    else if (district == "gaibandha"||district == "3")
    {

        ifstream file("gaibandha.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "lalmonirhat"||district == "4")
    {

        ifstream file("lalmonirhat.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "nilphamari"||district == "5")
    {

        ifstream file("nilphamari.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "panchagarh"||district == "6")
    {

        ifstream file("panchagarh.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }




    else if (district == "rangpur"||district == "7")
    {

        ifstream file("rangpur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "thakurgaon "||district == "8")
    {

        ifstream file("thakurgaon.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }


    else if (district == "back")
    {
        inf();

    }


    else
    {

        cout<<"wrong input!!!!!!"<<endl;
        goto distrct_vul;
    }
}









void Information:: sylhet()
{
distrct_vul:



    cout<<"Name of districts in Sylhet division"<<endl<<endl<<endl;
    cout<<" 1.Habiganj"<<endl<<" 2.Moulvibazar"<<endl<<" 3.Sunamganj "<<endl<<" 4. 	Sylhet"<<endl<<endl<<endl<<endl;




    cout<<"Enter the name of district"<<endl;
    cout<<"If you want to go back to division type \"back\""<<endl;
    getline(cin,district);


    if (district == "habiganj"||district == "1")
    {
        ifstream file("habiganj.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;




        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }


    else if (district == "moulvibazar"||district == "2")
    {

        ifstream file("moulvibazar.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }

    else if (district == "sunamganj"||district == "3")
    {

        ifstream file("sunamganj.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "sylhet"||district == "4")
    {

        ifstream file("sylhet.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }


    else if (district == "back")
    {
        inf();

    }



    else
    {

        cout<<"wrong input!!!!!!"<<endl;
        goto distrct_vul;
    }
}

void Information:: barisal()
{
distrct_vul:



    cout<<"Name of districts in Barisal division"<<endl<<endl<<endl;
    cout<<" 1.Barisal"<<endl<<" 2.Barguna"<<endl<<" 3.Bhola"<<endl<<" 4.Jhalokati"<<endl<<" 5.Patuakhali"<<endl
        <<" 6. 	Pirojpur"<<endl<<endl<<endl<<endl;





    cout<<"Enter the name of district"<<endl;
    cout<<"If you want to go back to division type \"back\""<<endl;
    getline(cin,district);


    if (district == "barisal"||district == "1")
    {
        ifstream file("barisal.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;




        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }


    else if (district == "barguna"||district == "2")
    {

        ifstream file("barguna.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }

    }

    else if (district == "bhola"||district == "3")
    {

        ifstream file("bhola.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "jhalokati"||district == "4")
    {

        ifstream file("jhalokati.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "patuakhali"||district == "5")
    {

        ifstream file("patuakhali.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;

        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }
    else if (district == "pirojpur"||district == "6")
    {

        ifstream file("pirojpur.txt");
        while (getline(file,data))
        {


            cout<<data<<endl;
        }
        file.close() ;
        cout<<endl;
        cout<<"If you want some information about the other district in \""<<division<<" division\" please type \"yes\""<<endl;
        cout<<"otherwise please type \" no\""<<endl;
        string ne;
        getline (cin,ne);
        if (ne=="yes")
        {
            goto distrct_vul;
        }
    }



    else if (district == "back")
    {
        inf();

    }

    else
    {

        cout<<"wrong input!!!!!!"<<endl;
        goto distrct_vul;
    }
}








int main()
{
    Information in;
    in.inf();



    return 0;
}


