 #include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<math.h>
#include<vector>
#include<stdio.h>
#include<stdlib.h>

using namespace std;




#define M 285987 // TOT Employment for normalisation factor //


class Zone_Class
{
    
    public:
        // Indicators //
        double  Acc_1 , Acc_2, Acc_3 ;
    

        vector<double> double_gravity_flows;
        vector<double> single_gravity_flows;
        vector<double> radiation_flows;
        vector<double> extended_radiation_flows;


        vector<double> cost_matrix ;
        vector<int> rank;
        vector <int> ord_neigh ;

        
        double pop ; 
        double emp ;
        

        void  rank_function() ;
        void  ordered_neighbours() ;

        
        void calculate_flows_gravity_double(vector<Zone_Class>& , int , double , vector <double>& ,vector<double>&) ;
        void calculate_flows_gravity_single(vector <Zone_Class>&, int , double , vector <double>&) ;
        void calculate_flows_radiation(vector <Zone_Class>&, int) ;
        

};

class Flow_Data_Class
{   
    public:
        int origin; 
        int destination;
        double flow; 
};



void read_population_employment(vector <Zone_Class> &, string) ;
void read_cost_matrix(vector <Zone_Class>& , string) ;
void gravity_double_constrained_normalisation_terms(vector<Zone_Class>& , vector<double>& , vector<double>& , double ) ;
void calculate_normalisation_terms_single(vector<Zone_Class>&  , vector<double>& , double ) ;




