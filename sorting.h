class Chute {
 public:
 bool irBeam=1; //When irBeam is off the beam has been broken
 bool sortMotor=1;//When sortMotor is on,motor1 will activate directing packages down chute
 int total=0; //total packages
 int maxValue=20;//the maximum number of packages the chute can hold
// int extra;//the number of packages greater the maxValue initialized
};
void init_Chute(Chute chuteObj)
 {
 chuteObj.irBeam = 1; //initially irBeam set to 1 indicating chute  is  empty
 chuteObj.sortMotor=0; //initially sortMotor set to 0 indicating motor is off
 chuteObj.total=0; // total set to 0 indicating initially there are no packages in a chute
 chuteObj.maxValue=0;// all chutes can hold a maximum of this many packages. 
  }
 void closeChute(Chute chuteObj){
   chuteObj.irBeam=1; //activate the chute's irBeam
   chuteObj.sortMotor=1; //activate the sortMotor
 }
 void openChute(Chute chuteObj){
   chuteObj.irBeam=0; //disable the chute's irBeam
   chuteObj.sortMotor=0;// disable the chutes sortMotor
 };

 void init_chute(Chute chuteObj)
 {
 chuteObj.irBeam = 1; //initially irbeam set to 1 indicating chute  is  empty
 chuteObj.sortMotor = 0; //initially sortMotor set to 0 indicating motor is off
 chuteObj.total = 0; //initially total set to 0 indicating there are no packages 
 chuteObj.maxValue=' ';// all chutes can hold a maximum of this many packages.

 };

class number{ //this class lists the rules for numbers of Packages
  public:
  Chute chuteObj; //inharitied class to number
    int extra; //another type of package
};
void init_number(number packageObj){
  Chute chuteObj;
  //packageObj.smallPackages=' '; //a number the user will enter 
  packageObj.extra=0; // extra packages ==
  };


class Belt{
  public:
  bool endSort; //will flag the system to end the sort;
  bool startSort; //will flag the system to start the sort;
};
  void init_Belt(Belt beltObj){
    beltObj.startSort=0;
    beltObj.endSort=0;
    if (beltObj.startSort==1){ 
      cout <<"\nSTART of Sort" <<endl;//if beltObj.endSort=0,"Start of Sort" is displayed
    }
    if (beltObj.endSort==1&& beltObj.startSort==0)
    { 
    cout <<"\n\nEND of Sort" <<endl; //if beltObj.endSort=0,"END of Sort" is displayed
    }
  }
  bool startSort(Belt beltObj){
    beltObj.startSort=1; //  set to 0 to indicate the sort has  started
    beltObj.endSort=0; //  set to 0 to indicate the sort has not ended
    return 0;
  }
  bool endSort(Belt beltObj){
    beltObj.startSort=0; //  set to 0 to indicate the sort has not started
    beltObj.endSort=1;  //  set to 1 to indicate the sort has ended
    return 0;
  };


  class DEV{
  private:
  bool test; 
 };
 
  void init_print(DEV testObj){
   /*testObj.test=1;  // set testObj.test to 1 to indicate a DEV test has started
    if (testObj.test==1)
  {///number packageObj;//type of packages
    Belt beltObj; //beltObj is an object of class Belt
    Chute chute1_obj;// chute1_obj is object of class Chute
    Chute chute2_obj;// chute2_obj is object of class Chute
    Chute chute3_obj;// chute3_obj is object of class Chute
    Chute chute4_obj; //Chute4_obj is object of class Chute
    number package1_obj;// package1_obj is an object of  class number
    number package2_obj;// package2_obj is an object of  class number
    number package3_obj;// package3_obj is an object of  class number
    number package4_obj;// package4_obj is an object of  class number
    void init_number(number packageObj);
    cout<<"\n****chute4_obj.irBeam is"  <<chute4_obj.irBeam<<"****"<<endl; //status of chute4_obj.irBeam
    cout <<"****chute4_obj.motor is"  <<chute4_obj.sortMotor<<"****"<<endl;//status of chute4_obj.motor
    cout <<"****chute4_obj.total is" <<chute4_obj.total<<"****"<<endl; //status of chute4_obj.total
    cout <<"***chute4_obj.maxValue is " <<chute4_obj.maxValue<<"***" <<endl;
    cout <<"***package4_obj.extra is " <<package4_obj.extra<<"***" <<endl;

    cout<<"\n****chute3_obj.irBeam is"  <<chute3_obj.irBeam<<"****"<<endl; //status of chute3_obj.irBeam
    cout <<"****chute3_obj.motor is"  <<chute3_obj.sortMotor<<"****"<<endl;//status of chute3_obj.motor
    cout <<"****chute3_obj.total is" <<chute3_obj.total<<"****"<<endl; //status of chute3_obj.total
    cout <<"***chute3_obj.maxValue is " <<chute3_obj.maxValue<<"***" <<endl;
    cout <<"***package3_obj.extra is " <<package3_obj.extra<<"***" <<endl;

    cout<<"\n****chute2_obj.irBeam is"  <<chute2_obj.irBeam<<"****"<<endl; //status of chute2_obj.irBeam
    cout <<"****chute2_obj.motor is"  <<chute2_obj.sortMotor<<"****"<<endl;//status of chute2_obj.motor
    cout <<"****chute2_obj.total is" <<chute2_obj.total<<"****"<<endl; //status of chute2_obj.total
    cout <<"***chute2_obj.maxValue is " <<chute2_obj.maxValue <<"***"<<endl;
    cout <<"***package2_obj.extra is " <<package2_obj.extra<<"***" <<endl;

    cout<<"\n****chute1_obj.irBeam is"  <<chute1_obj.irBeam<<"****"<<endl; //status of chute1_obj.irBeam
    cout <<"****chute1_obj.motor is"  <<chute1_obj.sortMotor<<"****"<<endl;//status of chute1_obj.motor
    cout <<"****chute1_obj.total is" <<chute1_obj.total<<"****"<<endl; //status of chute1_obj.total
    cout <<"***chute1_obj.maxValue is " <<chute1_obj.maxValue <<"****"<<endl;
    cout <<"***package1_obj.extra is " <<package1_obj.extra<<"***" <<endl;
    cout << "\n***"<<"beltObj.startSort is "<< beltObj.startSort <<"***"<<endl; //status of ebeltObj.startsort
    cout << "***"<<"beltObj.endSort is "<< beltObj.endSort <<"***\n"<<endl; //status of ebeltObj.endsort
  }*/
};
