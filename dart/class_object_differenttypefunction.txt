//no return no parameter
/*class School{
    String name="urvisha";
    int rollno=1,age=25,standard=12;
    void getData(){
       print("\nstudent name :$name");
       print("\nstudent roll_no :$rollno");
       print("\nstudent age :$age");
       print("\nstudent standard :$standard"); 
    }
}
    void main(){
      School student =School();
      print(student.name);
      print(student.rollno);
      print(student.age);
      print(student.standard);
      student.getData();
} */
/*class School{
  String stdName;
  void getStuName(){
    print("Student name :$stdName");
  }
  void main(){
    School schoolData=School();
    schoolData.stdName='urvisha';
    schoolData.getStuName();
  }
}*/
//no return with parameter
/*class School{
      void getData(String name,int rollno,int age,int standard){
      print("\nstudent name :$name");
      print("\nstudent roll_no :$rollno");
      print("\nstudent age :$age");
      print("\nstudent standard :$standard"); 
  }
}      
void main(){
      School student =School();
      student.getData("urvisha",1,25,5);   
}*/
//with return with parameter
/*class School{
     int getData(String name,int rollno,int age,int standard){
     print("\nstudent name :$name");
     print("\nstudent roll_no :$rollno");
     print("\nstudent age :$age"); 
     return standard;
  }
}    
void main(){
    School student =School();   
    print("\nStandard :${ student.getData("urvisha",1,25,5)}");
}*/
//with return no parameter
/*class School{
     String name="urvisha";
     int rollno=1,age=25,standard=5,science=50,maths=70;
       dynamic getData(){
       print("\nstudent name :$name");
       print("\nstudent roll_no :$rollno");
       print("\nstudent age :$age");
       print("\nstandard :$standard");
       return science+maths;
     }
}
void main(){
  School student =School();
  print("total marks:${student.getData()}");
}*/
class Bike{
  String brand1 ="palsar", brand2="honda";
  void getData(){
     print(brand1);   
  } 
  void getValue(){
     print(brand2);
  }
}
void main(){
 Bike bike1=Bike();
 bike1.getData();
 Bike bike2=Bike();
 bike2.getValue();
}




     
  
     
     
     
   
 
  
   
   
