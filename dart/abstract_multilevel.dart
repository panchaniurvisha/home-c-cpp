abstract class Animal {
  void talk(String,int);
  void growl(String);
}
class Dog extends Animal {
  @override
  void growl(dynamic name) {
    print("\n Animal name is $name........");
  }
  @override
  void talk(dynamic name,dynamic data) {
    print("\n Dog name is $name");
    print("\n Dog age is $data");
  }
}
class Puppy extends Dog {
  @override
  void growl(dynamic name1) {
    print("\n Puppy name is $name1........");
  }
  @override
  void talk(dynamic name1,dynamic data2) {
   print("\n Puppy name is $name1");
   print("\n Puppy age is $data2");
  }
}
void main() {
  Puppy puppy =Puppy();
  puppy.growl("kairav");
  puppy.talk("kairav",20);
  Dog dog =Dog();
  dog.growl("Nora");
  dog.talk("nora",15);
}