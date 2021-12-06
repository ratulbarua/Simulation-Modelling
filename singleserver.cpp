#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,customer,IAT,AT,ST;
    int random[10], rnst[6];
    int k =2;
    int l=0;
    AT=0;
    IAT =0;
    cout<<"Enter the no of customer:"<<endl;
    cin>>customer;
    cout<<"Random Numbers:"<<endl;
    for(k=3;k<(customer+2);k++) {
		int r = (rand() % 1000) + 1;
		random[k] = r;
		cout << random[k]<<" ";
	}
	cout<<endl<<"Random Service Numbers:"<<endl;
    while(l++ < customer) {
		int p = (rand() % 100) + 1;
		rnst[l] = p;
		cout << rnst[l]<<" ";
	}
	random[0]=0;
	random[1]=0;
	random[2]=0;
	cout<<endl;
    cout<<"Customer\tRandom_Number\tIAT\tArrival_time\tRandom_SN\tST"<<endl;
    for(i=2,j=1;i<=customer,j<=customer;i++,j++)
    {
        if((random[i]<1))
        {
        IAT=0;
        AT=AT+IAT;
        }
        else if((random[i]<126))
        {
        IAT =1;
        AT=AT+IAT;
        }
        else if(random[i]<251)
        {
        IAT=2;
        AT=AT+IAT;
        }
        else if(random[i]<376)
        {
        IAT=3;
        AT=AT+IAT;

        }
        else if(random[i]<501)
        {
        IAT=4;
        AT=AT+IAT;
        }
        else if(random[i]<626)
        {
        IAT=5;
        AT=AT+IAT;
        }
        else if(random[i]<751)
        {
        IAT=6;
        AT=AT+IAT;
        }
        else if(random[i]<876)
        {
        IAT=7;
        AT=AT+IAT;
        }
        else if(random[i]<1001)
        {
        IAT=8;
        AT=AT+IAT;
        }
            if(rnst[j]<21)
            {
            ST=1;
            cout<<j<<"\t\t"<<random[i]<<"\t\t"<<IAT<<"\t\t"<<AT<<"\t\t"<<rnst[j]<<"\t"<<ST<<endl;
            }
            else if(rnst[j]<41)
            {
            ST=2;
            cout<<j<<"\t\t"<<random[i]<<"\t\t"<<IAT<<"\t\t"<<AT<<"\t\t"<<rnst[j]<<"\t"<<ST<<endl;
            }
            else if(rnst[j]<71)
            {
            ST=3;
            cout<<j<<"\t\t"<<random[i]<<"\t\t"<<IAT<<"\t\t"<<AT<<"\t\t"<<rnst[j]<<"\t"<<ST<<endl;
            }
            else if(rnst[j]<86)
            {
            ST=4;
            cout<<j<<"\t\t"<<random[i]<<"\t\t"<<IAT<<"\t\t"<<AT<<"\t\t"<<rnst[j]<<"\t"<<ST<<endl;
            }
            else if(rnst[j]<96)
            {
            ST=5;
            cout<<j<<"\t\t"<<random[i]<<"\t\t"<<IAT<<"\t\t"<<AT<<"\t\t"<<rnst[j]<<"\t"<<ST<<endl;
            }
            else if(rnst[j]<101)
            {
            ST=6;
            cout<<j<<"\t\t"<<random[i]<<"\t\t"<<IAT<<"\t\t"<<AT<<"\t\t"<<rnst[j]<<"\t"<<ST<<endl;
            }    }        }
