#include<iostream>
using namespace std;


class BMI
{
   float weight;
   float height;
   friend float calculation(BMI);

   public:
    BMI(float w, float h)
    {
        weight = w;
        height = h;
    } 


};

// calculation function of BMI class:
float calculation(BMI obj)
{
    float bmi;
    float cm = obj.height * 30.48;
    float calc = obj.weight/(cm * cm);

    bmi = calc * 10000;
    return bmi;

}

int main()
{
    cout<<endl<<"\t\t*Welcome to BMI calculator*"<<endl;
    float weight, height;

    cout<<endl<<"Enter your weight in kg : ";
    cin>>weight;
    cout<<endl<<"Enter your height in feet : ";
    cin>>height;

    BMI b(weight, height);
    float result = calculation(b);

    cout<<endl<<"Your BMI = "<<result<<endl;

    if (result <18.5)
    {
        cout<<"According to your BMI, you are underweight person"<<endl;
    }

    else if (result>=18.5 && result<=24.9)
    {
        cout<<"According to your BMI, you are normal or healthy person"<<endl;
    }
    
    else if (result>25.0 && result<=29.9)
    {
        cout<<"According to your BMI, you are overweight person"<<endl;
    }
    
    else
    {
        cout<<"According to your BMI, you are obese person"<<endl;
    }

    return 0;
}