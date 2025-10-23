class Animal{
  void speak(){
    System.out.println("I'm an animal!\n");
  }
}

class Dog extends Animal{
  void speak(){
    System.out.println("I'm a dog!\n");
  }
}

public class Ej{
  public static void main(String[] args){
    Animal dog = new Dog(); //tipo estatico Animal, pero tipo real Dog
    dog.speak(); //i'm a dog
  }
}
