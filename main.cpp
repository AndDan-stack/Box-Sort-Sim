#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#include "sorting.h"

int main () { 
  Chute chute1_obj;// chute1_obj is object of class Chute
  Chute chute2_obj;// chute2_obj is object of class Chute
  Chute chute3_obj;// chute3_obj is object of class Chute
  Chute chute4_obj; //Chute4_obj is object of class Chute
  number package1_obj;// package1_obj is an object of  class number
  number package2_obj;// package2_obj is an object of  class number
  number package3_obj;// package3_obj is an object of  class number
  number package4_obj;// package4_obj is an object of  class number

  DEV testObj;//testObj is an object of class DEV
  Belt beltObj; //beltObj is an object of class Belt
  init_print(testObj); //DEV DEBUG
  number packageObj;//type of packages
 
  init_Chute(chute4_obj); //call class Chute chute4 to main
  init_Chute(chute3_obj); //call class Chute chute3 to main
  init_Chute(chute2_obj); //call class Chute chute2 to main
  init_Chute(chute1_obj); //call class Chute chute1 to main
  
  init_number(package4_obj);
  init_number(package3_obj);
  init_number(package2_obj);
  init_number(package1_obj);

  init_Belt(beltObj); //beltObj to main
  init_number(packageObj); //int smallPackages, the number of SmallPakages on the belt
  int smallPackages;
  string restart; //get user input to clear chutes and start a new sort,or end sort
  
 // chute4_obj.sortMotor=0; 
 cout <<"Maximum is"<<chute4_obj.maxValue;
cout<<"\n\rEnter the number of Packages"<<endl; // ask user to put a group of smallPackages on the belt.
  cin>>smallPackages; //get  smallPackages 
  cout <<"Packages: "<<smallPackages<<endl; //display input to user
  startSort(beltObj);
  beltObj.startSort=1;
  //init_print(testObj); //DEV DEBUG
  while ( beltObj.startSort==1 && smallPackages > 0 )//while their are more then zero small package
  {
    
   init_print(testObj); //DEV DEBUG
       if (chute4_obj.irBeam==1 && (chute4_obj.total > chute4_obj.maxValue))
		{ //if chute 4  is empty and chute4 total is greater then chute4 maximum
     chute4_obj.total=0;
		  cout <<"packages larger then max.\n\rChoose lower  number."<<endl;
		  cout <<"\r\nChute four has " << chute4_obj.total; //display chute total
		  closeChute(chute4_obj);// close  chute4
		  openChute(chute3_obj); //open chute3
		  startSort(beltObj);//*DEV*:CHANGED TO endsort// keep belt on" *DEV*
		  }
      else if ( (chute4_obj.total < chute4_obj.maxValue)&&chute4_obj.irBeam==1)
			{ //if chute 4  is empty and chute4 total is less then or equal to chute4 maximum.
       chute4_obj.sortMotor=1; // turn on motor
			  chute4_obj.total+=(smallPackages-package4_obj.extra); // add small packages to total
			  init_print(testObj); // DEV DEBUG
			  smallPackages-=chute4_obj.total+package4_obj.extra; //subtract smallPackages from smallPackages add extra 
			  init_print(testObj); // DEV DEBUG
			  cout <<"\r\nChute four has " << chute4_obj.total; //display chute total to user
			  closeChute(chute4_obj);// close chute4
			  openChute(chute3_obj); //open chute3
			}/************************************************/
			
			  if (chute4_obj.irBeam==0 )
			  { //if chute 4  is empty.
			  cout <<"\n Chute 4 "<<endl;
			  cout <<"\nChute four has " << chute4_obj.total; //display chute total
			  closeChute(chute4_obj);// close  chute4
			  openChute(chute3_obj); //open chute3
			   } /*********************************************/
      init_print(testObj); // DEV DEBUG

				   if (chute4_obj.irBeam==1 &&chute4_obj.total>chute4_obj.maxValue)
				  { cout <<"packages larger then max.\n\rChoose lower  number."<<endl;
				  closeChute(chute4_obj);// close chute4
				  openChute(chute3_obj);// close chute3
				  }
					  else if (chute4_obj.irBeam==0 )
					  { //if chute 4  is empty.
					  cout <<"\n Chute four is empty.\r\nChute four has " << chute4_obj.total<<" with "<<package4_obj.extra<< " extra."; //display chute total and extra
					  closeChute(chute4_obj);// close chute4
					  openChute(chute3_obj); //open chute3
					  }
      /*********************************************/
      init_print(testObj); // DEV DEBUG

   
  
   if (chute4_obj.irBeam==0 && chute3_obj.irBeam==0 && chute2_obj.irBeam==0 && chute1_obj.irBeam==0) //if all chutes are full
      {
        endSort(beltObj); //end the sort.
      }
  
  /**************************NEXT*CHUTE3***************************************************/
   init_print(testObj); //DEV DEBUG
      if (chute3_obj.irBeam==1 &&chute3_obj.total>chute3_obj.maxValue)
		{ //if chute 3  is empty and smallPackages is greater then  chute3 maximum.
		  cout <<"packages larger then max.\n\rChoose lower  number."<<endl;
		  cout <<"\r\nChute three has " << chute3_obj.total; //display chute total 
		  closeChute(chute3_obj);// close chute3
		  openChute(chute2_obj);// close chute2
		  }
      else if (chute3_obj.irBeam==1 && (chute3_obj.total <= chute3_obj.maxValue))
    { //if chute 3  is empty and chute3 total is less then or equal to chute3 maximum.
      chute3_obj.sortMotor=1; 
      chute3_obj.total+=smallPackages-package3_obj.extra;  
      init_print(testObj); // DEV DEBUG
      smallPackages-=chute3_obj.total+package3_obj.extra; //subtract smallPackages from smallPackages add extra 
      init_print(testObj); // DEV DEBUG
      cout <<"\r\nChute three has " << chute3_obj.total ; //display chute total to user
      closeChute(chute3_obj);// close chute3
      openChute(chute2_obj); //open chute2
    }/************************************************/
    
		  
			  else if (chute3_obj.irBeam==0 )
			  { //if chute 3  is empty.
			  cout <<"\r\nChute three has " << chute3_obj.total<<" with "<<package3_obj.extra<< " extra."; //display chute total and extra
			  closeChute(chute3_obj);// close chute3
			  openChute(chute2_obj); //open chute2
			  }
      /*********************************************/
      init_print(testObj); // DEV DEBUG

   if (chute4_obj.irBeam==0 && chute3_obj.irBeam==0 &&chute2_obj.irBeam==0 && chute1_obj.irBeam==0) //if all chutes are full
      {
        endSort(beltObj); 
      }
       if (chute3_obj.irBeam==1 && (chute3_obj.total <= chute3_obj.maxValue))
    { //if chute 3  is empty and chute3 total is less then or equal to chute3 maximum.
      chute3_obj.sortMotor=1;// cout<<"motor3 on\n "; //turn on chute 3 sort motor
      chute3_obj.total+=smallPackages-package3_obj.extra;  
      init_print(testObj); // DEV DEBUG
      smallPackages-=chute3_obj.total+package3_obj.extra;;  //subtract smallPackages from smallPackages add extra 
      init_print(testObj); // DEV DEBUG
     // cout <<"\r\nChute three has " << chute3_obj.total; //display chute total
      closeChute(chute3_obj);// close chute3
      openChute(chute2_obj); //open chute2
      startSort(beltObj);
    }/************************************************/
		else if (chute3_obj.irBeam==1 && (chute3_obj.total > chute3_obj.maxValue))
		{ //if chute 3  is empty and chute3 total is greater then  chute3 maximum, this mean we have extra small Packages.
		  cout <<"packages larger then max.\n\rChoose lower  number."<<endl;
		  cout <<"\r\nChute three has " << chute3_obj.total; //display chute total
		  closeChute(chute3_obj);// close  chute3
		  openChute(chute2_obj); //open chute2
		  startSort(beltObj); // keep belt on 
		  }
			  else if (chute3_obj.irBeam==0 )
			  { //if chute 3  is empty.
			  cout <<"\n chute 3 is closed"<<endl;
			  cout <<"\r\nChute three has " << chute3_obj.total; //display chute total
			  closeChute(chute3_obj);// close  chute3
			  openChute(chute2_obj); //open chute2
			  /*********************************************/
			  init_print(testObj); // DEV DEBUG

  
   if (chute4_obj.irBeam==0 && chute3_obj.irBeam==0 && chute2_obj.irBeam==0 && chute1_obj.irBeam==0) //if all chutes are full
      {
        endSort(beltObj); //end the sort.
      }
  
  /**************************NEXT*CHUTE2***************************************************/
   init_print(testObj); //DEV DEBUG
     if (chute2_obj.irBeam==1 &&chute2_obj.total>chute2_obj.maxValue)
		  { //if chute 2  is empty and smallPackages is greater then  chute 2 maximum.
		  cout <<"packages larger then max.\n\rChoose lower  number."<<endl;
		  init_print(testObj); // DEV DEBUG
		  cout <<"\r\nChute two has " << chute2_obj.total; //display chute total 
		  closeChute(chute2_obj);// close chute2
		  openChute(chute1_obj);// close chute1
		  }
			  else if (chute2_obj.irBeam==0 )
			  { //if chute 2  is empty.
			  cout <<"\r\nChute two has " << chute2_obj.total<<" with "<<package2_obj.extra<< " extra."; //display chute total and extra
			  closeChute(chute2_obj);// close chute2
			  openChute(chute1_obj); //open chute1
			  }
      else if (chute2_obj.irBeam==1 && (chute2_obj.total <= chute2_obj.maxValue))
    { //if chute 2  is empty and chute 2 total is less then or equal to chute 2 maximum.
     chute2_obj.sortMotor=1; cout<<"motor2 on\n ";//
      chute2_obj.total+=smallPackages-package2_obj.extra; cout <<"add "<<smallPackages <<"to total"<<endl; // add small packages to total 
      init_print(testObj); // DEV DEBUG
      smallPackages-=chute2_obj.total+package2_obj.extra;//subtract smallPackages from smallPackages add extra 
      init_print(testObj); // DEV DEBUG
      cout <<"\r\nChute four has " << chute2_obj.total << "with" <<package2_obj.extra <<"extra"; //display chute total to user
      closeChute(chute2_obj);// close chute2
      openChute(chute1_obj); //open chute1
    }/************************************************/
    
		  
      /*********************************************/
      init_print(testObj); // DEV DEBUG

   if (chute4_obj.irBeam=0,chute2_obj.irBeam=0,chute2_obj.irBeam=0,chute1_obj.irBeam=0) //if all chutes are full
      {
        endSort(beltObj); 
      }
        if (chute2_obj.irBeam==1 && (chute2_obj.total > chute2_obj.maxValue))
		{ //if chute 2  is empty and chute 2 total is greater then  chute 2 maximum, this mean we have extra small Packages.
		  cout <<"packages larger then max.\n\rChoose lower  number."<<endl;
		  init_print(testObj); // DEV DEBUG
		  cout <<"\r\nChute two has " << chute2_obj.total; //display chute total
		  closeChute(chute2_obj);// close  chute 2
		  openChute(chute1_obj); //open chute1
		  startSort(beltObj); // keep belt on 
		  }
			  else if (chute2_obj.irBeam==0 )
			  { //if chute 2  is empty.
			  cout <<"\nchute 2 is closed"<<endl;
			  cout <<"\r\nChute two has " << chute2_obj.total; //display chute total
			  closeChute(chute2_obj);// close  chute2
			  openChute(chute1_obj); //open chute1
			  }if (chute2_obj.irBeam==1 && (chute2_obj.total <= chute2_obj.maxValue))
      { //if chute 2  is empty and chute 2 total is less then or equal to chute 2 maximum.
      chute2_obj.sortMotor=1; cout<<"motor2 on\n "; //turn on chute 2 sort motor
      chute2_obj.total+=smallPackages-package2_obj.extra; cout <<"add "<<smallPackages <<"to total"<<endl; // add small packages to total 
      init_print(testObj); // DEV DEBUG
      smallPackages-=chute2_obj.total+package2_obj.extra;//subtract small   Packages from smallPackages add extra 
      init_print(testObj); // DEV DEBUG
      cout <<"\r\nChute two has " << chute2_obj.total; //display chute total
      closeChute(chute2_obj);// close chute2
      openChute(chute1_obj); //open chute1
      startSort(beltObj); 
      } /************************************************/
		
			  /*********************************************/
			  init_print(testObj); // DEV DEBUG

  
   if (chute4_obj.irBeam==0 && chute3_obj.irBeam==0 &&chute2_obj.irBeam==0 && chute1_obj.irBeam==0) //if all chutes are full
      {
       endSort(beltObj); //end the sort.
      }
  
  /**************************NEXT*CHUTE1***************************************************/
    init_print(testObj); //DEV DEBUG
      if (chute1_obj.irBeam==1 &&chute1_obj.total>chute1_obj.maxValue)
		{ //if chute 1  is empty and smallPackages is greater then  chute 1 maximum.
		 cout <<"packages larger then max.\n\rChoose lower  number."<<endl;
		  closeChute(chute1_obj);// close chute2
		  }
      else if (chute1_obj.irBeam==1 && (chute1_obj.total <= chute1_obj.maxValue))
    { //if chute 1  is empty and chute 1 total is less then or equal to chute 1 maximum.
     chute1_obj.sortMotor=1; 
      chute1_obj.total+=smallPackages-package1_obj.extra;  
      init_print(testObj); // DEV DEBUG
      smallPackages-=chute1_obj.total+package1_obj.extra;//subtract smallPackages from smallPackages add extra 
      init_print(testObj); // DEV DEBUG
      cout <<"\r\nChute one has " << chute1_obj.total ; //display chute total to user
      closeChute(chute1_obj);// close chute2
    }/************************************************/
    
		  
			  else if (chute1_obj.irBeam==0 )
			  { //if chute 1  is empty.
			  cout <<"\r\nChute one has " << chute1_obj.total<<" with "<<package1_obj.extra<< " extra."; //display chute total and extra
			  closeChute(chute1_obj);// close chute2
				}
      /*********************************************/
      init_print(testObj); // DEV DEBUG

   if (chute4_obj.irBeam=0,chute1_obj.irBeam=0,chute2_obj.irBeam=0,chute1_obj.irBeam=0) //if all chutes are full
      {
        endSort(beltObj); 
      }
        if (chute1_obj.irBeam==1 && (chute1_obj.total > chute1_obj.maxValue))
		{ //if chute 1  is empty and chute 1 total is greater then  chute 1 maximum, this mean we have extra small Packages.
		  cout <<"packages larger then max.\n\rChoose lower  number."<<endl;
		  init_print(testObj); // DEV DEBUG
		  cout <<"\r\nChute one has " << chute1_obj.total; //display chute total
		  closeChute(chute1_obj);// close chute 1
		  startSort(beltObj); // keep belt on 
		  } else if (chute1_obj.irBeam==1 && (chute1_obj.total <= chute1_obj.maxValue))
    { //if chute 1  is empty and chute 1 total is less then or equal to chute 1 maximum.
      chute1_obj.sortMotor=1; cout<<"motor4 on\n "; //turn on chute 1 sort motor
      chute1_obj.total+=smallPackages-package1_obj.extra;  
      init_print(testObj); // DEV DEBUG
      smallPackages-=chute1_obj.total+package1_obj.extra;//subtract small   Packages from smallPackages add extra 
      init_print(testObj); // DEV DEBUG
      cout <<"\r\nChute one has " << chute1_obj.total; //display chute total
      closeChute(chute1_obj);// close chute2
      startSort(beltObj);
    }/************************************************/
		
			  else if (chute1_obj.irBeam==0 )
			  { //if chute 2  is empty.
			  cout <<"\n chute 1 is closed"<<endl;
			  cout <<"\r\nChute one has " << chute1_obj.total; //display chute total
			  closeChute(chute1_obj);// close  chute2
			  }
      /*********************************************/
      init_print(testObj); // DEV DEBUG

  
   if (chute4_obj.irBeam==0 && chute3_obj.irBeam==0 && chute2_obj.irBeam==0 && chute1_obj.irBeam==0) //if all chutes are full
      {
        endSort(beltObj); //end the sort.
      }
    }
	//DEV:}for end of while 4-24-20
/**************************END*CHUTES***************************************************/
  beltObj.endSort=1;
  
  if ( beltObj.endSort==1){
  init_Belt(beltObj);
  cout <<"\r\nEND of sort" <<"\n Type"<< /**Clear* chutes or*/ "*End* sort "<<endl;
  cin>>restart;
  break;
  }
  else if (beltObj.startSort==0 && beltObj.endSort==1){
  init_Belt(beltObj);
  cout <<" \n Type "<< /* *Clear* chutes or */ "*End* sort "<<endl;
  cin>>restart;
  if (restart=="End"||"end"||"eND"||"END"){
        cout <<"shutting down...";
        chute4_obj.total=0; 
        chute3_obj.total=0;
        chute2_obj.total=0;
        chute1_obj.total=0;
        beltObj.endSort=0;
        beltObj.startSort=0;
        beltObj.endSort=0;
        break;
  
   }
      
      }
		 else if (restart=="Clear"||"clear"||"CLEAR"||"cLEAR"){
			 startSort(beltObj);
			 cout <<"\nstarting new sort...\n";
			 chute4_obj.total=0; //reset  chute four total
			 chute3_obj.total=0; //reset chute three total
			 chute2_obj.total=0; //reset chute two total
			 chute1_obj.total=0; //reset chute two total
			 startSort(beltObj); //turn on belt for new sort
			 init_print(testObj); //DEV DEBUG
			cout<<"Enter the number of Packages"<<endl; // ask user to put a group of smallPackages on the belt.
			 cin >> smallPackages; //get  smallPackages 
			 cout <<"Packages: "<<smallPackages<<endl; //display input to user
			 openChute(chute4_obj);
			 init_print(testObj);
    break;} 
  

cout <<"GOODBYE...";
}
chute4_obj.total=0;
chute3_obj.total=0;
chute2_obj.total=0;
chute1_obj.total=0;
beltObj.endSort=0;
beltObj.startSort=0;
beltObj.endSort=0;

return 0;}
