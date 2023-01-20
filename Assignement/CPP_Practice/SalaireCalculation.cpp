#include <iostream>
#include <ctime>
using namespace std;

int main()
{
   // Personal Infosp

   string name;
   cout << "Tap Your Name : " << "\n";
   cin >> name;
   string aaqqqqqY
   
   // Declaration Of Variables 
   float H_Base   ;
   double Taux_H ;
   cout << "Please Enter Your Horaires Base : " ;
   cin  >> H_Base;
   cout << "Please Enter a Horaires Value :" ;
   cin  >> Taux_H;
   double Brut_Imposable =  (H_Base * Taux_H) ;
   
   // Cotisations 
   const float Cot_CNSS  =  (Brut_Imposable * 4.29)/100;
   const float Cot_IPE   =  (Brut_Imposable * 0.19)/100;
   const float Cot_Mtll  =  (Brut_Imposable * 1.82)/100;
   const float Cot_CIMR  =  (Brut_Imposable * 3.00)/100;
   
   // Calcule Prime De Fidelite 
   int    T_prm_fdlt ;
   double Prime_fedilite ;
   
   // Calcule Net A Payer
   double Net_payer     = (Brut_Imposable)-(Cot_CNSS +Cot_IPE+ Cot_Mtll +Cot_CIMR);
  
   // ==== OutPuts ====

   cout << "Base Hours Is : "<< H_Base << " Hs\n";
   cout << "Taux Hours Is : " << Taux_H << " MAD\n";
   cout << "============[ Cotisation ]=============\n";
   cout <<  "Cotisation CNSS Is : "<< Cot_CNSS <<" MAD\n";
   cout << "Cotisation IPE Is : " << Cot_IPE << " MAD";
   cout << "\nCotisation Mutuelle Is : " << Cot_Mtll << " MAD\n";
   cout << "Brut Imposable is : " << Brut_Imposable << "  MAD";
   cout << "\n=========================\n";
   cout << "Net a Payer : " << Net_payer << " MAD\n";
   return 0;
}