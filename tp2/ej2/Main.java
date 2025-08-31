public class Main{
  public static void main(String[] args){
    double n = Math.random(); 
    /**
    * Math.random() es una expresion sin transparencia referencial,
    * ya que no puedo sustituirla por un numero en concreto,
    * ya que en cada ejecucion, tendra un valor distinto
    */

    int sum = 2 + 3;
    /**
    * tanto sum como 2 + 3 son expresiones con transparencia referencial,
    *  ya que puedo sustituir sus ocurrencias por su valor (5)
    */

    System.out.println(n);
    System.out.println(sum);
  }
}
