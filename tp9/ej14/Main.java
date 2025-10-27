import java.util.List;
import java.util.ArrayList;

public class Main{

  static double sumaPerimetros(List<FiguraGeometrica> figuras){
    double sum = 0.0;
    for(FiguraGeometrica figura : figuras)
      sum += figura.calcularPerimetro();
    return sum;
  }

  public static void main(String[] args){
    //dada una lista de figuras geometricas, calcula la suma de los perimetros de todas ellas
    FiguraGeometrica c1 = new Circulo(2.3);
    FiguraGeometrica t1 = new Triangulo(2.0,1.0,2.0,2.0,1.0);
    FiguraGeometrica t2 = new Triangulo(2.0,1.0,1.0,1.5,2.0);
    List<FiguraGeometrica> figuras = new ArrayList<>();
    figuras.add(c1); figuras.add(t1); figuras.add(t2);
    System.out.println(sumaPerimetros(figuras));
  }
}
