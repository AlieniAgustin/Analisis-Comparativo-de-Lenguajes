public class EjemploVarArgs{
  static int sumar(int... numeros){
    int suma = 0;
    for(int n : numeros)
      suma += n;
    return suma;
  }

  public static void main(String[] args){
    System.out.println(EjemploVarArgs.sumar(1,2));
    System.out.println(EjemploVarArgs.sumar(1,2,3));
    System.out.println(EjemploVarArgs.sumar(1,2,3,4));
  }
}
