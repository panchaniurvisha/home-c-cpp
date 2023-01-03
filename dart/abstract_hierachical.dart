abstract class Animal {
  
  void talk(String,int);
  void growl(String);
}
class Cat extends Animal {
  @override
  void growl(dynamic name) {
    print("\n Animal name is $name........");
  }

  @override
  void talk(dynamic name,dynamic data) {
    print("\n Cat name is $name");
    print("\n cat age is $data");
  }
  
}
class Dog extends Animal {
  @override
  void growl(dynamic name1) {
    print("\n Dog name is $name1........");
  }

  @override
  void talk(dynamic name1,dynamic data2) {
   print("\n Dog name is $name1");
   print("\n dog age is $data2");
  }
 
}
void main() {
  final cat = Cat();
  cat.talk("nora",5);
  cat.growl("nora");
  final dog = Dog();
  dog.talk("kairv",15);
  dog.growl("kairav");



  
}