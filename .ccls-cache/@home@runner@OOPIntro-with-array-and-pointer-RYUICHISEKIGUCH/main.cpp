#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
 
  int n= (argc-1)/3;
  student *pt_std=new student[n];
int i;
  //./aout monkey 20 3.5 Art 15 2.5
  //*Try to finish  OOPIntro-with-array-and-pointer
  //(Assignment 5--> similar to 4
  for(i=1;i<argc;i+=3)   {
  
(*pt_std).set_all(argv[i],atoi(argv[i+1]),atof(argv[i+2]));
    pt_std++;
   }
  pt_std-=n;
  /*put them in 2 different loops*/
  for(i=0;i<n;i++){  
    (*(pt_std+i)).print_all();
  }  
  float high_score = pt_std[0].get_score();
  for(i=0;i<n;i++)
  {
    if(pt_std[i].get_score() > high_score)
      high_score = pt_std[i].get_score();
      
  }
  for(i=0;i<n;i++)
  {
    if(pt_std[i].get_score() == high_score)
      pt_std[i].print_name();
      
  }
  
  delete [] pt_std;
  //name =oat
  //age =21
  //score=55
  //print all info


  }
  
  


