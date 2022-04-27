#include <ctime>   // For time()
#include <cstdlib> // For srand() and rand()
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class travel
{

public:
    char fare[62] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                     'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                     '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    void createname();
    void creatxingli();

    void getways();
    string fareway[62];
    int fareway2[62] = {0};
    int fareway3[62]; /*行李费用*/
    /*void xingli() {
        for(int i = 0;i<62;i++)
    }*/
    void personshow();
    void personpay();
    int team[5][6];
    int z[5] = {0, 0, 0, 0, 0};  /*团队人数*/
    int z2[5] = {0, 0, 0, 0, 0}; /*团队费用*/
    int copy;
    int teampay();
    /**/
    void createteam();

private:
    int temp;
    char name[62];
    int xingli[62];
};
void travel::createname()
{

    this->temp = rand() % 63; /*temp为乘客数*/
    for (int i = 0; i < this->temp; i++)
    {
        this->name[i] = fare[i];
    }
}
void travel::creatxingli()
{
    for (int i = 0; i < this->temp; i++)
    {
        this->xingli[i] = rand() % 4;
    }
}

void travel::getways()
{
    for (int i = 0; i < this->temp; i++)
    {
        int t = 0;
        t = rand() % 3;
        if (t == 0)
        {
            fareway[i] = "Domesticashort";
        }
        if (t == 1)
        {
            fareway[i] = "DomesticLong";
        }
        if (t == 2)
        {
            fareway[i] = "International";
        }
    }
}
void travel::personpay()
{
    for (int i = 0; i < this->temp; i++)
    {
        if (fareway[i] == "Domesticashort")
        {
            fareway2[i] = 10;
        }
        if (fareway[i] == "DomesticLong")
        {
            fareway2[i] = 100;
        }
        if (fareway[i] == "International")
        {
            fareway2[i] = 500;
        }
    }
}
void travel::createteam()
{ /*确定旅行社成员*/

    for (int i = 0; i < 5; i++)
    {
        int t = rand() % 3;
        if (t == 0) /*国内短途*/
        {
            for (int j = 0; j < 6; j++)
            {
                for (int k = 0; k < 62; k++)
                {
                    if (fareway2[k] == 10)
                    {
                        team[i][j] = k;
                        z[i]++;
                        z2[i] = 10;
                        break;
                    }
                }
            }
        }

        if (t == 1) /*国内长途*/
        {
            for (int j = 0; j < 6; j++)
            {
                for (int k = 0; k < 62; k++)
                {
                    if (fareway2[k] == 100)
                    {
                        team[i][j] = k;
                        z[i]++;
                        z2[i] = 100;
                        break;
                    }
                }
            }
        }
        if (t == 2) /*国际*/
        {
            for (int j = 0; j < 6; j++)
            {
                for (int k = 0; k < 62; k++)
                {
                    if (fareway2[k] == 500)
                    {
                        team[i][j] = k;
                        z[i]++;
                        z2[i] = 500;
                        break;
                    }
                }
            }
        }
    }
}
int travel::teampay()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + z[i] * z2[i];
    }
    copy = sum;
    return sum;
}

void travel::personshow()
{

    for (int i = 0; i < this->temp; i++)
    {
        cout << "我是乘客" << name[i] << "," << fareway[i] << "携带" << xingli[i] << "件行李,行李编号是" << " " << "买票需付" << fareway2[i] << "asfda" << copy << z[4] << endl;
    }
}
int main()
{
    travel a;
    a.createname();
    a.creatxingli();
    a.getways();
    a.createteam();
    a.personpay();
    a.teampay();

    a.personshow();

    return 0;
}