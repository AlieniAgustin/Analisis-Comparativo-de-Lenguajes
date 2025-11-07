public class Main {
    public static void main(String[] args) {
        Cuenta cuenta = new Cuenta(1000); // saldo inicial 1000

        Semaforo semaforo = new Semaforo(1);

        Thread t1 = new Thread(new OperacionCuenta(cuenta, true, 500, semaforo), "Hilo-1"); //deposita 500 pesos 
        Thread t2 = new Thread(new OperacionCuenta(cuenta, false, 300, semaforo), "Hilo-2"); //retira 300 pesos
        Thread t3 = new Thread(new OperacionCuenta(cuenta, true, 200, semaforo), "Hilo-3"); //deposita 200 pesos

        t1.start();
        t2.start();
        t3.start();
        //habria un race condition si el resultado final no es 1400. En efecto, hay race condition, ya que los threads acceden al saldo al mismo tiempo, pudiendo interferirse y generar valores incorrectos
        //el race condition se soluciona con el semaforo que se puso en OperacionCuenta
    }
}
