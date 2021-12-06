#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,i,j,demand[15];
    char tp_nd[15];
    float revenue[15],lp[15],salvage[15],dp[15];
    //int rand_tnd[40],rand_d[40];

    cout<<"Enter the number of day:"<<endl;
    cin>>n;
    int rand_tnd[15] = {0,94,77,49,45,43,32,49,100,16,24,31,14,41,61};
    int rand_d[15] = {0,80,20,15,88,98,65,86,73,24,60,60,29,18,90};
    for(i=1;i<=n;i++)
    {
        //rand_tnd[i] = (rand()%100);
        //rand_d[i] = (rand()%100);
        if(rand_tnd[i]<35)
        {
                tp_nd[i]='G';
        }
        else if(rand_tnd[i]<81)
        {
                tp_nd[i]='F';
        }
        else if(rand_tnd[i]<101)
        {
                tp_nd[i]='P';
        }
        }
        for(int k=1;k<=n;k++)
        {
                if((tp_nd[k]=='P')&&(rand_d[k]<45))
                {
                    demand[k]=40;
                }
                else if((tp_nd[k]=='F')&&(rand_d[k]<11))
                {
                    demand[k]=40;
                }
                else if((tp_nd[k]=='G')&&(rand_d[k]<4))
                {
                    demand[k]=40;
                }
                else if((tp_nd[k]=='P')&&(rand_d[k]<67))
                {
                    demand[k]=50;
                }
                else if((tp_nd[k]=='F')&&(rand_d[k]<29))
                {
                    demand[k]=50;
                }
                else if((tp_nd[k]=='G')&&(rand_d[k]<9))
                {
                    demand[k]=50;
                }
                else if((tp_nd[k]=='P')&&(rand_d[k]<83))
                {
                    demand[k]=60;
                }
                else if((tp_nd[k]=='F')&&(rand_d[k]<69))
                {
                    demand[k]=60;
                }
                else if((tp_nd[k]=='G')&&(rand_d[k]<24))
                {
                    demand[k]=60;
                }
                else if((tp_nd[k]=='P')&&(rand_d[k]<101))
                {
                    demand[k]=70;
                }
                else if((tp_nd[k]=='F')&&(rand_d[k]<89))
                {
                    demand[k]=70;
                }
                else if((tp_nd[k]=='G')&&(rand_d[k]<44))
                {
                    demand[k]=70;
                }
                else if((tp_nd[k]=='F')&&(rand_d[k]<97))
                {
                    demand[k]=80;
                }
                else if((tp_nd[k]=='G')&&(rand_d[k]<75))
                {
                    demand[k]=80;
                }
                else if((tp_nd[k]=='G')&&(rand_d[k]<94))
                {
                    demand[k]=90;
                }
                else if((tp_nd[k]=='F')&&(rand_d[k]<101))
                {
                    demand[k]=90;
                }
                else if((tp_nd[k]=='G')&&(rand_d[k]<101))
                {
                    demand[k]=100;
                }
                }
        cout<<"Day"<<"\t"<<"RD_tnd"<<"\t"<<"typnd"<<"\t"<<"RD_demand"<<"\t"<<"Demand"<<"\t"<<"Revenue"<<"\t"<<"LostP"<<"\t"<<"Salvage"<<"\t"<<"DailyP"<<endl;
        for(j=1;j<=n;j++)
        {
        if(demand[j]<=70)
        {
            revenue[j] = demand[j]*0.5;
            lp[j]=0;
            salvage[j]= (70-demand[j])*0.05;
        }
        else{
            lp[j]=((demand[j]-70)*(0.17));
            salvage[j]= 0;
            revenue[j] = 70*0.5;
            }
        dp[j] = revenue[j]-(70*0.33)-lp[j]+salvage[j];
        cout<<j<<"\t"<<rand_tnd[j]<<"\t"<<tp_nd[j]<<"\t"<<rand_d[j]<<"\t\t"<<demand[j]<<"\t"<<revenue[j]<<"\t"<<lp[j]<<"\t"<<salvage[j]<<"\t"<<dp[j]<<endl;
        }
    }
