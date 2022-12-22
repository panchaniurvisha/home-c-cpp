import 'dart:io';

class Arithmatic {
  int? data1, data2, sum;//, multiple, devision, modulus;
  void printData() {
    print("\ndata1=");
    data1 = int.parse(stdin.readLineSync()!);
    print("\ndata2 =");
    data2 = int.parse(stdin.readLineSync()!);
  }
}

class Sum extends Arithmatic {
  @override
  void printData() {
    super.printData();
  }

  void showResult() {
    print("sum=${data1! + data2!}");
  }
}

class Addition extends Sum {
  @override
  void showResult() {
    super.showResult();
  }

  void multiply() {
     print("multiple=${sum! * data2!}");
  }
}

/*class Multiplication extends Addition {
  @override
  void multiply() {
    super.multiply();
  }
  void devide() {
    print("devision=${multiple! / data2!}");
  }
}

class Devision extends Multiplication {
  @override
  void devide() {
    super.devide();
  }
  void subtraction() {
    print("substraction=${devision! - data2!}");
  }
}

class Subtraction extends Devision {
  @override
  void subtraction() {
    super.subtraction();
  }
  void module() {
      print("substraction=${modulus! % data2!}");
  }
}

class Modulus extends Subtraction {
  @override
  void module() {
    super.module();
  }
}*/
void main() {
  Sum sum1 = Sum();
  sum1.printData();
  Addition add1 =Addition();
  add1.showResult();
  /*Multiplication multiply1 =Multiplication();
  multiply1.multiply();
  Devision devide1 =Devision();
  devide1.devide();
  Subtraction subtraction1 =Subtraction();
  subtraction1.subtraction();
  Modulus module1 =Modulus();
  module1.module();*/
}

