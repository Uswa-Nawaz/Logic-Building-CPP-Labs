// Task 05(CP): Write a C++ program that takes the name, matric (out of 1100),
// intermediate(out of 550), and Ecat (out of 400) marks of the student and print their aggregate
// score for UET. Ecat = 50% & intermediate = 40% & Matric = 10%

#include <iostream>
using namespace std;
float calculation(float matric, float inter, float ecat, const float m, const float i, const float e)
{
    float matric_p;
    float inter_p;
    float ecat_p;
    matric_p = (matric / m) * 10;
    inter_p = (inter / i) * 40;
    ecat_p = (ecat / e) * 50;
    float agg;
    agg = matric_p + inter_p + ecat_p;
    return agg;
}
int main()
{
    const float m = 1100.0;
    const float i = 550.0;
    const float e = 400.0;
    int matric;
    int inter;
    int ecat;
    bool flag_m = false;
    bool flag_i = false;
    bool flag_e = false;
    while (flag_m == false)
    {
        cout << "Enter Your Matric Marks: ";
        cin >> matric;
        if (matric >= 0 && matric <= 1100)
        {
            flag_m = true;
        }
        else
        {
            cout << "You Entered invalid input. "<<endl;
        }
    }
    while (flag_i == false)
    {
        cout << "Enter Your Inter Marks: ";
        cin >> inter;
        if (inter >= 0 && inter <= 550)
        {
            flag_i = true;
        }
        else
        {
            cout << "You Entered invalid input. "<<endl;
        }
    }

    while (flag_e == false)
    {
        cout << "Enter Your ecat Marks: ";
        cin >> ecat;
        if (ecat >= 0 && ecat <= 400)
        {
            flag_e = true;
        }
        else
        {
            cout << "You Entered invalid input. "<<endl;
        }
    }
    float final_result;
    final_result = calculation(matric, inter, ecat, m, i, e);
    cout << "Your aggregate will be: " << final_result;
}